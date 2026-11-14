#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F3570
// Address: 0x3f3570 - 0x3f4000
void sub_003F3570_0x3f3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3570_0x3f3570");
#endif

    switch (ctx->pc) {
        case 0x3f35e0u: goto label_3f35e0;
        case 0x3f360cu: goto label_3f360c;
        case 0x3f3620u: goto label_3f3620;
        case 0x3f3638u: goto label_3f3638;
        case 0x3f3648u: goto label_3f3648;
        case 0x3f366cu: goto label_3f366c;
        case 0x3f367cu: goto label_3f367c;
        case 0x3f3684u: goto label_3f3684;
        case 0x3f36b0u: goto label_3f36b0;
        case 0x3f36ecu: goto label_3f36ec;
        case 0x3f3700u: goto label_3f3700;
        case 0x3f3718u: goto label_3f3718;
        case 0x3f3728u: goto label_3f3728;
        case 0x3f374cu: goto label_3f374c;
        case 0x3f375cu: goto label_3f375c;
        case 0x3f3780u: goto label_3f3780;
        case 0x3f3798u: goto label_3f3798;
        case 0x3f37b0u: goto label_3f37b0;
        case 0x3f37c0u: goto label_3f37c0;
        case 0x3f37e4u: goto label_3f37e4;
        case 0x3f37ecu: goto label_3f37ec;
        case 0x3f37f4u: goto label_3f37f4;
        case 0x3f380cu: goto label_3f380c;
        case 0x3f3824u: goto label_3f3824;
        case 0x3f3860u: goto label_3f3860;
        case 0x3f3870u: goto label_3f3870;
        case 0x3f38e8u: goto label_3f38e8;
        case 0x3f3900u: goto label_3f3900;
        case 0x3f3918u: goto label_3f3918;
        case 0x3f3928u: goto label_3f3928;
        case 0x3f394cu: goto label_3f394c;
        case 0x3f3964u: goto label_3f3964;
        case 0x3f3974u: goto label_3f3974;
        case 0x3f39b0u: goto label_3f39b0;
        case 0x3f39c0u: goto label_3f39c0;
        case 0x3f3a30u: goto label_3f3a30;
        case 0x3f3a48u: goto label_3f3a48;
        case 0x3f3a60u: goto label_3f3a60;
        case 0x3f3a70u: goto label_3f3a70;
        case 0x3f3a94u: goto label_3f3a94;
        case 0x3f3aacu: goto label_3f3aac;
        case 0x3f3abcu: goto label_3f3abc;
        case 0x3f3af8u: goto label_3f3af8;
        case 0x3f3b08u: goto label_3f3b08;
        case 0x3f3b78u: goto label_3f3b78;
        case 0x3f3b90u: goto label_3f3b90;
        case 0x3f3ba8u: goto label_3f3ba8;
        case 0x3f3bb8u: goto label_3f3bb8;
        case 0x3f3bdcu: goto label_3f3bdc;
        case 0x3f3bf4u: goto label_3f3bf4;
        case 0x3f3c04u: goto label_3f3c04;
        case 0x3f3c3cu: goto label_3f3c3c;
        case 0x3f3c4cu: goto label_3f3c4c;
        case 0x3f3ca8u: goto label_3f3ca8;
        case 0x3f3cbcu: goto label_3f3cbc;
        case 0x3f3cc8u: goto label_3f3cc8;
        case 0x3f3cd4u: goto label_3f3cd4;
        case 0x3f3ce0u: goto label_3f3ce0;
        case 0x3f3cecu: goto label_3f3cec;
        case 0x3f3cf8u: goto label_3f3cf8;
        case 0x3f3d04u: goto label_3f3d04;
        case 0x3f3d10u: goto label_3f3d10;
        case 0x3f3e58u: goto label_3f3e58;
        case 0x3f3e60u: goto label_3f3e60;
        case 0x3f3e90u: goto label_3f3e90;
        case 0x3f3ea0u: goto label_3f3ea0;
        case 0x3f3eacu: goto label_3f3eac;
        case 0x3f3eb8u: goto label_3f3eb8;
        case 0x3f3ec4u: goto label_3f3ec4;
        case 0x3f3ed0u: goto label_3f3ed0;
        case 0x3f3edcu: goto label_3f3edc;
        case 0x3f3ee8u: goto label_3f3ee8;
        case 0x3f3ef4u: goto label_3f3ef4;
        case 0x3f3f1cu: goto label_3f3f1c;
        case 0x3f3f48u: goto label_3f3f48;
        case 0x3f3f50u: goto label_3f3f50;
        case 0x3f3f98u: goto label_3f3f98;
        case 0x3f3facu: goto label_3f3fac;
        default: break;
    }

    ctx->pc = 0x3f3570u;

    // 0x3f3570: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3f3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3f3574: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3f3574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x3f3578: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3f3578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x3f357c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3f357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x3f3580: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3f3580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3584: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3f3584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x3f3588: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x3f358c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3f358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x3f3590: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3f3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x3f3594: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3f3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3f3598: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3f3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x3f359c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3f35a0: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x3f35a0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3f35a4: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x3f35a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3f35a8: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x3f35a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3f35ac: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x3f35acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3f35b0: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3f35b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3f35b4: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3f35b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3f35b8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3f35b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3f35bc: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3f35bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3f35c0: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3f35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3f35c4: 0xdec300f8  ld          $v1, 0xF8($s6)
    ctx->pc = 0x3f35c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 248)));
    // 0x3f35c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f35c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f35cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F35CCu;
    {
        const bool branch_taken_0x3f35cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F35CCu;
        // 0x3f35d0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f35cc) {
            ctx->pc = 0x3F35E8u;
            goto label_3f35e8;
        }
    }
    ctx->pc = 0x3F35D4u;
    // 0x3f35d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f35d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f35d8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F35D8u;
    SET_GPR_U32(ctx, 31, 0x3F35E0u);
    ctx->pc = 0x3F35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F35D8u;
    // 0x3f35dc: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F35D8u, 0x3F35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F35E0u;
label_3f35e0:
    // 0x3f35e0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3F35E0u;
    {
        const bool branch_taken_0x3f35e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F35E0u;
        // 0x3f35e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f35e0) {
            ctx->pc = 0x3F3764u;
            goto label_3f3764;
        }
    }
    ctx->pc = 0x3F35E8u;
label_3f35e8:
    // 0x3f35e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f35e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f35ec: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F35ECu;
    {
        const bool branch_taken_0x3f35ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F35ECu;
        // 0x3f35f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f35ec) {
            ctx->pc = 0x3F3698u;
            goto label_3f3698;
        }
    }
    ctx->pc = 0x3F35F4u;
    // 0x3f35f4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f35f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f35f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f35f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f35fc: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f35fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f3600: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f3600u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f3604: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3604u;
    SET_GPR_U32(ctx, 31, 0x3F360Cu);
    ctx->pc = 0x3F3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3604u;
    // 0x3f3608: 0x24a5edb0  addiu       $a1, $a1, -0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3604u, 0x3F360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F360Cu;
label_3f360c:
    // 0x3f360c: 0x8ed3015c  lw          $s3, 0x15C($s6)
    ctx->pc = 0x3f360cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3610: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f3610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f3614: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F3614u;
    {
        const bool branch_taken_0x3f3614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3614) {
            ctx->pc = 0x3F3654u;
            goto label_3f3654;
        }
    }
    ctx->pc = 0x3F361Cu;
    // 0x3f361c: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f361cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
label_3f3620:
    // 0x3f3620: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3624: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f3624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3628: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x3f3628u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f362c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3630: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3630u;
    SET_GPR_U32(ctx, 31, 0x3F3638u);
    ctx->pc = 0x3F3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3630u;
    // 0x3f3634: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3630u, 0x3F3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3638u;
label_3f3638:
    // 0x3f3638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f363c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f363cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3640: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3640u;
    SET_GPR_U32(ctx, 31, 0x3F3648u);
    ctx->pc = 0x3F3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3640u;
    // 0x3f3644: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3640u, 0x3F3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3648u;
label_3f3648:
    // 0x3f3648: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f3648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f364c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F364Cu;
    {
        const bool branch_taken_0x3f364c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f364c) {
            ctx->pc = 0x3F3650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F364Cu;
            // 0x3f3650: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3620;
        }
    }
    ctx->pc = 0x3F3654u;
label_3f3654:
    // 0x3f3654: 0x12400200  beqz        $s2, . + 4 + (0x200 << 2)
    ctx->pc = 0x3F3654u;
    {
        const bool branch_taken_0x3f3654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3654u;
        // 0x3f3658: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3654) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F365Cu;
    // 0x3f365c: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f365cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3660: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f3660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3664: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3664u;
    SET_GPR_U32(ctx, 31, 0x3F366Cu);
    ctx->pc = 0x3F3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3664u;
    // 0x3f3668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3664u, 0x3F366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F366Cu;
label_3f366c:
    // 0x3f366c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f366cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3670: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f3670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3674: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3674u;
    SET_GPR_U32(ctx, 31, 0x3F367Cu);
    ctx->pc = 0x3F3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3674u;
    // 0x3f3678: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3674u, 0x3F367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F367Cu;
label_3f367c:
    // 0x3f367c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x3F367Cu;
    {
        const bool branch_taken_0x3f367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f367c) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3684u;
label_3f3684:
    // 0x3f3684: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f3688: 0x10400240  beqz        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x3F3688u;
    {
        const bool branch_taken_0x3f3688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3688u;
        // 0x3f368c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3688) {
            ctx->pc = 0x3F3F8Cu;
            goto label_3f3f8c;
        }
    }
    ctx->pc = 0x3F3690u;
    // 0x3f3690: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x3F3690u;
    {
        const bool branch_taken_0x3f3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3690u;
        // 0x3f3694: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3690) {
            ctx->pc = 0x3F3E88u;
            goto label_3f3e88;
        }
    }
    ctx->pc = 0x3F3698u;
label_3f3698:
    // 0x3f3698: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f3698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f369c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F369Cu;
    {
        const bool branch_taken_0x3f369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F369Cu;
        // 0x3f36a0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f369c) {
            ctx->pc = 0x3F36B8u;
            goto label_3f36b8;
        }
    }
    ctx->pc = 0x3F36A4u;
    // 0x3f36a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f36a8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F36A8u;
    SET_GPR_U32(ctx, 31, 0x3F36B0u);
    ctx->pc = 0x3F36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F36A8u;
    // 0x3f36ac: 0x24a5edc8  addiu       $a1, $a1, -0x1238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F36A8u, 0x3F36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F36B0u;
label_3f36b0:
    // 0x3f36b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3F36B0u;
    {
        const bool branch_taken_0x3f36b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36B0u;
        // 0x3f36b4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f36b0) {
            ctx->pc = 0x3F3764u;
            goto label_3f3764;
        }
    }
    ctx->pc = 0x3F36B8u;
label_3f36b8:
    // 0x3f36b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f36bc: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3F36BCu;
    {
        const bool branch_taken_0x3f36bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f36bc) {
            ctx->pc = 0x3F36C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F36BCu;
            // 0x3f36c0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3764u;
            goto label_3f3764;
        }
    }
    ctx->pc = 0x3F36C4u;
    // 0x3f36c4: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x3f36c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3f36c8: 0x30420804  andi        $v0, $v0, 0x804
    ctx->pc = 0x3f36c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2052);
    // 0x3f36cc: 0x14440025  bne         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F36CCu;
    {
        const bool branch_taken_0x3f36cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3F36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36CCu;
        // 0x3f36d0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f36cc) {
            ctx->pc = 0x3F3764u;
            goto label_3f3764;
        }
    }
    ctx->pc = 0x3F36D4u;
    // 0x3f36d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f36d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f36d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f36d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f36dc: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f36dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f36e0: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f36e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f36e4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F36E4u;
    SET_GPR_U32(ctx, 31, 0x3F36ECu);
    ctx->pc = 0x3F36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F36E4u;
    // 0x3f36e8: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F36E4u, 0x3F36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F36ECu;
label_3f36ec:
    // 0x3f36ec: 0x8ed3015c  lw          $s3, 0x15C($s6)
    ctx->pc = 0x3f36ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f36f0: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f36f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f36f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F36F4u;
    {
        const bool branch_taken_0x3f36f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f36f4) {
            ctx->pc = 0x3F3734u;
            goto label_3f3734;
        }
    }
    ctx->pc = 0x3F36FCu;
    // 0x3f36fc: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f36fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
label_3f3700:
    // 0x3f3700: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3704: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f3704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3708: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x3f3708u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f370c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3710: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3710u;
    SET_GPR_U32(ctx, 31, 0x3F3718u);
    ctx->pc = 0x3F3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3710u;
    // 0x3f3714: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3710u, 0x3F3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3718u;
label_3f3718:
    // 0x3f3718: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f371c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3720: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3720u;
    SET_GPR_U32(ctx, 31, 0x3F3728u);
    ctx->pc = 0x3F3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3720u;
    // 0x3f3724: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3720u, 0x3F3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3728u;
label_3f3728:
    // 0x3f3728: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f3728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f372c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F372Cu;
    {
        const bool branch_taken_0x3f372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f372c) {
            ctx->pc = 0x3F3730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F372Cu;
            // 0x3f3730: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3700;
        }
    }
    ctx->pc = 0x3F3734u;
label_3f3734:
    // 0x3f3734: 0x124001c8  beqz        $s2, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x3F3734u;
    {
        const bool branch_taken_0x3f3734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3734u;
        // 0x3f3738: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3734) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F373Cu;
    // 0x3f373c: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f373cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f3740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3744: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3744u;
    SET_GPR_U32(ctx, 31, 0x3F374Cu);
    ctx->pc = 0x3F3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3744u;
    // 0x3f3748: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3744u, 0x3F374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F374Cu;
label_3f374c:
    // 0x3f374c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3750: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f3750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3754: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3754u;
    SET_GPR_U32(ctx, 31, 0x3F375Cu);
    ctx->pc = 0x3F3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3754u;
    // 0x3f3758: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3754u, 0x3F375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F375Cu;
label_3f375c:
    // 0x3f375c: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x3F375Cu;
    {
        const bool branch_taken_0x3f375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f375c) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3764u;
label_3f3764:
    // 0x3f3764: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F3764u;
    {
        const bool branch_taken_0x3f3764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3764u;
        // 0x3f3768: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3764) {
            ctx->pc = 0x3F37FCu;
            goto label_3f37fc;
        }
    }
    ctx->pc = 0x3F376Cu;
    // 0x3f376c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f376cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f3770: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f3770u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f3774: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f3774u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f3778: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3778u;
    SET_GPR_U32(ctx, 31, 0x3F3780u);
    ctx->pc = 0x3F377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3778u;
    // 0x3f377c: 0x24a5ee00  addiu       $a1, $a1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3778u, 0x3F3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3780u;
label_3f3780:
    // 0x3f3780: 0x8ed3015c  lw          $s3, 0x15C($s6)
    ctx->pc = 0x3f3780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3784: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f3784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f3788: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3788u;
    {
        const bool branch_taken_0x3f3788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3788) {
            ctx->pc = 0x3F37CCu;
            goto label_3f37cc;
        }
    }
    ctx->pc = 0x3F3790u;
    // 0x3f3790: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f3790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3794: 0x0  nop
    ctx->pc = 0x3f3794u;
    // NOP
label_3f3798:
    // 0x3f3798: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f379c: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f379cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f37a0: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x3f37a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3f37a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f37a8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F37A8u;
    SET_GPR_U32(ctx, 31, 0x3F37B0u);
    ctx->pc = 0x3F37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37A8u;
    // 0x3f37ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F37A8u, 0x3F37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F37B0u;
label_3f37b0:
    // 0x3f37b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f37b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f37b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f37b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f37b8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F37B8u;
    SET_GPR_U32(ctx, 31, 0x3F37C0u);
    ctx->pc = 0x3F37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37B8u;
    // 0x3f37bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F37B8u, 0x3F37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F37C0u;
label_3f37c0:
    // 0x3f37c0: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x3f37c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f37c4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F37C4u;
    {
        const bool branch_taken_0x3f37c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f37c4) {
            ctx->pc = 0x3F37C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F37C4u;
            // 0x3f37c8: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3798;
        }
    }
    ctx->pc = 0x3F37CCu;
label_3f37cc:
    // 0x3f37cc: 0x124001a2  beqz        $s2, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x3F37CCu;
    {
        const bool branch_taken_0x3f37cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37CCu;
        // 0x3f37d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f37cc) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F37D4u;
    // 0x3f37d4: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f37d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f37d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f37d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f37dc: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F37DCu;
    SET_GPR_U32(ctx, 31, 0x3F37E4u);
    ctx->pc = 0x3F37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37DCu;
    // 0x3f37e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F37DCu, 0x3F37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F37E4u;
label_3f37e4:
    // 0x3f37e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f37e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f37e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f37e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f37ec:
    // 0x3f37ec: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F37ECu;
    SET_GPR_U32(ctx, 31, 0x3F37F4u);
    ctx->pc = 0x3F37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F37ECu;
    // 0x3f37f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F37ECu, 0x3F37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F37F4u;
label_3f37f4:
    // 0x3f37f4: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x3F37F4u;
    {
        const bool branch_taken_0x3f37f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f37f4) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F37FCu;
label_3f37fc:
    // 0x3f37fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3f37fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3804: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3804u;
    SET_GPR_U32(ctx, 31, 0x3F380Cu);
    ctx->pc = 0x3F3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3804u;
    // 0x3f3808: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3804u, 0x3F380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F380Cu;
label_3f380c:
    // 0x3f380c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3f380cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x3f3810: 0x36313880  ori         $s1, $s1, 0x3880
    ctx->pc = 0x3f3810u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)14464);
    // 0x3f3814: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3818: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f381c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F381Cu;
    SET_GPR_U32(ctx, 31, 0x3F3824u);
    ctx->pc = 0x3F3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F381Cu;
    // 0x3f3820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F381Cu, 0x3F3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3824u;
label_3f3824:
    // 0x3f3824: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3828: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f382c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f382cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3834: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3f3834u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3838: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f383c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3840: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3f3840u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3844: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3848: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f3848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f384c: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f384cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f3850: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x3f3850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f3854: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3858: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3858u;
    SET_GPR_U32(ctx, 31, 0x3F3860u);
    ctx->pc = 0x3F385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3858u;
    // 0x3f385c: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3858u, 0x3F3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3860u;
label_3f3860:
    // 0x3f3860: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3868: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3868u;
    SET_GPR_U32(ctx, 31, 0x3F3870u);
    ctx->pc = 0x3F386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3868u;
    // 0x3f386c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3868u, 0x3F3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3870u;
label_3f3870:
    // 0x3f3870: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x3f3870u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3f3874: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3878: 0x223302a  slt         $a2, $s1, $v1
    ctx->pc = 0x3f3878u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f387c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3f387cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3880: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f3880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3884: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f3888: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x3f3888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f388c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f388cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f3890: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f3890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3894: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3898: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f3898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f389c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f389cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f38a0: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3F38A0u;
    {
        const bool branch_taken_0x3f38a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F38A0u;
        // 0x3f38a4: 0xffa20030  sd          $v0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f38a0) {
            ctx->pc = 0x3F38D4u;
            goto label_3f38d4;
        }
    }
    ctx->pc = 0x3F38A8u;
    // 0x3f38a8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3f38a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f38ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3F38ACu;
    {
        const bool branch_taken_0x3f38ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f38ac) {
            ctx->pc = 0x3F38B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F38ACu;
            // 0x3f38b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F38D8u;
            goto label_3f38d8;
        }
    }
    ctx->pc = 0x3F38B4u;
    // 0x3f38b4: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x3f38b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3f38b8: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x3f38b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x3f38bc: 0x365286a0  ori         $s2, $s2, 0x86A0
    ctx->pc = 0x3f38bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)34464);
    // 0x3f38c0: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x3f38c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f38c4: 0x83102d  daddu       $v0, $a0, $v1
    ctx->pc = 0x3f38c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f38c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3f38c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f38cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F38CCu;
    {
        const bool branch_taken_0x3f38cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F38CCu;
        // 0x3f38d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f38cc) {
            ctx->pc = 0x3F3958u;
            goto label_3f3958;
        }
    }
    ctx->pc = 0x3F38D4u;
label_3f38d4:
    // 0x3f38d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f38d8:
    // 0x3f38d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f38dc: 0x24a5ee20  addiu       $a1, $a1, -0x11E0
    ctx->pc = 0x3f38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
    // 0x3f38e0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F38E0u;
    SET_GPR_U32(ctx, 31, 0x3F38E8u);
    ctx->pc = 0x3F38E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F38E0u;
    // 0x3f38e4: 0x24130018  addiu       $s3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F38E0u, 0x3F38E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F38E8u;
label_3f38e8:
    // 0x3f38e8: 0x8ed2015c  lw          $s2, 0x15C($s6)
    ctx->pc = 0x3f38e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f38ec: 0x2e420018  sltiu       $v0, $s2, 0x18
    ctx->pc = 0x3f38ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x3f38f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F38F0u;
    {
        const bool branch_taken_0x3f38f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f38f0) {
            ctx->pc = 0x3F3934u;
            goto label_3f3934;
        }
    }
    ctx->pc = 0x3F38F8u;
    // 0x3f38f8: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f38f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f38fc: 0x0  nop
    ctx->pc = 0x3f38fcu;
    // NOP
label_3f3900:
    // 0x3f3900: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3904: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f3904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3908: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x3f3908u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3f390c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f390cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3910: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3910u;
    SET_GPR_U32(ctx, 31, 0x3F3918u);
    ctx->pc = 0x3F3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3910u;
    // 0x3f3914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3910u, 0x3F3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3918u;
label_3f3918:
    // 0x3f3918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f391c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f391cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3920: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3920u;
    SET_GPR_U32(ctx, 31, 0x3F3928u);
    ctx->pc = 0x3F3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3920u;
    // 0x3f3924: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3920u, 0x3F3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3928u;
label_3f3928:
    // 0x3f3928: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x3f3928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f392c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F392Cu;
    {
        const bool branch_taken_0x3f392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f392c) {
            ctx->pc = 0x3F3930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F392Cu;
            // 0x3f3930: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3900;
        }
    }
    ctx->pc = 0x3F3934u;
label_3f3934:
    // 0x3f3934: 0x12600148  beqz        $s3, . + 4 + (0x148 << 2)
    ctx->pc = 0x3F3934u;
    {
        const bool branch_taken_0x3f3934 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3934u;
        // 0x3f3938: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3934) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F393Cu;
    // 0x3f393c: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f393cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3940: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f3940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3944: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3944u;
    SET_GPR_U32(ctx, 31, 0x3F394Cu);
    ctx->pc = 0x3F3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3944u;
    // 0x3f3948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3944u, 0x3F394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F394Cu;
label_3f394c:
    // 0x3f394c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3950: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x3F3950u;
    {
        const bool branch_taken_0x3f3950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3950u;
        // 0x3f3954: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3950) {
            ctx->pc = 0x3F37ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f37ec;
        }
    }
    ctx->pc = 0x3F3958u;
label_3f3958:
    // 0x3f3958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f395c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F395Cu;
    SET_GPR_U32(ctx, 31, 0x3F3964u);
    ctx->pc = 0x3F3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F395Cu;
    // 0x3f3960: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F395Cu, 0x3F3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3964u;
label_3f3964:
    // 0x3f3964: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3968: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f396c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F396Cu;
    SET_GPR_U32(ctx, 31, 0x3F3974u);
    ctx->pc = 0x3F3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F396Cu;
    // 0x3f3970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F396Cu, 0x3F3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3974u;
label_3f3974:
    // 0x3f3974: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3978: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f397c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f397cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3984: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3f3984u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3988: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f398c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3990: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3f3990u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3994: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3998: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f3998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f399c: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f39a0: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x3f39a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f39a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f39a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f39a8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F39A8u;
    SET_GPR_U32(ctx, 31, 0x3F39B0u);
    ctx->pc = 0x3F39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F39A8u;
    // 0x3f39ac: 0xffa20038  sd          $v0, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F39A8u, 0x3F39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F39B0u;
label_3f39b0:
    // 0x3f39b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f39b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f39b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f39b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f39b8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F39B8u;
    SET_GPR_U32(ctx, 31, 0x3F39C0u);
    ctx->pc = 0x3F39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F39B8u;
    // 0x3f39bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F39B8u, 0x3F39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F39C0u;
label_3f39c0:
    // 0x3f39c0: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x3f39c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f39c4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f39c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f39c8: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f39c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f39cc: 0x224302a  slt         $a2, $s1, $a0
    ctx->pc = 0x3f39ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f39d0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3f39d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f39d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f39d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f39d8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f39d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f39dc: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x3f39dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f39e0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f39e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f39e4: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f39e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f39e8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f39e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f39ec: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f39ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f39f0: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3F39F0u;
    {
        const bool branch_taken_0x3f39f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F39F0u;
        // 0x3f39f4: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f39f0) {
            ctx->pc = 0x3F3A1Cu;
            goto label_3f3a1c;
        }
    }
    ctx->pc = 0x3F39F8u;
    // 0x3f39f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3f39f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f39fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F39FCu;
    {
        const bool branch_taken_0x3f39fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f39fc) {
            ctx->pc = 0x3F3A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F39FCu;
            // 0x3f3a00: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3A20u;
            goto label_3f3a20;
        }
    }
    ctx->pc = 0x3F3A04u;
    // 0x3f3a04: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x3f3a04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f3a08: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x3f3a08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3a0c: 0x64102d  daddu       $v0, $v1, $a0
    ctx->pc = 0x3f3a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f3a10: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3f3a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f3a14: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F3A14u;
    {
        const bool branch_taken_0x3f3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A14u;
        // 0x3f3a18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3a14) {
            ctx->pc = 0x3F3AA0u;
            goto label_3f3aa0;
        }
    }
    ctx->pc = 0x3F3A1Cu;
label_3f3a1c:
    // 0x3f3a1c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f3a20:
    // 0x3f3a20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a24: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x3f3a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    // 0x3f3a28: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3A28u;
    SET_GPR_U32(ctx, 31, 0x3F3A30u);
    ctx->pc = 0x3F3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A28u;
    // 0x3f3a2c: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3A28u, 0x3F3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A30u;
label_3f3a30:
    // 0x3f3a30: 0x8ed2015c  lw          $s2, 0x15C($s6)
    ctx->pc = 0x3f3a30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3a34: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x3f3a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3f3a38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3A38u;
    {
        const bool branch_taken_0x3f3a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3a38) {
            ctx->pc = 0x3F3A7Cu;
            goto label_3f3a7c;
        }
    }
    ctx->pc = 0x3F3A40u;
    // 0x3f3a40: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f3a40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3a44: 0x0  nop
    ctx->pc = 0x3f3a44u;
    // NOP
label_3f3a48:
    // 0x3f3a48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a4c: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f3a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3a50: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x3f3a50u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3f3a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a58: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3A58u;
    SET_GPR_U32(ctx, 31, 0x3F3A60u);
    ctx->pc = 0x3F3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A58u;
    // 0x3f3a5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3A58u, 0x3F3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A60u;
label_3f3a60:
    // 0x3f3a60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f3a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a68: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3A68u;
    SET_GPR_U32(ctx, 31, 0x3F3A70u);
    ctx->pc = 0x3F3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A68u;
    // 0x3f3a6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3A68u, 0x3F3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A70u;
label_3f3a70:
    // 0x3f3a70: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x3f3a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3a74: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F3A74u;
    {
        const bool branch_taken_0x3f3a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3a74) {
            ctx->pc = 0x3F3A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3A74u;
            // 0x3f3a78: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3a48;
        }
    }
    ctx->pc = 0x3F3A7Cu;
label_3f3a7c:
    // 0x3f3a7c: 0x126000f6  beqz        $s3, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3F3A7Cu;
    {
        const bool branch_taken_0x3f3a7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A7Cu;
        // 0x3f3a80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3a7c) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3A84u;
    // 0x3f3a84: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f3a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3a88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f3a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a8c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3A8Cu;
    SET_GPR_U32(ctx, 31, 0x3F3A94u);
    ctx->pc = 0x3F3A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3A8Cu;
    // 0x3f3a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3A8Cu, 0x3F3A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3A94u;
label_3f3a94:
    // 0x3f3a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3a98: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x3F3A98u;
    {
        const bool branch_taken_0x3f3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3A98u;
        // 0x3f3a9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3a98) {
            ctx->pc = 0x3F37ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f37ec;
        }
    }
    ctx->pc = 0x3F3AA0u;
label_3f3aa0:
    // 0x3f3aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3aa4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3AA4u;
    SET_GPR_U32(ctx, 31, 0x3F3AACu);
    ctx->pc = 0x3F3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3AA4u;
    // 0x3f3aa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3AA4u, 0x3F3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3AACu;
label_3f3aac:
    // 0x3f3aac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3ab0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ab4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3AB4u;
    SET_GPR_U32(ctx, 31, 0x3F3ABCu);
    ctx->pc = 0x3F3AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3AB4u;
    // 0x3f3ab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3AB4u, 0x3F3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3ABCu;
label_3f3abc:
    // 0x3f3abc: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3ac0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ac4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f3ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3acc: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3f3accu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3ad0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f3ad4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f3ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3ad8: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3f3ad8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3adc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3ae0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f3ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f3ae4: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f3ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f3ae8: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x3f3ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f3aec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3af0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3AF0u;
    SET_GPR_U32(ctx, 31, 0x3F3AF8u);
    ctx->pc = 0x3F3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3AF0u;
    // 0x3f3af4: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3AF0u, 0x3F3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3AF8u;
label_3f3af8:
    // 0x3f3af8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3afc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3b00: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3B00u;
    SET_GPR_U32(ctx, 31, 0x3F3B08u);
    ctx->pc = 0x3F3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B00u;
    // 0x3f3b04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3B00u, 0x3F3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B08u;
label_3f3b08:
    // 0x3f3b08: 0xdfa30048  ld          $v1, 0x48($sp)
    ctx->pc = 0x3f3b08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3f3b0c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3b10: 0x223302a  slt         $a2, $s1, $v1
    ctx->pc = 0x3f3b10u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f3b14: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3f3b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3b18: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f3b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3b1c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f3b20: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x3f3b20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3b24: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f3b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f3b28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f3b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3b2c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3b30: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f3b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f3b34: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f3b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f3b38: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3F3B38u;
    {
        const bool branch_taken_0x3f3b38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B38u;
        // 0x3f3b3c: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3b38) {
            ctx->pc = 0x3F3B64u;
            goto label_3f3b64;
        }
    }
    ctx->pc = 0x3F3B40u;
    // 0x3f3b40: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3f3b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f3b44: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3B44u;
    {
        const bool branch_taken_0x3f3b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3b44) {
            ctx->pc = 0x3F3B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3B44u;
            // 0x3f3b48: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3B68u;
            goto label_3f3b68;
        }
    }
    ctx->pc = 0x3F3B4Cu;
    // 0x3f3b4c: 0xdfa40048  ld          $a0, 0x48($sp)
    ctx->pc = 0x3f3b4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3f3b50: 0xdfa30050  ld          $v1, 0x50($sp)
    ctx->pc = 0x3f3b50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3b54: 0x83102d  daddu       $v0, $a0, $v1
    ctx->pc = 0x3f3b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3b58: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3f3b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f3b5c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F3B5Cu;
    {
        const bool branch_taken_0x3f3b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B5Cu;
        // 0x3f3b60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3b5c) {
            ctx->pc = 0x3F3BE8u;
            goto label_3f3be8;
        }
    }
    ctx->pc = 0x3F3B64u;
label_3f3b64:
    // 0x3f3b64: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f3b68:
    // 0x3f3b68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3b6c: 0x24a5ee58  addiu       $a1, $a1, -0x11A8
    ctx->pc = 0x3f3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
    // 0x3f3b70: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3B70u;
    SET_GPR_U32(ctx, 31, 0x3F3B78u);
    ctx->pc = 0x3F3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B70u;
    // 0x3f3b74: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3B70u, 0x3F3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B78u;
label_3f3b78:
    // 0x3f3b78: 0x8ed2015c  lw          $s2, 0x15C($s6)
    ctx->pc = 0x3f3b78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3b7c: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x3f3b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3f3b80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3B80u;
    {
        const bool branch_taken_0x3f3b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3b80) {
            ctx->pc = 0x3F3BC4u;
            goto label_3f3bc4;
        }
    }
    ctx->pc = 0x3F3B88u;
    // 0x3f3b88: 0x8ed10158  lw          $s1, 0x158($s6)
    ctx->pc = 0x3f3b88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3b8c: 0x0  nop
    ctx->pc = 0x3f3b8cu;
    // NOP
label_3f3b90:
    // 0x3f3b90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3b94: 0x8ed0015c  lw          $s0, 0x15C($s6)
    ctx->pc = 0x3f3b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x3f3b98: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x3f3b98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3f3b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ba0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3BA0u;
    SET_GPR_U32(ctx, 31, 0x3F3BA8u);
    ctx->pc = 0x3F3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BA0u;
    // 0x3f3ba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3BA0u, 0x3F3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BA8u;
label_3f3ba8:
    // 0x3f3ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f3ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3bac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f3bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3bb0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3BB0u;
    SET_GPR_U32(ctx, 31, 0x3F3BB8u);
    ctx->pc = 0x3F3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BB0u;
    // 0x3f3bb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3BB0u, 0x3F3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BB8u;
label_3f3bb8:
    // 0x3f3bb8: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x3f3bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3bbc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F3BBCu;
    {
        const bool branch_taken_0x3f3bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3bbc) {
            ctx->pc = 0x3F3BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3BBCu;
            // 0x3f3bc0: 0x8ed10158  lw          $s1, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3b90;
        }
    }
    ctx->pc = 0x3F3BC4u;
label_3f3bc4:
    // 0x3f3bc4: 0x126000a4  beqz        $s3, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3F3BC4u;
    {
        const bool branch_taken_0x3f3bc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BC4u;
        // 0x3f3bc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3bc4) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3BCCu;
    // 0x3f3bcc: 0x8ed00158  lw          $s0, 0x158($s6)
    ctx->pc = 0x3f3bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x3f3bd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f3bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3bd4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3BD4u;
    SET_GPR_U32(ctx, 31, 0x3F3BDCu);
    ctx->pc = 0x3F3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BD4u;
    // 0x3f3bd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3BD4u, 0x3F3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BDCu;
label_3f3bdc:
    // 0x3f3bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3be0: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x3F3BE0u;
    {
        const bool branch_taken_0x3f3be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3BE0u;
        // 0x3f3be4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3be0) {
            ctx->pc = 0x3F37ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f37ec;
        }
    }
    ctx->pc = 0x3F3BE8u;
label_3f3be8:
    // 0x3f3be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3bec: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3BECu;
    SET_GPR_U32(ctx, 31, 0x3F3BF4u);
    ctx->pc = 0x3F3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BECu;
    // 0x3f3bf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3BECu, 0x3F3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3BF4u;
label_3f3bf4:
    // 0x3f3bf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3bf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3bfc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3BFCu;
    SET_GPR_U32(ctx, 31, 0x3F3C04u);
    ctx->pc = 0x3F3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3BFCu;
    // 0x3f3c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3BFCu, 0x3F3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C04u;
label_3f3c04:
    // 0x3f3c04: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3c08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c0c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f3c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c14: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3f3c14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3c18: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f3c1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f3c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3c20: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3f3c20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3c24: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3c28: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f3c28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f3c2c: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f3c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f3c30: 0x47f02d  daddu       $fp, $v0, $a3
    ctx->pc = 0x3f3c30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f3c34: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F3C34u;
    SET_GPR_U32(ctx, 31, 0x3F3C3Cu);
    ctx->pc = 0x3F3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3C34u;
    // 0x3f3c38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F3C34u, 0x3F3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C3Cu;
label_3f3c3c:
    // 0x3f3c3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f3c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3c44: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F3C44u;
    SET_GPR_U32(ctx, 31, 0x3F3C4Cu);
    ctx->pc = 0x3F3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3C44u;
    // 0x3f3c48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F3C44u, 0x3F3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3C4Cu;
label_3f3c4c:
    // 0x3f3c4c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f3c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3c50: 0x23e302a  slt         $a2, $s1, $fp
    ctx->pc = 0x3f3c50u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3f3c54: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f3c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f3c58: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3f3c58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f3c5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f3c60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f3c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f3c64: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x3f3c64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f3c68: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f3c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f3c6c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f3c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f3c70: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f3c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f3c74: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3C74u;
    {
        const bool branch_taken_0x3f3c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3C74u;
        // 0x3f3c78: 0x45b82d  daddu       $s7, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3c74) {
            ctx->pc = 0x3F3C98u;
            goto label_3f3c98;
        }
    }
    ctx->pc = 0x3F3C7Cu;
    // 0x3f3c7c: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x3f3c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3f3c80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3C80u;
    {
        const bool branch_taken_0x3f3c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c80) {
            ctx->pc = 0x3F3C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3C80u;
            // 0x3f3c84: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3C9Cu;
            goto label_3f3c9c;
        }
    }
    ctx->pc = 0x3F3C88u;
    // 0x3f3c88: 0x3d7102d  daddu       $v0, $fp, $s7
    ctx->pc = 0x3f3c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 23));
    // 0x3f3c8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3f3c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f3c90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3C90u;
    {
        const bool branch_taken_0x3f3c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3c90) {
            ctx->pc = 0x3F3CB0u;
            goto label_3f3cb0;
        }
    }
    ctx->pc = 0x3F3C98u;
label_3f3c98:
    // 0x3f3c98: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f3c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f3c9c:
    // 0x3f3c9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ca0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3CA0u;
    SET_GPR_U32(ctx, 31, 0x3F3CA8u);
    ctx->pc = 0x3F3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CA0u;
    // 0x3f3ca4: 0x24a5ee78  addiu       $a1, $a1, -0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3CA0u, 0x3F3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CA8u;
label_3f3ca8:
    // 0x3f3ca8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3F3CA8u;
    {
        const bool branch_taken_0x3f3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3ca8) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3CB0u;
label_3f3cb0:
    // 0x3f3cb0: 0xc7948130  lwc1        $f20, -0x7ED0($gp)
    ctx->pc = 0x3f3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f3cb4: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CB4u;
    SET_GPR_U32(ctx, 31, 0x3F3CBCu);
    ctx->pc = 0x3F3CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CB4u;
    // 0x3f3cb8: 0xdfa40028  ld          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CB4u, 0x3F3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CBCu;
label_3f3cbc:
    // 0x3f3cbc: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x3f3cbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f3cc0: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CC0u;
    SET_GPR_U32(ctx, 31, 0x3F3CC8u);
    ctx->pc = 0x3F3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CC0u;
    // 0x3f3cc4: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CC0u, 0x3F3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CC8u;
label_3f3cc8:
    // 0x3f3cc8: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x3f3cc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f3ccc: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CCCu;
    SET_GPR_U32(ctx, 31, 0x3F3CD4u);
    ctx->pc = 0x3F3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CCCu;
    // 0x3f3cd0: 0x46140582  mul.s       $f22, $f0, $f20 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CCCu, 0x3F3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CD4u;
label_3f3cd4:
    // 0x3f3cd4: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x3f3cd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3cd8: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CD8u;
    SET_GPR_U32(ctx, 31, 0x3F3CE0u);
    ctx->pc = 0x3F3CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CD8u;
    // 0x3f3cdc: 0x461405c2  mul.s       $f23, $f0, $f20 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CD8u, 0x3F3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CE0u;
label_3f3ce0:
    // 0x3f3ce0: 0xdfa40048  ld          $a0, 0x48($sp)
    ctx->pc = 0x3f3ce0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3f3ce4: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CE4u;
    SET_GPR_U32(ctx, 31, 0x3F3CECu);
    ctx->pc = 0x3F3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CE4u;
    // 0x3f3ce8: 0x46140602  mul.s       $f24, $f0, $f20 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CE4u, 0x3F3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CECu;
label_3f3cec:
    // 0x3f3cec: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x3f3cecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3cf0: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CF0u;
    SET_GPR_U32(ctx, 31, 0x3F3CF8u);
    ctx->pc = 0x3F3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CF0u;
    // 0x3f3cf4: 0x46140642  mul.s       $f25, $f0, $f20 (Delay Slot)
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CF0u, 0x3F3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3CF8u;
label_3f3cf8:
    // 0x3f3cf8: 0x46140682  mul.s       $f26, $f0, $f20
    ctx->pc = 0x3f3cf8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3f3cfc: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3CFCu;
    SET_GPR_U32(ctx, 31, 0x3F3D04u);
    ctx->pc = 0x3F3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3CFCu;
    // 0x3f3d00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3CFCu, 0x3F3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D04u;
label_3f3d04:
    // 0x3f3d04: 0x461406c2  mul.s       $f27, $f0, $f20
    ctx->pc = 0x3f3d04u;
    ctx->f[27] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3f3d08: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3F3D08u;
    SET_GPR_U32(ctx, 31, 0x3F3D10u);
    ctx->pc = 0x3F3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3D08u;
    // 0x3f3d0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3F3D08u, 0x3F3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D10u;
label_3f3d10:
    // 0x3f3d10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3f3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3d14: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x3f3d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3f3d18: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3f3d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3f3d1c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3F3D1Cu;
    {
        const bool branch_taken_0x3f3d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D1Cu;
        // 0x3f3d20: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d1c) {
            ctx->pc = 0x3F3E98u;
            goto label_3f3e98;
        }
    }
    ctx->pc = 0x3F3D24u;
    // 0x3f3d24: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x3f3d24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3f3d28: 0x646285da  daddiu      $v0, $v1, -0x7A26
    ctx->pc = 0x3f3d28u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294936026);
    // 0x3f3d2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3d30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3d34: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3D34u;
    {
        const bool branch_taken_0x3f3d34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3d34) {
            ctx->pc = 0x3F3D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3D34u;
            // 0x3f3d38: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D3Cu;
            goto label_3f3d3c;
        }
    }
    ctx->pc = 0x3F3D3Cu;
label_3f3d3c:
    // 0x3f3d3c: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3d40: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3F3D40u;
    {
        const bool branch_taken_0x3f3d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D40u;
        // 0x3f3d44: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d40) {
            ctx->pc = 0x3F3E4Cu;
            goto label_3f3e4c;
        }
    }
    ctx->pc = 0x3F3D48u;
    // 0x3f3d48: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x3f3d48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f3d4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f3d50: 0x34427f7c  ori         $v0, $v0, 0x7F7C
    ctx->pc = 0x3f3d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32636);
    // 0x3f3d54: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3f3d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f3d58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3d5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3d60: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3D60u;
    {
        const bool branch_taken_0x3f3d60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3d60) {
            ctx->pc = 0x3F3D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3D60u;
            // 0x3f3d64: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D68u;
            goto label_3f3d68;
        }
    }
    ctx->pc = 0x3F3D68u;
label_3f3d68:
    // 0x3f3d68: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3d6c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3F3D6Cu;
    {
        const bool branch_taken_0x3f3d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D6Cu;
        // 0x3f3d70: 0xdfa30038  ld          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d6c) {
            ctx->pc = 0x3F3E4Cu;
            goto label_3f3e4c;
        }
    }
    ctx->pc = 0x3F3D74u;
    // 0x3f3d74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f3d78: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x3f3d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x3f3d7c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x3f3d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f3d80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3d84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3d88: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3D88u;
    {
        const bool branch_taken_0x3f3d88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3d88) {
            ctx->pc = 0x3F3D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3D88u;
            // 0x3f3d8c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3D90u;
            goto label_3f3d90;
        }
    }
    ctx->pc = 0x3F3D90u;
label_3f3d90:
    // 0x3f3d90: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3d94: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3F3D94u;
    {
        const bool branch_taken_0x3f3d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D94u;
        // 0x3f3d98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d94) {
            ctx->pc = 0x3F3E50u;
            goto label_3f3e50;
        }
    }
    ctx->pc = 0x3F3D9Cu;
    // 0x3f3d9c: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x3f3d9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3da0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f3da4: 0x34427f18  ori         $v0, $v0, 0x7F18
    ctx->pc = 0x3f3da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32536);
    // 0x3f3da8: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3f3da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f3dac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3db0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3db4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3DB4u;
    {
        const bool branch_taken_0x3f3db4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3db4) {
            ctx->pc = 0x3F3DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3DB4u;
            // 0x3f3db8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3DBCu;
            goto label_3f3dbc;
        }
    }
    ctx->pc = 0x3F3DBCu;
label_3f3dbc:
    // 0x3f3dbc: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3dc0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F3DC0u;
    {
        const bool branch_taken_0x3f3dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DC0u;
        // 0x3f3dc4: 0xdfa30048  ld          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3dc0) {
            ctx->pc = 0x3F3E4Cu;
            goto label_3f3e4c;
        }
    }
    ctx->pc = 0x3F3DC8u;
    // 0x3f3dc8: 0x64628ad0  daddiu      $v0, $v1, -0x7530
    ctx->pc = 0x3f3dc8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294937296);
    // 0x3f3dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3dd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3dd4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3DD4u;
    {
        const bool branch_taken_0x3f3dd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3dd4) {
            ctx->pc = 0x3F3DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3DD4u;
            // 0x3f3dd8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3DDCu;
            goto label_3f3ddc;
        }
    }
    ctx->pc = 0x3F3DDCu;
label_3f3ddc:
    // 0x3f3ddc: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3de0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F3DE0u;
    {
        const bool branch_taken_0x3f3de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3DE0u;
        // 0x3f3de4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3de0) {
            ctx->pc = 0x3F3E50u;
            goto label_3f3e50;
        }
    }
    ctx->pc = 0x3F3DE8u;
    // 0x3f3de8: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x3f3de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3dec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f3df0: 0x344215a0  ori         $v0, $v0, 0x15A0
    ctx->pc = 0x3f3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5536);
    // 0x3f3df4: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3f3df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f3df8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3dfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3dfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3e00: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3E00u;
    {
        const bool branch_taken_0x3f3e00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3e00) {
            ctx->pc = 0x3F3E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3E00u;
            // 0x3f3e04: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3E08u;
            goto label_3f3e08;
        }
    }
    ctx->pc = 0x3F3E08u;
label_3f3e08:
    // 0x3f3e08: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3e0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F3E0Cu;
    {
        const bool branch_taken_0x3f3e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E0Cu;
        // 0x3f3e10: 0x67c2c568  daddiu      $v0, $fp, -0x3A98 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294952296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e0c) {
            ctx->pc = 0x3F3E4Cu;
            goto label_3f3e4c;
        }
    }
    ctx->pc = 0x3F3E14u;
    // 0x3f3e14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3e18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3e1c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3E1Cu;
    {
        const bool branch_taken_0x3f3e1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3e1c) {
            ctx->pc = 0x3F3E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3E1Cu;
            // 0x3f3e20: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3E24u;
            goto label_3f3e24;
        }
    }
    ctx->pc = 0x3F3E24u;
label_3f3e24:
    // 0x3f3e24: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3e28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3E28u;
    {
        const bool branch_taken_0x3f3e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E28u;
        // 0x3f3e2c: 0x66e2e890  daddiu      $v0, $s7, -0x1770 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294961296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e28) {
            ctx->pc = 0x3F3E4Cu;
            goto label_3f3e4c;
        }
    }
    ctx->pc = 0x3F3E30u;
    // 0x3f3e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f3e34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f3e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f3e38: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3E38u;
    {
        const bool branch_taken_0x3f3e38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f3e38) {
            ctx->pc = 0x3F3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3E38u;
            // 0x3f3e3c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3E40u;
            goto label_3f3e40;
        }
    }
    ctx->pc = 0x3F3E40u;
label_3f3e40:
    // 0x3f3e40: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f3e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f3e44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F3E44u;
    {
        const bool branch_taken_0x3f3e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3e44) {
            ctx->pc = 0x3F3E58u;
            goto label_3f3e58;
        }
    }
    ctx->pc = 0x3F3E4Cu;
label_3f3e4c:
    // 0x3f3e4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e50:
    // 0x3f3e50: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F3E50u;
    SET_GPR_U32(ctx, 31, 0x3F3E58u);
    ctx->pc = 0x3F3E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E50u;
    // 0x3f3e54: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F3E50u, 0x3F3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E58u;
label_3f3e58:
    // 0x3f3e58: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F3E58u;
    SET_GPR_U32(ctx, 31, 0x3F3E60u);
    ctx->pc = 0x3F3E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E58u;
    // 0x3f3e5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F3E58u, 0x3F3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E60u;
label_3f3e60:
    // 0x3f3e60: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3F3E60u;
    {
        const bool branch_taken_0x3f3e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E60u;
        // 0x3f3e64: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e60) {
            ctx->pc = 0x3F3FB0u;
            goto label_3f3fb0;
        }
    }
    ctx->pc = 0x3F3E68u;
    // 0x3f3e68: 0x92c20200  lbu         $v0, 0x200($s6)
    ctx->pc = 0x3f3e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 512)));
    // 0x3f3e6c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f3e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f3e70: 0x1440fe04  bnez        $v0, . + 4 + (-0x1FC << 2)
    ctx->pc = 0x3F3E70u;
    {
        const bool branch_taken_0x3f3e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E70u;
        // 0x3f3e74: 0xdec20100  ld          $v0, 0x100($s6) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e70) {
            ctx->pc = 0x3F3684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3684;
        }
    }
    ctx->pc = 0x3F3E78u;
    // 0x3f3e78: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f3e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f3e7c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3F3E7Cu;
    {
        const bool branch_taken_0x3f3e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E7Cu;
        // 0x3f3e80: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e7c) {
            ctx->pc = 0x3F3F8Cu;
            goto label_3f3f8c;
        }
    }
    ctx->pc = 0x3F3E84u;
    // 0x3f3e84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3e88:
    // 0x3f3e88: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F3E88u;
    SET_GPR_U32(ctx, 31, 0x3F3E90u);
    ctx->pc = 0x3F3E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E88u;
    // 0x3f3e8c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F3E88u, 0x3F3E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3E90u;
label_3f3e90:
    // 0x3f3e90: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3F3E90u;
    {
        const bool branch_taken_0x3f3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E90u;
        // 0x3f3e94: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e90) {
            ctx->pc = 0x3F3FB0u;
            goto label_3f3fb0;
        }
    }
    ctx->pc = 0x3F3E98u;
label_3f3e98:
    // 0x3f3e98: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3E98u;
    SET_GPR_U32(ctx, 31, 0x3F3EA0u);
    ctx->pc = 0x3F3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3E98u;
    // 0x3f3e9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3E98u, 0x3F3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EA0u;
label_3f3ea0:
    // 0x3f3ea0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f3ea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ea4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EA4u;
    SET_GPR_U32(ctx, 31, 0x3F3EACu);
    ctx->pc = 0x3F3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EA4u;
    // 0x3f3ea8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EA4u, 0x3F3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EACu;
label_3f3eac:
    // 0x3f3eac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f3eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3eb0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EB0u;
    SET_GPR_U32(ctx, 31, 0x3F3EB8u);
    ctx->pc = 0x3F3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EB0u;
    // 0x3f3eb4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EB0u, 0x3F3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EB8u;
label_3f3eb8:
    // 0x3f3eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f3eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ebc: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EBCu;
    SET_GPR_U32(ctx, 31, 0x3F3EC4u);
    ctx->pc = 0x3F3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EBCu;
    // 0x3f3ec0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EBCu, 0x3F3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EC4u;
label_3f3ec4:
    // 0x3f3ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f3ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ec8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EC8u;
    SET_GPR_U32(ctx, 31, 0x3F3ED0u);
    ctx->pc = 0x3F3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EC8u;
    // 0x3f3ecc: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EC8u, 0x3F3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3ED0u;
label_3f3ed0:
    // 0x3f3ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f3ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ed4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3ED4u;
    SET_GPR_U32(ctx, 31, 0x3F3EDCu);
    ctx->pc = 0x3F3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3ED4u;
    // 0x3f3ed8: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3ED4u, 0x3F3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EDCu;
label_3f3edc:
    // 0x3f3edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f3edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3ee0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EE0u;
    SET_GPR_U32(ctx, 31, 0x3F3EE8u);
    ctx->pc = 0x3F3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EE0u;
    // 0x3f3ee4: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EE0u, 0x3F3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EE8u;
label_3f3ee8:
    // 0x3f3ee8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f3eec: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F3EECu;
    SET_GPR_U32(ctx, 31, 0x3F3EF4u);
    ctx->pc = 0x3F3EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3EECu;
    // 0x3f3ef0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F3EECu, 0x3F3EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3EF4u;
label_3f3ef4:
    // 0x3f3ef4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3f3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3ef8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f3ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3efc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3f3efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3f3f00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f3f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f3f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f08: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f3f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f0c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f3f0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f10: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f3f10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f14: 0xc0fe826  jal         func_3FA098
    ctx->pc = 0x3F3F14u;
    SET_GPR_U32(ctx, 31, 0x3F3F1Cu);
    ctx->pc = 0x3F3F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3F14u;
    // 0x3f3f18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA098u, 0x3F3F14u, 0x3F3F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3F1Cu;
label_3f3f1c:
    // 0x3f3f1c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3f3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f3f20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f24: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x3f3f24u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3f3f28: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x3f3f28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f3f2c: 0xdfa80038  ld          $t0, 0x38($sp)
    ctx->pc = 0x3f3f2cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3f3f30: 0xdfa90040  ld          $t1, 0x40($sp)
    ctx->pc = 0x3f3f30u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3f34: 0xdfaa0048  ld          $t2, 0x48($sp)
    ctx->pc = 0x3f3f34u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3f3f38: 0xdfab0050  ld          $t3, 0x50($sp)
    ctx->pc = 0x3f3f38u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3f3c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3f3f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3f3f40: 0xc0febb6  jal         func_3FAED8
    ctx->pc = 0x3F3F40u;
    SET_GPR_U32(ctx, 31, 0x3F3F48u);
    ctx->pc = 0x3F3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3F40u;
    // 0x3f3f44: 0xffb70008  sd          $s7, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FAED8u, 0x3F3F40u, 0x3F3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3F48u;
label_3f3f48:
    // 0x3f3f48: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F3F48u;
    SET_GPR_U32(ctx, 31, 0x3F3F50u);
    ctx->pc = 0x3F3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3F48u;
    // 0x3f3f4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F3F48u, 0x3F3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3F50u;
label_3f3f50:
    // 0x3f3f50: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F3F50u;
    {
        const bool branch_taken_0x3f3f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3f50) {
            ctx->pc = 0x3F3F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3F50u;
            // 0x3f3f54: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3FB0u;
            goto label_3f3fb0;
        }
    }
    ctx->pc = 0x3F3F58u;
    // 0x3f3f58: 0x92c20200  lbu         $v0, 0x200($s6)
    ctx->pc = 0x3f3f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 512)));
    // 0x3f3f5c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f3f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f3f60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3F60u;
    {
        const bool branch_taken_0x3f3f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F60u;
        // 0x3f3f64: 0xdec20100  ld          $v0, 0x100($s6) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f60) {
            ctx->pc = 0x3F3F80u;
            goto label_3f3f80;
        }
    }
    ctx->pc = 0x3F3F68u;
    // 0x3f3f68: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f3f6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3F6Cu;
    {
        const bool branch_taken_0x3f3f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F6Cu;
        // 0x3f3f70: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f6c) {
            ctx->pc = 0x3F3F8Cu;
            goto label_3f3f8c;
        }
    }
    ctx->pc = 0x3F3F74u;
    // 0x3f3f74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F3F74u;
    {
        const bool branch_taken_0x3f3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F74u;
        // 0x3f3f78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f74) {
            ctx->pc = 0x3F3FA4u;
            goto label_3f3fa4;
        }
    }
    ctx->pc = 0x3F3F7Cu;
    // 0x3f3f7c: 0x0  nop
    ctx->pc = 0x3f3f7cu;
    // NOP
label_3f3f80:
    // 0x3f3f80: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f3f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f3f84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3F84u;
    {
        const bool branch_taken_0x3f3f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F84u;
        // 0x3f3f88: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f84) {
            ctx->pc = 0x3F3FA0u;
            goto label_3f3fa0;
        }
    }
    ctx->pc = 0x3F3F8Cu;
label_3f3f8c:
    // 0x3f3f8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f90: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F3F90u;
    SET_GPR_U32(ctx, 31, 0x3F3F98u);
    ctx->pc = 0x3F3F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3F90u;
    // 0x3f3f94: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F3F90u, 0x3F3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3F98u;
label_3f3f98:
    // 0x3f3f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3F98u;
    {
        const bool branch_taken_0x3f3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F98u;
        // 0x3f3f9c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f98) {
            ctx->pc = 0x3F3FB0u;
            goto label_3f3fb0;
        }
    }
    ctx->pc = 0x3F3FA0u;
label_3f3fa0:
    // 0x3f3fa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3f3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f3fa4:
    // 0x3f3fa4: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F3FA4u;
    SET_GPR_U32(ctx, 31, 0x3F3FACu);
    ctx->pc = 0x3F3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3FA4u;
    // 0x3f3fa8: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F3FA4u, 0x3F3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3FACu;
label_3f3fac:
    // 0x3f3fac: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3f3facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3f3fb0:
    // 0x3f3fb0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3f3fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3f3fb4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3f3fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3f3fb8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3f3fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3f3fbc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3f3fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f3fc0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3f3fc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f3fc4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3f3fc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f3fc8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3f3fc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f3fcc: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3f3fccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f3fd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f3fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f3fd4: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x3f3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3f3fd8: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x3f3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3f3fdc: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x3f3fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3f3fe0: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x3f3fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3f3fe4: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3f3fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3f3fe8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3f3fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3f3fec: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3f3fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3f3ff0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3f3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f3ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3FF4u;
        // 0x3f3ff8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3FFCu;
    // 0x3f3ffc: 0x0  nop
    ctx->pc = 0x3f3ffcu;
    // NOP
    ctx->pc = 0x3f4000u;
}
