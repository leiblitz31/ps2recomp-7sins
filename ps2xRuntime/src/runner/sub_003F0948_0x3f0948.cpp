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

// Function: sub_003F0948
// Address: 0x3f0948 - 0x3f1a28
void sub_003F0948_0x3f0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0948_0x3f0948");
#endif

    switch (ctx->pc) {
        case 0x3f0980u: goto label_3f0980;
        case 0x3f098cu: goto label_3f098c;
        case 0x3f09acu: goto label_3f09ac;
        case 0x3f09bcu: goto label_3f09bc;
        case 0x3f09d4u: goto label_3f09d4;
        case 0x3f09e4u: goto label_3f09e4;
        case 0x3f0a00u: goto label_3f0a00;
        case 0x3f0a08u: goto label_3f0a08;
        case 0x3f0a14u: goto label_3f0a14;
        case 0x3f0a24u: goto label_3f0a24;
        case 0x3f0a30u: goto label_3f0a30;
        case 0x3f0a48u: goto label_3f0a48;
        case 0x3f0a5cu: goto label_3f0a5c;
        case 0x3f0a64u: goto label_3f0a64;
        case 0x3f0a78u: goto label_3f0a78;
        case 0x3f0a88u: goto label_3f0a88;
        case 0x3f0a94u: goto label_3f0a94;
        case 0x3f0aacu: goto label_3f0aac;
        case 0x3f0abcu: goto label_3f0abc;
        case 0x3f0ac4u: goto label_3f0ac4;
        case 0x3f0afcu: goto label_3f0afc;
        case 0x3f0b0cu: goto label_3f0b0c;
        case 0x3f0b1cu: goto label_3f0b1c;
        case 0x3f0b20u: goto label_3f0b20;
        case 0x3f0b2cu: goto label_3f0b2c;
        case 0x3f0b3cu: goto label_3f0b3c;
        case 0x3f0b48u: goto label_3f0b48;
        case 0x3f0b60u: goto label_3f0b60;
        case 0x3f0b74u: goto label_3f0b74;
        case 0x3f0b7cu: goto label_3f0b7c;
        case 0x3f0b90u: goto label_3f0b90;
        case 0x3f0ba0u: goto label_3f0ba0;
        case 0x3f0bacu: goto label_3f0bac;
        case 0x3f0bc4u: goto label_3f0bc4;
        case 0x3f0bd4u: goto label_3f0bd4;
        case 0x3f0bdcu: goto label_3f0bdc;
        case 0x3f0bfcu: goto label_3f0bfc;
        case 0x3f0c08u: goto label_3f0c08;
        case 0x3f0c18u: goto label_3f0c18;
        case 0x3f0c28u: goto label_3f0c28;
        case 0x3f0c38u: goto label_3f0c38;
        case 0x3f0c48u: goto label_3f0c48;
        case 0x3f0c50u: goto label_3f0c50;
        case 0x3f0c5cu: goto label_3f0c5c;
        case 0x3f0c6cu: goto label_3f0c6c;
        case 0x3f0c78u: goto label_3f0c78;
        case 0x3f0c90u: goto label_3f0c90;
        case 0x3f0ca4u: goto label_3f0ca4;
        case 0x3f0cacu: goto label_3f0cac;
        case 0x3f0cc0u: goto label_3f0cc0;
        case 0x3f0cd0u: goto label_3f0cd0;
        case 0x3f0cdcu: goto label_3f0cdc;
        case 0x3f0cf4u: goto label_3f0cf4;
        case 0x3f0d04u: goto label_3f0d04;
        case 0x3f0d0cu: goto label_3f0d0c;
        case 0x3f0dccu: goto label_3f0dcc;
        case 0x3f0ddcu: goto label_3f0ddc;
        case 0x3f0df4u: goto label_3f0df4;
        case 0x3f0e04u: goto label_3f0e04;
        case 0x3f0e30u: goto label_3f0e30;
        case 0x3f0e7cu: goto label_3f0e7c;
        case 0x3f0e9cu: goto label_3f0e9c;
        case 0x3f0ebcu: goto label_3f0ebc;
        case 0x3f0ed8u: goto label_3f0ed8;
        case 0x3f0ee4u: goto label_3f0ee4;
        case 0x3f0f0cu: goto label_3f0f0c;
        case 0x3f0f28u: goto label_3f0f28;
        case 0x3f0f40u: goto label_3f0f40;
        case 0x3f0f68u: goto label_3f0f68;
        case 0x3f0f78u: goto label_3f0f78;
        case 0x3f0f80u: goto label_3f0f80;
        case 0x3f0f90u: goto label_3f0f90;
        case 0x3f0fa0u: goto label_3f0fa0;
        case 0x3f0facu: goto label_3f0fac;
        case 0x3f0fbcu: goto label_3f0fbc;
        case 0x3f0fccu: goto label_3f0fcc;
        case 0x3f0fd8u: goto label_3f0fd8;
        case 0x3f0fe4u: goto label_3f0fe4;
        case 0x3f0ff0u: goto label_3f0ff0;
        case 0x3f10f8u: goto label_3f10f8;
        case 0x3f12d8u: goto label_3f12d8;
        case 0x3f13e0u: goto label_3f13e0;
        case 0x3f13e8u: goto label_3f13e8;
        case 0x3f1430u: goto label_3f1430;
        case 0x3f144cu: goto label_3f144c;
        case 0x3f1460u: goto label_3f1460;
        case 0x3f146cu: goto label_3f146c;
        case 0x3f1480u: goto label_3f1480;
        case 0x3f148cu: goto label_3f148c;
        case 0x3f14acu: goto label_3f14ac;
        case 0x3f14bcu: goto label_3f14bc;
        case 0x3f14c4u: goto label_3f14c4;
        case 0x3f14e8u: goto label_3f14e8;
        case 0x3f1500u: goto label_3f1500;
        case 0x3f150cu: goto label_3f150c;
        case 0x3f1524u: goto label_3f1524;
        case 0x3f1530u: goto label_3f1530;
        case 0x3f1550u: goto label_3f1550;
        case 0x3f1560u: goto label_3f1560;
        case 0x3f1568u: goto label_3f1568;
        case 0x3f15b4u: goto label_3f15b4;
        case 0x3f15c4u: goto label_3f15c4;
        case 0x3f15dcu: goto label_3f15dc;
        case 0x3f1608u: goto label_3f1608;
        case 0x3f1610u: goto label_3f1610;
        case 0x3f1658u: goto label_3f1658;
        case 0x3f1674u: goto label_3f1674;
        case 0x3f1688u: goto label_3f1688;
        case 0x3f1694u: goto label_3f1694;
        case 0x3f16a8u: goto label_3f16a8;
        case 0x3f16b4u: goto label_3f16b4;
        case 0x3f16d4u: goto label_3f16d4;
        case 0x3f16e4u: goto label_3f16e4;
        case 0x3f16ecu: goto label_3f16ec;
        case 0x3f1710u: goto label_3f1710;
        case 0x3f1728u: goto label_3f1728;
        case 0x3f1734u: goto label_3f1734;
        case 0x3f174cu: goto label_3f174c;
        case 0x3f1758u: goto label_3f1758;
        case 0x3f1778u: goto label_3f1778;
        case 0x3f1788u: goto label_3f1788;
        case 0x3f1790u: goto label_3f1790;
        case 0x3f17c0u: goto label_3f17c0;
        case 0x3f17d0u: goto label_3f17d0;
        case 0x3f17e0u: goto label_3f17e0;
        case 0x3f17f0u: goto label_3f17f0;
        case 0x3f1800u: goto label_3f1800;
        case 0x3f181cu: goto label_3f181c;
        case 0x3f1848u: goto label_3f1848;
        case 0x3f1850u: goto label_3f1850;
        case 0x3f1898u: goto label_3f1898;
        case 0x3f18b4u: goto label_3f18b4;
        case 0x3f18c8u: goto label_3f18c8;
        case 0x3f18d4u: goto label_3f18d4;
        case 0x3f18e8u: goto label_3f18e8;
        case 0x3f18f4u: goto label_3f18f4;
        case 0x3f1914u: goto label_3f1914;
        case 0x3f1924u: goto label_3f1924;
        case 0x3f192cu: goto label_3f192c;
        case 0x3f1950u: goto label_3f1950;
        case 0x3f1968u: goto label_3f1968;
        case 0x3f1974u: goto label_3f1974;
        case 0x3f198cu: goto label_3f198c;
        case 0x3f1998u: goto label_3f1998;
        case 0x3f19b8u: goto label_3f19b8;
        case 0x3f19c8u: goto label_3f19c8;
        case 0x3f19d0u: goto label_3f19d0;
        default: break;
    }

    ctx->pc = 0x3f0948u;

    // 0x3f0948: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3f0948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3f094c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3f094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3f0950: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3f0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3f0954: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f0954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0958: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3f0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3f095c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3f095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3f0960: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3f0960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3f0964: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3f0964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3f0968: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3f096c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3f096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3f0970: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3f0970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3f0974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f0978: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0978u;
    SET_GPR_U32(ctx, 31, 0x3F0980u);
    ctx->pc = 0x3F097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0978u;
    // 0x3f097c: 0xc68c024c  lwc1        $f12, 0x24C($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0978u, 0x3F0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0980u;
label_3f0980:
    // 0x3f0980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0984: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F0984u;
    SET_GPR_U32(ctx, 31, 0x3F098Cu);
    ctx->pc = 0x3F0988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0984u;
    // 0x3f0988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F0984u, 0x3F098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F098Cu;
label_3f098c:
    // 0x3f098c: 0x1040041b  beqz        $v0, . + 4 + (0x41B << 2)
    ctx->pc = 0x3F098Cu;
    {
        const bool branch_taken_0x3f098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F098Cu;
        // 0x3f0990: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f098c) {
            ctx->pc = 0x3F19FCu;
            goto label_3f19fc;
        }
    }
    ctx->pc = 0x3F0994u;
    // 0x3f0994: 0x9282020b  lbu         $v0, 0x20B($s4)
    ctx->pc = 0x3f0994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 523)));
    // 0x3f0998: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3f0998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3f099c: 0x504000e2  beql        $v0, $zero, . + 4 + (0xE2 << 2)
    ctx->pc = 0x3F099Cu;
    {
        const bool branch_taken_0x3f099c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f099c) {
            ctx->pc = 0x3F09A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F099Cu;
            // 0x3f09a0: 0x9282020a  lbu         $v0, 0x20A($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0D28u;
            goto label_3f0d28;
        }
    }
    ctx->pc = 0x3F09A4u;
    // 0x3f09a4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F09A4u;
    SET_GPR_U32(ctx, 31, 0x3F09ACu);
    ctx->pc = 0x3F09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09A4u;
    // 0x3f09a8: 0xc68c0250  lwc1        $f12, 0x250($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F09A4u, 0x3F09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09ACu;
label_3f09ac:
    // 0x3f09ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f09b0: 0xdc25e910  ld          $a1, -0x16F0($at)
    ctx->pc = 0x3f09b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE910u));
    // 0x3f09b4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F09B4u;
    SET_GPR_U32(ctx, 31, 0x3F09BCu);
    ctx->pc = 0x3F09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09B4u;
    // 0x3f09b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F09B4u, 0x3F09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09BCu;
label_3f09bc:
    // 0x3f09bc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F09BCu;
    {
        const bool branch_taken_0x3f09bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f09bc) {
            ctx->pc = 0x3F09ECu;
            goto label_3f09ec;
        }
    }
    ctx->pc = 0x3F09C4u;
    // 0x3f09c4: 0xc680024c  lwc1        $f0, 0x24C($s4)
    ctx->pc = 0x3f09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f09c8: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x3f09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f09cc: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F09CCu;
    SET_GPR_U32(ctx, 31, 0x3F09D4u);
    ctx->pc = 0x3F09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09CCu;
    // 0x3f09d0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F09CCu, 0x3F09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09D4u;
label_3f09d4:
    // 0x3f09d4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f09d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f09d8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f09d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f09dc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F09DCu;
    SET_GPR_U32(ctx, 31, 0x3F09E4u);
    ctx->pc = 0x3F09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09DCu;
    // 0x3f09e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F09DCu, 0x3F09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F09E4u;
label_3f09e4:
    // 0x3f09e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F09E4u;
    {
        const bool branch_taken_0x3f09e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F09E4u;
        // 0x3f09e8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f09e4) {
            ctx->pc = 0x3F09F4u;
            goto label_3f09f4;
        }
    }
    ctx->pc = 0x3F09ECu;
label_3f09ec:
    // 0x3f09ec: 0x3413ffc0  ori         $s3, $zero, 0xFFC0
    ctx->pc = 0x3f09ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f09f0: 0x139bbc  dsll32      $s3, $s3, 14
    ctx->pc = 0x3f09f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 14));
label_3f09f4:
    // 0x3f09f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f09f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f09f8: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F09F8u;
    SET_GPR_U32(ctx, 31, 0x3F0A00u);
    ctx->pc = 0x3F09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F09F8u;
    // 0x3f09fc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F09F8u, 0x3F0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A00u;
label_3f0a00:
    // 0x3f0a00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f0a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a04: 0xae820254  sw          $v0, 0x254($s4)
    ctx->pc = 0x3f0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 596), GPR_U32(ctx, 2));
label_3f0a08:
    // 0x3f0a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a0c: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0A0Cu;
    SET_GPR_U32(ctx, 31, 0x3F0A14u);
    ctx->pc = 0x3F0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A0Cu;
    // 0x3f0a10: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0A0Cu, 0x3F0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A14u;
label_3f0a14:
    // 0x3f0a14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0a18: 0xdc25e918  ld          $a1, -0x16E8($at)
    ctx->pc = 0x3f0a18u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE918u));
    // 0x3f0a1c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0A1Cu;
    SET_GPR_U32(ctx, 31, 0x3F0A24u);
    ctx->pc = 0x3F0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A1Cu;
    // 0x3f0a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0A1Cu, 0x3F0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A24u;
label_3f0a24:
    // 0x3f0a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a28: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0A28u;
    SET_GPR_U32(ctx, 31, 0x3F0A30u);
    ctx->pc = 0x3F0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A28u;
    // 0x3f0a2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0A28u, 0x3F0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A30u;
label_3f0a30:
    // 0x3f0a30: 0x8e900254  lw          $s0, 0x254($s4)
    ctx->pc = 0x3f0a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x3f0a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a38: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0a3c: 0xdc25e920  ld          $a1, -0x16E0($at)
    ctx->pc = 0x3f0a3cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE920u));
    // 0x3f0a40: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0A40u;
    SET_GPR_U32(ctx, 31, 0x3F0A48u);
    ctx->pc = 0x3F0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A40u;
    // 0x3f0a44: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0A40u, 0x3F0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A48u;
label_3f0a48:
    // 0x3f0a48: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3f0a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3f0a4c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0a50: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0a54: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0A54u;
    SET_GPR_U32(ctx, 31, 0x3F0A5Cu);
    ctx->pc = 0x3F0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A54u;
    // 0x3f0a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0A54u, 0x3F0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A5Cu;
label_3f0a5c:
    // 0x3f0a5c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0A5Cu;
    SET_GPR_U32(ctx, 31, 0x3F0A64u);
    ctx->pc = 0x3F0A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A5Cu;
    // 0x3f0a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0A5Cu, 0x3F0A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A64u;
label_3f0a64:
    // 0x3f0a64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0a64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0a68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0a68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a70: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0A70u;
    SET_GPR_U32(ctx, 31, 0x3F0A78u);
    ctx->pc = 0x3F0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A70u;
    // 0x3f0a74: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0A70u, 0x3F0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A78u;
label_3f0a78:
    // 0x3f0a78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0a7c: 0xdc25e928  ld          $a1, -0x16D8($at)
    ctx->pc = 0x3f0a7cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE928u));
    // 0x3f0a80: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0A80u;
    SET_GPR_U32(ctx, 31, 0x3F0A88u);
    ctx->pc = 0x3F0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A80u;
    // 0x3f0a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0A80u, 0x3F0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A88u;
label_3f0a88:
    // 0x3f0a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a8c: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0A8Cu;
    SET_GPR_U32(ctx, 31, 0x3F0A94u);
    ctx->pc = 0x3F0A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0A8Cu;
    // 0x3f0a90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0A8Cu, 0x3F0A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0A94u;
label_3f0a94:
    // 0x3f0a94: 0x8e900254  lw          $s0, 0x254($s4)
    ctx->pc = 0x3f0a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x3f0a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0a9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0aa0: 0xdc25e930  ld          $a1, -0x16D0($at)
    ctx->pc = 0x3f0aa0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE930u));
    // 0x3f0aa4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0AA4u;
    SET_GPR_U32(ctx, 31, 0x3F0AACu);
    ctx->pc = 0x3F0AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0AA4u;
    // 0x3f0aa8: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0AA4u, 0x3F0AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0AACu;
label_3f0aac:
    // 0x3f0aac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0ab0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0ab4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0AB4u;
    SET_GPR_U32(ctx, 31, 0x3F0ABCu);
    ctx->pc = 0x3F0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0AB4u;
    // 0x3f0ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0AB4u, 0x3F0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0ABCu;
label_3f0abc:
    // 0x3f0abc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0ABCu;
    SET_GPR_U32(ctx, 31, 0x3F0AC4u);
    ctx->pc = 0x3F0AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0ABCu;
    // 0x3f0ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0ABCu, 0x3F0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0AC4u;
label_3f0ac4:
    // 0x3f0ac4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0ac8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0acc: 0x2a430100  slti        $v1, $s2, 0x100
    ctx->pc = 0x3f0accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f0ad0: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3F0AD0u;
    {
        const bool branch_taken_0x3f0ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0AD0u;
        // 0x3f0ad4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0ad0) {
            ctx->pc = 0x3F0A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0a08;
        }
    }
    ctx->pc = 0x3F0AD8u;
    // 0x3f0ad8: 0xde820108  ld          $v0, 0x108($s4)
    ctx->pc = 0x3f0ad8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x3f0adc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f0ae0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3f0ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3f0ae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f0ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f0ae8: 0x504003c4  beql        $v0, $zero, . + 4 + (0x3C4 << 2)
    ctx->pc = 0x3F0AE8u;
    {
        const bool branch_taken_0x3f0ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0ae8) {
            ctx->pc = 0x3F0AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0AE8u;
            // 0x3f0aec: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F19FCu;
            goto label_3f19fc;
        }
    }
    ctx->pc = 0x3F0AF0u;
    // 0x3f0af0: 0xc68c024c  lwc1        $f12, 0x24C($s4)
    ctx->pc = 0x3f0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f0af4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0AF4u;
    SET_GPR_U32(ctx, 31, 0x3F0AFCu);
    ctx->pc = 0x3F0AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0AF4u;
    // 0x3f0af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0AF4u, 0x3F0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0AFCu;
label_3f0afc:
    // 0x3f0afc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f0afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f0b00: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f0b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f0b04: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F0B04u;
    SET_GPR_U32(ctx, 31, 0x3F0B0Cu);
    ctx->pc = 0x3F0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B04u;
    // 0x3f0b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F0B04u, 0x3F0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B0Cu;
label_3f0b0c:
    // 0x3f0b0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f0b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b14: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0B14u;
    SET_GPR_U32(ctx, 31, 0x3F0B1Cu);
    ctx->pc = 0x3F0B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B14u;
    // 0x3f0b18: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0B14u, 0x3F0B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B1Cu;
label_3f0b1c:
    // 0x3f0b1c: 0xae82025c  sw          $v0, 0x25C($s4)
    ctx->pc = 0x3f0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 604), GPR_U32(ctx, 2));
label_3f0b20:
    // 0x3f0b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f0b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b24: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0B24u;
    SET_GPR_U32(ctx, 31, 0x3F0B2Cu);
    ctx->pc = 0x3F0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B24u;
    // 0x3f0b28: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0B24u, 0x3F0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B2Cu;
label_3f0b2c:
    // 0x3f0b2c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0b30: 0xdc25e938  ld          $a1, -0x16C8($at)
    ctx->pc = 0x3f0b30u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE938u));
    // 0x3f0b34: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0B34u;
    SET_GPR_U32(ctx, 31, 0x3F0B3Cu);
    ctx->pc = 0x3F0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B34u;
    // 0x3f0b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0B34u, 0x3F0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B3Cu;
label_3f0b3c:
    // 0x3f0b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b40: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0B40u;
    SET_GPR_U32(ctx, 31, 0x3F0B48u);
    ctx->pc = 0x3F0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B40u;
    // 0x3f0b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0B40u, 0x3F0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B48u;
label_3f0b48:
    // 0x3f0b48: 0x8e90025c  lw          $s0, 0x25C($s4)
    ctx->pc = 0x3f0b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
    // 0x3f0b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0b54: 0xdc25e940  ld          $a1, -0x16C0($at)
    ctx->pc = 0x3f0b54u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE940u));
    // 0x3f0b58: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0B58u;
    SET_GPR_U32(ctx, 31, 0x3F0B60u);
    ctx->pc = 0x3F0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B58u;
    // 0x3f0b5c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0B58u, 0x3F0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B60u;
label_3f0b60:
    // 0x3f0b60: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3f0b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3f0b64: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0b68: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0b6c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0B6Cu;
    SET_GPR_U32(ctx, 31, 0x3F0B74u);
    ctx->pc = 0x3F0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B6Cu;
    // 0x3f0b70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0B6Cu, 0x3F0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B74u;
label_3f0b74:
    // 0x3f0b74: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0B74u;
    SET_GPR_U32(ctx, 31, 0x3F0B7Cu);
    ctx->pc = 0x3F0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B74u;
    // 0x3f0b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0B74u, 0x3F0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B7Cu;
label_3f0b7c:
    // 0x3f0b7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0b88: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0B88u;
    SET_GPR_U32(ctx, 31, 0x3F0B90u);
    ctx->pc = 0x3F0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B88u;
    // 0x3f0b8c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0B88u, 0x3F0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B90u;
label_3f0b90:
    // 0x3f0b90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0b94: 0xdc25e948  ld          $a1, -0x16B8($at)
    ctx->pc = 0x3f0b94u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE948u));
    // 0x3f0b98: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0B98u;
    SET_GPR_U32(ctx, 31, 0x3F0BA0u);
    ctx->pc = 0x3F0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B98u;
    // 0x3f0b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0B98u, 0x3F0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BA0u;
label_3f0ba0:
    // 0x3f0ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0ba4: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0BA4u;
    SET_GPR_U32(ctx, 31, 0x3F0BACu);
    ctx->pc = 0x3F0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BA4u;
    // 0x3f0ba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0BA4u, 0x3F0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BACu;
label_3f0bac:
    // 0x3f0bac: 0x8e90025c  lw          $s0, 0x25C($s4)
    ctx->pc = 0x3f0bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
    // 0x3f0bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0bb4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0bb8: 0xdc25e950  ld          $a1, -0x16B0($at)
    ctx->pc = 0x3f0bb8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE950u));
    // 0x3f0bbc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0BBCu;
    SET_GPR_U32(ctx, 31, 0x3F0BC4u);
    ctx->pc = 0x3F0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BBCu;
    // 0x3f0bc0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0BBCu, 0x3F0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BC4u;
label_3f0bc4:
    // 0x3f0bc4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0bc8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0bcc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0BCCu;
    SET_GPR_U32(ctx, 31, 0x3F0BD4u);
    ctx->pc = 0x3F0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BCCu;
    // 0x3f0bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0BCCu, 0x3F0BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BD4u;
label_3f0bd4:
    // 0x3f0bd4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0BD4u;
    SET_GPR_U32(ctx, 31, 0x3F0BDCu);
    ctx->pc = 0x3F0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BD4u;
    // 0x3f0bd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0BD4u, 0x3F0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BDCu;
label_3f0bdc:
    // 0x3f0bdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0be0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0be4: 0x2a430100  slti        $v1, $s2, 0x100
    ctx->pc = 0x3f0be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f0be8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3F0BE8u;
    {
        const bool branch_taken_0x3f0be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BE8u;
        // 0x3f0bec: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0be8) {
            ctx->pc = 0x3F0B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0b20;
        }
    }
    ctx->pc = 0x3F0BF0u;
    // 0x3f0bf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0bf4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0BF4u;
    SET_GPR_U32(ctx, 31, 0x3F0BFCu);
    ctx->pc = 0x3F0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BF4u;
    // 0x3f0bf8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0BF4u, 0x3F0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BFCu;
label_3f0bfc:
    // 0x3f0bfc: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x3f0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f0c00: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0C00u;
    SET_GPR_U32(ctx, 31, 0x3F0C08u);
    ctx->pc = 0x3F0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C00u;
    // 0x3f0c04: 0xae820258  sw          $v0, 0x258($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0C00u, 0x3F0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C08u;
label_3f0c08:
    // 0x3f0c08: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0c0c: 0xdc25e958  ld          $a1, -0x16A8($at)
    ctx->pc = 0x3f0c0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE958u));
    // 0x3f0c10: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F0C10u;
    SET_GPR_U32(ctx, 31, 0x3F0C18u);
    ctx->pc = 0x3F0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C10u;
    // 0x3f0c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F0C10u, 0x3F0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C18u;
label_3f0c18:
    // 0x3f0c18: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F0C18u;
    {
        const bool branch_taken_0x3f0c18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f0c18) {
            ctx->pc = 0x3F0C40u;
            goto label_3f0c40;
        }
    }
    ctx->pc = 0x3F0C20u;
    // 0x3f0c20: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0C20u;
    SET_GPR_U32(ctx, 31, 0x3F0C28u);
    ctx->pc = 0x3F0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C20u;
    // 0x3f0c24: 0xc68c0250  lwc1        $f12, 0x250($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0C20u, 0x3F0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C28u;
label_3f0c28:
    // 0x3f0c28: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f0c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f0c2c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f0c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f0c30: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F0C30u;
    SET_GPR_U32(ctx, 31, 0x3F0C38u);
    ctx->pc = 0x3F0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C30u;
    // 0x3f0c34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F0C30u, 0x3F0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C38u;
label_3f0c38:
    // 0x3f0c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F0C38u;
    {
        const bool branch_taken_0x3f0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C38u;
        // 0x3f0c3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0c38) {
            ctx->pc = 0x3F0C4Cu;
            goto label_3f0c4c;
        }
    }
    ctx->pc = 0x3F0C40u;
label_3f0c40:
    // 0x3f0c40: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0C40u;
    SET_GPR_U32(ctx, 31, 0x3F0C48u);
    ctx->pc = 0x3F0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C40u;
    // 0x3f0c44: 0xc68c024c  lwc1        $f12, 0x24C($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0C40u, 0x3F0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C48u;
label_3f0c48:
    // 0x3f0c48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f0c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c4c:
    // 0x3f0c4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f0c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c50:
    // 0x3f0c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f0c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0c54: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0C54u;
    SET_GPR_U32(ctx, 31, 0x3F0C5Cu);
    ctx->pc = 0x3F0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C54u;
    // 0x3f0c58: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0C54u, 0x3F0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C5Cu;
label_3f0c5c:
    // 0x3f0c5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0c60: 0xdc25e960  ld          $a1, -0x16A0($at)
    ctx->pc = 0x3f0c60u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE960u));
    // 0x3f0c64: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0C64u;
    SET_GPR_U32(ctx, 31, 0x3F0C6Cu);
    ctx->pc = 0x3F0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C64u;
    // 0x3f0c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0C64u, 0x3F0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C6Cu;
label_3f0c6c:
    // 0x3f0c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0c70: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0C70u;
    SET_GPR_U32(ctx, 31, 0x3F0C78u);
    ctx->pc = 0x3F0C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C70u;
    // 0x3f0c74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0C70u, 0x3F0C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C78u;
label_3f0c78:
    // 0x3f0c78: 0x8e900258  lw          $s0, 0x258($s4)
    ctx->pc = 0x3f0c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x3f0c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0c80: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0c84: 0xdc25e968  ld          $a1, -0x1698($at)
    ctx->pc = 0x3f0c84u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE968u));
    // 0x3f0c88: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0C88u;
    SET_GPR_U32(ctx, 31, 0x3F0C90u);
    ctx->pc = 0x3F0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C88u;
    // 0x3f0c8c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0C88u, 0x3F0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C90u;
label_3f0c90:
    // 0x3f0c90: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3f0c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3f0c94: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0c98: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0c9c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0C9Cu;
    SET_GPR_U32(ctx, 31, 0x3F0CA4u);
    ctx->pc = 0x3F0CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C9Cu;
    // 0x3f0ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0C9Cu, 0x3F0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CA4u;
label_3f0ca4:
    // 0x3f0ca4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0CA4u;
    SET_GPR_U32(ctx, 31, 0x3F0CACu);
    ctx->pc = 0x3F0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CA4u;
    // 0x3f0ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0CA4u, 0x3F0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CACu;
label_3f0cac:
    // 0x3f0cac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0cb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0cb8: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0CB8u;
    SET_GPR_U32(ctx, 31, 0x3F0CC0u);
    ctx->pc = 0x3F0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CB8u;
    // 0x3f0cbc: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0CB8u, 0x3F0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CC0u;
label_3f0cc0:
    // 0x3f0cc0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0cc4: 0xdc25e970  ld          $a1, -0x1690($at)
    ctx->pc = 0x3f0cc4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE970u));
    // 0x3f0cc8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0CC8u;
    SET_GPR_U32(ctx, 31, 0x3F0CD0u);
    ctx->pc = 0x3F0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CC8u;
    // 0x3f0ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0CC8u, 0x3F0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CD0u;
label_3f0cd0:
    // 0x3f0cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0cd4: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0CD4u;
    SET_GPR_U32(ctx, 31, 0x3F0CDCu);
    ctx->pc = 0x3F0CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CD4u;
    // 0x3f0cd8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0CD4u, 0x3F0CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CDCu;
label_3f0cdc:
    // 0x3f0cdc: 0x8e900258  lw          $s0, 0x258($s4)
    ctx->pc = 0x3f0cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x3f0ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0ce4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0ce8: 0xdc25e978  ld          $a1, -0x1688($at)
    ctx->pc = 0x3f0ce8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE978u));
    // 0x3f0cec: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0CECu;
    SET_GPR_U32(ctx, 31, 0x3F0CF4u);
    ctx->pc = 0x3F0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CECu;
    // 0x3f0cf0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0CECu, 0x3F0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CF4u;
label_3f0cf4:
    // 0x3f0cf4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0cf8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0cfc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0CFCu;
    SET_GPR_U32(ctx, 31, 0x3F0D04u);
    ctx->pc = 0x3F0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CFCu;
    // 0x3f0d00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0CFCu, 0x3F0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D04u;
label_3f0d04:
    // 0x3f0d04: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0D04u;
    SET_GPR_U32(ctx, 31, 0x3F0D0Cu);
    ctx->pc = 0x3F0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D04u;
    // 0x3f0d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0D04u, 0x3F0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D0Cu;
label_3f0d0c:
    // 0x3f0d0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0d0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0d10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0d14: 0x2a430100  slti        $v1, $s2, 0x100
    ctx->pc = 0x3f0d14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f0d18: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3F0D18u;
    {
        const bool branch_taken_0x3f0d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D18u;
        // 0x3f0d1c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0d18) {
            ctx->pc = 0x3F0C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0c50;
        }
    }
    ctx->pc = 0x3F0D20u;
    // 0x3f0d20: 0x10000336  b           . + 4 + (0x336 << 2)
    ctx->pc = 0x3F0D20u;
    {
        const bool branch_taken_0x3f0d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D20u;
        // 0x3f0d24: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0d20) {
            ctx->pc = 0x3F19FCu;
            goto label_3f19fc;
        }
    }
    ctx->pc = 0x3F0D28u;
label_3f0d28:
    // 0x3f0d28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f0d2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F0D2Cu;
    {
        const bool branch_taken_0x3f0d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0d2c) {
            ctx->pc = 0x3F0D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0D2Cu;
            // 0x3f0d30: 0x9286026f  lbu         $a2, 0x26F($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 623)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0D50u;
            goto label_3f0d50;
        }
    }
    ctx->pc = 0x3F0D34u;
    // 0x3f0d34: 0x9286026c  lbu         $a2, 0x26C($s4)
    ctx->pc = 0x3f0d34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 620)));
    // 0x3f0d38: 0x9284026d  lbu         $a0, 0x26D($s4)
    ctx->pc = 0x3f0d38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 621)));
    // 0x3f0d3c: 0x9285026e  lbu         $a1, 0x26E($s4)
    ctx->pc = 0x3f0d3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 622)));
    // 0x3f0d40: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x3f0d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f0d44: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x3f0d44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3f0d48: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x3f0d48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f0d4c: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x3f0d4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_3f0d50:
    // 0x3f0d50: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F0D50u;
    {
        const bool branch_taken_0x3f0d50 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3F0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D50u;
        // 0x3f0d54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0d50) {
            ctx->pc = 0x3F0D64u;
            goto label_3f0d64;
        }
    }
    ctx->pc = 0x3F0D58u;
    // 0x3f0d58: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3f0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3f0d5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F0D5Cu;
    {
        const bool branch_taken_0x3f0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D5Cu;
        // 0x3f0d60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0d5c) {
            ctx->pc = 0x3F0D68u;
            goto label_3f0d68;
        }
    }
    ctx->pc = 0x3F0D64u;
label_3f0d64:
    // 0x3f0d64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3f0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3f0d68:
    // 0x3f0d68: 0xde820108  ld          $v0, 0x108($s4)
    ctx->pc = 0x3f0d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x3f0d6c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f0d70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F0D70u;
    {
        const bool branch_taken_0x3f0d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D70u;
        // 0x3f0d74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0d70) {
            ctx->pc = 0x3F0D8Cu;
            goto label_3f0d8c;
        }
    }
    ctx->pc = 0x3F0D78u;
    // 0x3f0d78: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3f0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f0d7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f0d80: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3f0d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3f0d84: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x3f0d84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3f0d88: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3f0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3f0d8c:
    // 0x3f0d8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3f0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f0d90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3f0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f0d94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3f0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f0d98: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x3f0d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3f0d9c: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x3f0d9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x3f0da0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3f0da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f0da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0da8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x3f0da8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x3f0dac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3f0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3f0db0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3f0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3f0db4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x3f0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3f0db8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3f0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3f0dbc: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x3f0dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f0dc0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3f0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3f0dc4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0DC4u;
    SET_GPR_U32(ctx, 31, 0x3F0DCCu);
    ctx->pc = 0x3F0DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DC4u;
    // 0x3f0dc8: 0xae820248  sw          $v0, 0x248($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0DC4u, 0x3F0DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DCCu;
label_3f0dcc:
    // 0x3f0dcc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f0dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f0dd0: 0xdc25e980  ld          $a1, -0x1680($at)
    ctx->pc = 0x3f0dd0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE980u));
    // 0x3f0dd4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F0DD4u;
    SET_GPR_U32(ctx, 31, 0x3F0DDCu);
    ctx->pc = 0x3F0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DD4u;
    // 0x3f0dd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F0DD4u, 0x3F0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DDCu;
label_3f0ddc:
    // 0x3f0ddc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F0DDCu;
    {
        const bool branch_taken_0x3f0ddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f0ddc) {
            ctx->pc = 0x3F0E0Cu;
            goto label_3f0e0c;
        }
    }
    ctx->pc = 0x3F0DE4u;
    // 0x3f0de4: 0xc680024c  lwc1        $f0, 0x24C($s4)
    ctx->pc = 0x3f0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f0de8: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x3f0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f0dec: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F0DECu;
    SET_GPR_U32(ctx, 31, 0x3F0DF4u);
    ctx->pc = 0x3F0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DECu;
    // 0x3f0df0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F0DECu, 0x3F0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DF4u;
label_3f0df4:
    // 0x3f0df4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f0df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f0df8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f0df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f0dfc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F0DFCu;
    SET_GPR_U32(ctx, 31, 0x3F0E04u);
    ctx->pc = 0x3F0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DFCu;
    // 0x3f0e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F0DFCu, 0x3F0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E04u;
label_3f0e04:
    // 0x3f0e04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F0E04u;
    {
        const bool branch_taken_0x3f0e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E04u;
        // 0x3f0e08: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e04) {
            ctx->pc = 0x3F0E14u;
            goto label_3f0e14;
        }
    }
    ctx->pc = 0x3F0E0Cu;
label_3f0e0c:
    // 0x3f0e0c: 0x3417ffc0  ori         $s7, $zero, 0xFFC0
    ctx->pc = 0x3f0e0cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f0e10: 0x17bbbc  dsll32      $s7, $s7, 14
    ctx->pc = 0x3f0e10u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 14));
label_3f0e14:
    // 0x3f0e14: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3f0e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f0e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0e1c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3f0e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3f0e20: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3f0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3f0e24: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3f0e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f0e28: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0E28u;
    SET_GPR_U32(ctx, 31, 0x3F0E30u);
    ctx->pc = 0x3F0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E28u;
    // 0x3f0e2c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0E28u, 0x3F0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E30u;
label_3f0e30:
    // 0x3f0e30: 0xde830108  ld          $v1, 0x108($s4)
    ctx->pc = 0x3f0e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x3f0e34: 0x30630480  andi        $v1, $v1, 0x480
    ctx->pc = 0x3f0e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1152);
    // 0x3f0e38: 0x1060015f  beqz        $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x3F0E38u;
    {
        const bool branch_taken_0x3f0e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E38u;
        // 0x3f0e3c: 0xae820260  sw          $v0, 0x260($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e38) {
            ctx->pc = 0x3F13B8u;
            goto label_3f13b8;
        }
    }
    ctx->pc = 0x3F0E40u;
    // 0x3f0e40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3f0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f0e44: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3F0E44u;
    {
        const bool branch_taken_0x3f0e44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E44u;
        // 0x3f0e48: 0x8fb60004  lw          $s6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e44) {
            ctx->pc = 0x3F0F50u;
            goto label_3f0f50;
        }
    }
    ctx->pc = 0x3F0E4Cu;
    // 0x3f0e4c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3f0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3f0e50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f0e50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0e54: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f0e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f0e58: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F0E58u;
    {
        const bool branch_taken_0x3f0e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E58u;
        // 0x3f0e5c: 0x8fb30004  lw          $s3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e58) {
            ctx->pc = 0x3F0ED8u;
            goto label_3f0ed8;
        }
    }
    ctx->pc = 0x3F0E60u;
    // 0x3f0e60: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f0e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f0e64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3F0E64u;
    {
        const bool branch_taken_0x3f0e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E64u;
        // 0x3f0e68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e64) {
            ctx->pc = 0x3F0EB0u;
            goto label_3f0eb0;
        }
    }
    ctx->pc = 0x3F0E6Cu;
    // 0x3f0e6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F0E6Cu;
    {
        const bool branch_taken_0x3f0e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E6Cu;
        // 0x3f0e70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0e6c) {
            ctx->pc = 0x3F0E90u;
            goto label_3f0e90;
        }
    }
    ctx->pc = 0x3F0E74u;
    // 0x3f0e74: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0E74u;
    SET_GPR_U32(ctx, 31, 0x3F0E7Cu);
    ctx->pc = 0x3F0E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E74u;
    // 0x3f0e78: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0E74u, 0x3F0E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E7Cu;
label_3f0e7c:
    // 0x3f0e7c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x3f0e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f0e80: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0e84: 0x8fb30004  lw          $s3, 0x4($sp)
    ctx->pc = 0x3f0e84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f0e88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f0e8c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f0e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3f0e90:
    // 0x3f0e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0e94: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0E94u;
    SET_GPR_U32(ctx, 31, 0x3F0E9Cu);
    ctx->pc = 0x3F0E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E94u;
    // 0x3f0e98: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0E94u, 0x3F0E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E9Cu;
label_3f0e9c:
    // 0x3f0e9c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f0e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3f0ea0: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0ea4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f0ea8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f0eac: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3f0eacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_3f0eb0:
    // 0x3f0eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0eb4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0EB4u;
    SET_GPR_U32(ctx, 31, 0x3F0EBCu);
    ctx->pc = 0x3F0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EB4u;
    // 0x3f0eb8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0EB4u, 0x3F0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EBCu;
label_3f0ebc:
    // 0x3f0ebc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f0ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3f0ec0: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0ec4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f0ec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f0ecc: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F0ECCu;
    {
        const bool branch_taken_0x3f0ecc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0ECCu;
        // 0x3f0ed0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0ecc) {
            ctx->pc = 0x3F0F50u;
            goto label_3f0f50;
        }
    }
    ctx->pc = 0x3F0ED4u;
    // 0x3f0ed4: 0x0  nop
    ctx->pc = 0x3f0ed4u;
    // NOP
label_3f0ed8:
    // 0x3f0ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0edc: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0EDCu;
    SET_GPR_U32(ctx, 31, 0x3F0EE4u);
    ctx->pc = 0x3F0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EDCu;
    // 0x3f0ee0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0EDCu, 0x3F0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EE4u;
label_3f0ee4:
    // 0x3f0ee4: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x3f0ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3f0ee8: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0eec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0ef0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x3f0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3f0ef4: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x3f0ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3f0ef8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f0efc: 0x26b2000c  addiu       $s2, $s5, 0xC
    ctx->pc = 0x3f0efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x3f0f00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f0f04: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0F04u;
    SET_GPR_U32(ctx, 31, 0x3F0F0Cu);
    ctx->pc = 0x3F0F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F04u;
    // 0x3f0f08: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0F04u, 0x3F0F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F0Cu;
label_3f0f0c:
    // 0x3f0f0c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x3f0f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x3f0f10: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0f18: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x3f0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3f0f1c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3f0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3f0f20: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0F20u;
    SET_GPR_U32(ctx, 31, 0x3F0F28u);
    ctx->pc = 0x3F0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F20u;
    // 0x3f0f24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0F20u, 0x3F0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F28u;
label_3f0f28:
    // 0x3f0f28: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0f2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0f30: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x3f0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3f0f34: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3f0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3f0f38: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F0F38u;
    SET_GPR_U32(ctx, 31, 0x3F0F40u);
    ctx->pc = 0x3F0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F38u;
    // 0x3f0f3c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F0F38u, 0x3F0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F40u;
label_3f0f40:
    // 0x3f0f40: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f0f44: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3f0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3f0f48: 0x1660ffe3  bnez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3F0F48u;
    {
        const bool branch_taken_0x3f0f48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F48u;
        // 0x3f0f4c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0f48) {
            ctx->pc = 0x3F0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0ed8;
        }
    }
    ctx->pc = 0x3F0F50u;
label_3f0f50:
    // 0x3f0f50: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f0f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f0f54: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f0f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f0f58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3f0f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0f5c: 0x169238  dsll        $s2, $s6, 8
    ctx->pc = 0x3f0f5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) << 8);
    // 0x3f0f60: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F0F60u;
    SET_GPR_U32(ctx, 31, 0x3F0F68u);
    ctx->pc = 0x3F0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F60u;
    // 0x3f0f64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F0F60u, 0x3F0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F68u;
label_3f0f68:
    // 0x3f0f68: 0x12a87a  dsrl        $s5, $s2, 1
    ctx->pc = 0x3f0f68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) >> 1);
    // 0x3f0f6c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3f0f6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0f70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f0f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0f74: 0x0  nop
    ctx->pc = 0x3f0f74u;
    // NOP
label_3f0f78:
    // 0x3f0f78: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x3F0F78u;
    SET_GPR_U32(ctx, 31, 0x3F0F80u);
    ctx->pc = 0x3F0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F78u;
    // 0x3f0f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x3F0F78u, 0x3F0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F80u;
label_3f0f80:
    // 0x3f0f80: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f0f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f0f84: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0f88: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0F88u;
    SET_GPR_U32(ctx, 31, 0x3F0F90u);
    ctx->pc = 0x3F0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F88u;
    // 0x3f0f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0F88u, 0x3F0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F90u;
label_3f0f90:
    // 0x3f0f90: 0x3405fdc0  ori         $a1, $zero, 0xFDC0
    ctx->pc = 0x3f0f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64960);
    // 0x3f0f94: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f0f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f0f98: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0F98u;
    SET_GPR_U32(ctx, 31, 0x3F0FA0u);
    ctx->pc = 0x3F0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F98u;
    // 0x3f0f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0F98u, 0x3F0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FA0u;
label_3f0fa0:
    // 0x3f0fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0fa4: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F0FA4u;
    SET_GPR_U32(ctx, 31, 0x3F0FACu);
    ctx->pc = 0x3F0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FA4u;
    // 0x3f0fa8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F0FA4u, 0x3F0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FACu;
label_3f0fac:
    // 0x3f0fac: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F0FACu;
    {
        const bool branch_taken_0x3f0fac = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3F0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FACu;
        // 0x3f0fb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0fac) {
            ctx->pc = 0x3F0FC4u;
            goto label_3f0fc4;
        }
    }
    ctx->pc = 0x3F0FB4u;
    // 0x3f0fb4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F0FB4u;
    SET_GPR_U32(ctx, 31, 0x3F0FBCu);
    ctx->pc = 0x3F0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FB4u;
    // 0x3f0fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F0FB4u, 0x3F0FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FBCu;
label_3f0fbc:
    // 0x3f0fbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F0FBCu;
    {
        const bool branch_taken_0x3f0fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FBCu;
        // 0x3f0fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0fbc) {
            ctx->pc = 0x3F0FDCu;
            goto label_3f0fdc;
        }
    }
    ctx->pc = 0x3F0FC4u;
label_3f0fc4:
    // 0x3f0fc4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F0FC4u;
    SET_GPR_U32(ctx, 31, 0x3F0FCCu);
    ctx->pc = 0x3F0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FC4u;
    // 0x3f0fc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F0FC4u, 0x3F0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FCCu;
label_3f0fcc:
    // 0x3f0fcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0fd0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F0FD0u;
    SET_GPR_U32(ctx, 31, 0x3F0FD8u);
    ctx->pc = 0x3F0FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FD0u;
    // 0x3f0fd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F0FD0u, 0x3F0FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FD8u;
label_3f0fd8:
    // 0x3f0fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0fdc:
    // 0x3f0fdc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F0FDCu;
    SET_GPR_U32(ctx, 31, 0x3F0FE4u);
    ctx->pc = 0x3F0FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FDCu;
    // 0x3f0fe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F0FDCu, 0x3F0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FE4u;
label_3f0fe4:
    // 0x3f0fe4: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3f0fe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f0fe8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F0FE8u;
    SET_GPR_U32(ctx, 31, 0x3F0FF0u);
    ctx->pc = 0x3F0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FE8u;
    // 0x3f0fec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F0FE8u, 0x3F0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FF0u;
label_3f0ff0:
    // 0x3f0ff0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f0ff4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f0ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f0ff8: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x3f0ff8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0ffc: 0x1f0182b  sltu        $v1, $t7, $s0
    ctx->pc = 0x3f0ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f1000: 0x54600074  bnel        $v1, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x3F1000u;
    {
        const bool branch_taken_0x3f1000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1000) {
            ctx->pc = 0x3F1004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1000u;
            // 0x3f1004: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F11D4u;
            goto label_3f11d4;
        }
    }
    ctx->pc = 0x3F1008u;
    // 0x3f1008: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x3f1008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x3f100c: 0x65e20001  daddiu      $v0, $t7, 0x1
    ctx->pc = 0x3f100cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)1);
    // 0x3f1010: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3f1010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1014: 0x2637025  or          $t6, $s3, $v1
    ctx->pc = 0x3f1014u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x3f1018: 0x50202f  dsubu       $a0, $v0, $s0
    ctx->pc = 0x3f1018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x3f101c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3f101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f1020: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3f1020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f1024: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x3f1024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3f1028: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3f1028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f102c: 0xa36807  srav        $t5, $v1, $a1
    ctx->pc = 0x3f102cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3f1030: 0x8e8c0260  lw          $t4, 0x260($s4)
    ctx->pc = 0x3f1030u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f1034: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F1034u;
    {
        const bool branch_taken_0x3f1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1034u;
        // 0x3f1038: 0xc55823  subu        $t3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1034) {
            ctx->pc = 0x3F10BCu;
            goto label_3f10bc;
        }
    }
    ctx->pc = 0x3F103Cu;
    // 0x3f103c: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F103Cu;
    {
        const bool branch_taken_0x3f103c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F103Cu;
        // 0x3f1040: 0x66070001  daddiu      $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f103c) {
            ctx->pc = 0x3F10FCu;
            goto label_3f10fc;
        }
    }
    ctx->pc = 0x3F1044u;
    // 0x3f1044: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3f1044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f1048: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F1048u;
    {
        const bool branch_taken_0x3f1048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1048u;
        // 0x3f104c: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1048) {
            ctx->pc = 0x3F10BCu;
            goto label_3f10bc;
        }
    }
    ctx->pc = 0x3F1050u;
    // 0x3f1050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F1050u;
    {
        const bool branch_taken_0x3f1050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1050u;
        // 0x3f1054: 0x1702016  dsrlv       $a0, $s0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 11) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1050) {
            ctx->pc = 0x3F1088u;
            goto label_3f1088;
        }
    }
    ctx->pc = 0x3F1058u;
    // 0x3f1058: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f1058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f105c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f105cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f1060: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f1064: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f1064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f1068: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f1068u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f106c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f1070: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3f1070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f1074: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3f1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3f1078: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f1078u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f107c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f1080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3f1080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f1084: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x3f1084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
label_3f1088:
    // 0x3f1088: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f108c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f108cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f1090: 0x1702016  dsrlv       $a0, $s0, $t3
    ctx->pc = 0x3f1090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f1094: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f1094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f1098: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f1098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f109c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f109cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f10a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f10a4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3f10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f10a8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3f10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3f10ac: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f10acu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f10b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f10b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3f10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f10b8: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x3f10b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
label_3f10bc:
    // 0x3f10bc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f10c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f10c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f10c4: 0x1701816  dsrlv       $v1, $s0, $t3
    ctx->pc = 0x3f10c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f10c8: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f10cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f10ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f10d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f10d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f10d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f10d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f10dc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3f10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3f10e0: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f10e0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f10e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f10e8: 0x1f0102b  sltu        $v0, $t7, $s0
    ctx->pc = 0x3f10e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f10ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f10f0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3F10F0u;
    {
        const bool branch_taken_0x3f10f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F10F0u;
        // 0x3f10f4: 0xa46e0000  sh          $t6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f10f0) {
            ctx->pc = 0x3F11D0u;
            goto label_3f11d0;
        }
    }
    ctx->pc = 0x3F10F8u;
label_3f10f8:
    // 0x3f10f8: 0x66070001  daddiu      $a3, $s0, 0x1
    ctx->pc = 0x3f10f8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_3f10fc:
    // 0x3f10fc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f1100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f1100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f1104: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3f1104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3f1108: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f1108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f110c: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f1110: 0x66080002  daddiu      $t0, $s0, 0x2
    ctx->pc = 0x3f1110u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)2);
    // 0x3f1114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f1114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f1118: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x3f1118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x3f111c: 0x66040003  daddiu      $a0, $s0, 0x3
    ctx->pc = 0x3f111cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)3);
    // 0x3f1120: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x3f1120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3f1124: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3f1124u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3f1128: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3f1128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3f112c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f112cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f1130: 0x1703016  dsrlv       $a2, $s0, $t3
    ctx->pc = 0x3f1130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f1134: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x3f1134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f1138: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x3f1138u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3f113c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x3f113cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f1140: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3f1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3f1144: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x3f1144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x3f1148: 0x1673816  dsrlv       $a3, $a3, $t3
    ctx->pc = 0x3f1148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f114c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1150: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3f1150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3f1154: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3f1154u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3f1158: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3f1158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3f115c: 0x12d4824  and         $t1, $t1, $t5
    ctx->pc = 0x3f115cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 13));
    // 0x3f1160: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3f1160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3f1164: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3f1164u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3f1168: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3f1168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3f116c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x3f116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3f1170: 0x1684016  dsrlv       $t0, $t0, $t3
    ctx->pc = 0x3f1170u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f1174: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3f1174u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3f1178: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3f1178u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3f117c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3f117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3f1180: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3f1180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f1184: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3f1184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3f1188: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3f1188u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3f118c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3f118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f1190: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3f1190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x3f1194: 0x1642016  dsrlv       $a0, $a0, $t3
    ctx->pc = 0x3f1194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x3f1198: 0xa4ce0000  sh          $t6, 0x0($a2)
    ctx->pc = 0x3f1198u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f119c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3f119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f11a0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3f11a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3f11a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f11a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f11a8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f11a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f11ac: 0xa4ee0000  sh          $t6, 0x0($a3)
    ctx->pc = 0x3f11acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f11b0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x3f11b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3f11b4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3f11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f11b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f11bc: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x3f11bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f11c0: 0x66100004  daddiu      $s0, $s0, 0x4
    ctx->pc = 0x3f11c0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4);
    // 0x3f11c4: 0x1f0102b  sltu        $v0, $t7, $s0
    ctx->pc = 0x3f11c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f11c8: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F11C8u;
    {
        const bool branch_taken_0x3f11c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11C8u;
        // 0x3f11cc: 0xa48e0000  sh          $t6, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f11c8) {
            ctx->pc = 0x3F10F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f10f8;
        }
    }
    ctx->pc = 0x3F11D0u;
label_3f11d0:
    // 0x3f11d0: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3f11d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3f11d4:
    // 0x3f11d4: 0x2a620100  slti        $v0, $s3, 0x100
    ctx->pc = 0x3f11d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f11d8: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x3F11D8u;
    {
        const bool branch_taken_0x3f11d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11D8u;
        // 0x3f11dc: 0x161a38  dsll        $v1, $s6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f11d8) {
            ctx->pc = 0x3F0F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f0f78;
        }
    }
    ctx->pc = 0x3F11E0u;
    // 0x3f11e0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3f11e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f11e4: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x3F11E4u;
    {
        const bool branch_taken_0x3f11e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11E4u;
        // 0x3f11e8: 0x60782d  daddu       $t7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f11e4) {
            ctx->pc = 0x3F1590u;
            goto label_3f1590;
        }
    }
    ctx->pc = 0x3F11ECu;
    // 0x3f11ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3f11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f11f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3f11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f11f4: 0x340effff  ori         $t6, $zero, 0xFFFF
    ctx->pc = 0x3f11f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3f11f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3f11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f11fc: 0x626807  srav        $t5, $v0, $v1
    ctx->pc = 0x3f11fcu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3f1200: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3f1200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f1204: 0x1f0102f  dsubu       $v0, $t7, $s0
    ctx->pc = 0x3f1204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) - GPR_U64(ctx, 16));
    // 0x3f1208: 0x646023  subu        $t4, $v1, $a0
    ctx->pc = 0x3f1208u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f120c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f120cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f1210: 0x20f102a  slt         $v0, $s0, $t7
    ctx->pc = 0x3f1210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x3f1214: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F1214u;
    {
        const bool branch_taken_0x3f1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1214u;
        // 0x3f1218: 0x8e8b0260  lw          $t3, 0x260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1214) {
            ctx->pc = 0x3F129Cu;
            goto label_3f129c;
        }
    }
    ctx->pc = 0x3F121Cu;
    // 0x3f121c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F121Cu;
    {
        const bool branch_taken_0x3f121c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F121Cu;
        // 0x3f1220: 0x66080001  daddiu      $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f121c) {
            ctx->pc = 0x3F12DCu;
            goto label_3f12dc;
        }
    }
    ctx->pc = 0x3F1224u;
    // 0x3f1224: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3f1224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f1228: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F1228u;
    {
        const bool branch_taken_0x3f1228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1228u;
        // 0x3f122c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1228) {
            ctx->pc = 0x3F129Cu;
            goto label_3f129c;
        }
    }
    ctx->pc = 0x3F1230u;
    // 0x3f1230: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F1230u;
    {
        const bool branch_taken_0x3f1230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1230u;
        // 0x3f1234: 0x1901816  dsrlv       $v1, $s0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 12) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1230) {
            ctx->pc = 0x3F1268u;
            goto label_3f1268;
        }
    }
    ctx->pc = 0x3F1238u;
    // 0x3f1238: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f123c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f123cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f1240: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f1240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f1244: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f1244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f1248: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f1248u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f124c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f1250: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f1250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f1254: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3f1254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3f1258: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f1258u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f125c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f1260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f1264: 0xa46e0000  sh          $t6, 0x0($v1)
    ctx->pc = 0x3f1264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
label_3f1268:
    // 0x3f1268: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f1268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f126c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f126cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f1270: 0x1901816  dsrlv       $v1, $s0, $t4
    ctx->pc = 0x3f1270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f1274: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f1274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f1278: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f127c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f127cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f1280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f1280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f1284: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f1284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f1288: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3f1288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3f128c: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f128cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f1290: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f1290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f1294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f1294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f1298: 0xa46e0000  sh          $t6, 0x0($v1)
    ctx->pc = 0x3f1298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
label_3f129c:
    // 0x3f129c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f12a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f12a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f12a4: 0x1901816  dsrlv       $v1, $s0, $t4
    ctx->pc = 0x3f12a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f12a8: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f12a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f12ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f12acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f12b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f12b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f12b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f12b8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f12bc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3f12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3f12c0: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x3f12c0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f12c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f12c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f12c8: 0x20f102b  sltu        $v0, $s0, $t7
    ctx->pc = 0x3f12c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x3f12cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f12d0: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3F12D0u;
    {
        const bool branch_taken_0x3f12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12D0u;
        // 0x3f12d4: 0xa46e0000  sh          $t6, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f12d0) {
            ctx->pc = 0x3F1590u;
            goto label_3f1590;
        }
    }
    ctx->pc = 0x3F12D8u;
label_3f12d8:
    // 0x3f12d8: 0x66080001  daddiu      $t0, $s0, 0x1
    ctx->pc = 0x3f12d8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_3f12dc:
    // 0x3f12dc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3f12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f12e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f12e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f12e4: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3f12e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3f12e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f12e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f12ec: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x3f12ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x3f12f0: 0x66090002  daddiu      $t1, $s0, 0x2
    ctx->pc = 0x3f12f0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)2);
    // 0x3f12f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f12f8: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x3f12f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x3f12fc: 0x66070003  daddiu      $a3, $s0, 0x3
    ctx->pc = 0x3f12fcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)3);
    // 0x3f1300: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x3f1300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3f1304: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3f1304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3f1308: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3f1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3f130c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f1310: 0x1902816  dsrlv       $a1, $s0, $t4
    ctx->pc = 0x3f1310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f1314: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3f1314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3f1318: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3f1318u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3f131c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x3f131cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f1320: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3f1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3f1324: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x3f1324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x3f1328: 0x1884016  dsrlv       $t0, $t0, $t4
    ctx->pc = 0x3f1328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f132c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3f132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1330: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3f1330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f1334: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3f1334u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3f1338: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f1338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3f133c: 0xcd3024  and         $a2, $a2, $t5
    ctx->pc = 0x3f133cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
    // 0x3f1340: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3f1340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3f1344: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3f1344u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3f1348: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3f1348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3f134c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x3f134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3f1350: 0x1894816  dsrlv       $t1, $t1, $t4
    ctx->pc = 0x3f1350u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f1354: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3f1354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3f1358: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3f1358u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3f135c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3f135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3f1360: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x3f1360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3f1364: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x3f1364u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3f1368: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x3f1368u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3f136c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f1370: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x3f1370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x3f1374: 0x1873816  dsrlv       $a3, $a3, $t4
    ctx->pc = 0x3f1374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 12) & 0x3F));
    // 0x3f1378: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x3f1378u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f137c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3f137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f1380: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x3f1380u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x3f1384: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3f1384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3f1388: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3f1388u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3f138c: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x3f138cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f1390: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x3f1390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3f1394: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3f1394u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3f1398: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3f1398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3f139c: 0xa52e0000  sh          $t6, 0x0($t1)
    ctx->pc = 0x3f139cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3f13a0: 0x66100004  daddiu      $s0, $s0, 0x4
    ctx->pc = 0x3f13a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4);
    // 0x3f13a4: 0x20f102b  sltu        $v0, $s0, $t7
    ctx->pc = 0x3f13a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x3f13a8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3F13A8u;
    {
        const bool branch_taken_0x3f13a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13A8u;
        // 0x3f13ac: 0xa4ee0000  sh          $t6, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f13a8) {
            ctx->pc = 0x3F12D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f12d8;
        }
    }
    ctx->pc = 0x3F13B0u;
    // 0x3f13b0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3F13B0u;
    {
        const bool branch_taken_0x3f13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13B0u;
        // 0x3f13b4: 0xde820108  ld          $v0, 0x108($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f13b0) {
            ctx->pc = 0x3F1594u;
            goto label_3f1594;
        }
    }
    ctx->pc = 0x3F13B8u;
label_3f13b8:
    // 0x3f13b8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3f13b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f13bc: 0x18a00074  blez        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3F13BCu;
    {
        const bool branch_taken_0x3f13bc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3F13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13BCu;
        // 0x3f13c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f13bc) {
            ctx->pc = 0x3F1590u;
            goto label_3f1590;
        }
    }
    ctx->pc = 0x3F13C4u;
    // 0x3f13c4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3f13c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f13c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3f13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3f13cc: 0x2442c548  addiu       $v0, $v0, -0x3AB8
    ctx->pc = 0x3f13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952264));
    // 0x3f13d0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3f13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3f13d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f13d8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3f13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3f13dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f13dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f13e0:
    // 0x3f13e0: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F13E0u;
    SET_GPR_U32(ctx, 31, 0x3F13E8u);
    ctx->pc = 0x3F13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13E0u;
    // 0x3f13e4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F13E0u, 0x3F13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13E8u;
label_3f13e8:
    // 0x3f13e8: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3f13e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f13ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3f13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3f13f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f13f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f13f4: 0x8e850260  lw          $a1, 0x260($s4)
    ctx->pc = 0x3f13f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f13f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f13fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3f13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3f1400: 0x2640018  mult        $zero, $s3, $a0
    ctx->pc = 0x3f1400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3f1404: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3f1404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1408: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f1408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f140c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f140cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f1410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1414: 0x3012  mflo        $a2
    ctx->pc = 0x3f1414u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3f1418: 0x2010  mfhi        $a0
    ctx->pc = 0x3f1418u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f141c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3f141cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3f1420: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f1420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f1424: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3f1424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3f1428: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3f1428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3f142c: 0x4913a  dsrl        $s2, $a0, 4
    ctx->pc = 0x3f142cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> 4);
label_3f1430:
    // 0x3f1430: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f1430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1434: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f1434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f1438: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f1438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f143c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F143Cu;
    {
        const bool branch_taken_0x3f143c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F143Cu;
        // 0x3f1440: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f143c) {
            ctx->pc = 0x3F1454u;
            goto label_3f1454;
        }
    }
    ctx->pc = 0x3F1444u;
    // 0x3f1444: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1444u;
    SET_GPR_U32(ctx, 31, 0x3F144Cu);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1444u, 0x3F144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F144Cu;
label_3f144c:
    // 0x3f144c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F144Cu;
    {
        const bool branch_taken_0x3f144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f144c) {
            ctx->pc = 0x3F146Cu;
            goto label_3f146c;
        }
    }
    ctx->pc = 0x3F1454u;
label_3f1454:
    // 0x3f1454: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f1454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f1458: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1458u;
    SET_GPR_U32(ctx, 31, 0x3F1460u);
    ctx->pc = 0x3F145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1458u;
    // 0x3f145c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1458u, 0x3F1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1460u;
label_3f1460:
    // 0x3f1460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1464: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1464u;
    SET_GPR_U32(ctx, 31, 0x3F146Cu);
    ctx->pc = 0x3F1468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1464u;
    // 0x3f1468: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1464u, 0x3F146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F146Cu;
label_3f146c:
    // 0x3f146c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f146cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1470: 0xdc25e988  ld          $a1, -0x1678($at)
    ctx->pc = 0x3f1470u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE988u));
    // 0x3f1474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1478: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1478u;
    SET_GPR_U32(ctx, 31, 0x3F1480u);
    ctx->pc = 0x3F147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1478u;
    // 0x3f147c: 0x26760002  addiu       $s6, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1478u, 0x3F1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1480u;
label_3f1480:
    // 0x3f1480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1484: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F1484u;
    SET_GPR_U32(ctx, 31, 0x3F148Cu);
    ctx->pc = 0x3F1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1484u;
    // 0x3f1488: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F1484u, 0x3F148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F148Cu;
label_3f148c:
    // 0x3f148c: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f1490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1494: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1498: 0xdc25e990  ld          $a1, -0x1670($at)
    ctx->pc = 0x3f1498u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE990u));
    // 0x3f149c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f14a0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f14a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f14a4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F14A4u;
    SET_GPR_U32(ctx, 31, 0x3F14ACu);
    ctx->pc = 0x3F14A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14A4u;
    // 0x3f14a8: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F14A4u, 0x3F14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14ACu;
label_3f14ac:
    // 0x3f14ac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f14acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f14b0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f14b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f14b4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F14B4u;
    SET_GPR_U32(ctx, 31, 0x3F14BCu);
    ctx->pc = 0x3F14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14B4u;
    // 0x3f14b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F14B4u, 0x3F14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14BCu;
label_3f14bc:
    // 0x3f14bc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F14BCu;
    SET_GPR_U32(ctx, 31, 0x3F14C4u);
    ctx->pc = 0x3F14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14BCu;
    // 0x3f14c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F14BCu, 0x3F14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14C4u;
label_3f14c4:
    // 0x3f14c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f14c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f14c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f14c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f14cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3f14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f14d0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f14d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f14d4: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f14d8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F14D8u;
    {
        const bool branch_taken_0x3f14d8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14D8u;
        // 0x3f14dc: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f14d8) {
            ctx->pc = 0x3F14F0u;
            goto label_3f14f0;
        }
    }
    ctx->pc = 0x3F14E0u;
    // 0x3f14e0: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F14E0u;
    SET_GPR_U32(ctx, 31, 0x3F14E8u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F14E0u, 0x3F14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14E8u;
label_3f14e8:
    // 0x3f14e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F14E8u;
    {
        const bool branch_taken_0x3f14e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f14e8) {
            ctx->pc = 0x3F150Cu;
            goto label_3f150c;
        }
    }
    ctx->pc = 0x3F14F0u;
label_3f14f0:
    // 0x3f14f0: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x3f14f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x3f14f4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f14f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f14f8: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F14F8u;
    SET_GPR_U32(ctx, 31, 0x3F1500u);
    ctx->pc = 0x3F14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14F8u;
    // 0x3f14fc: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F14F8u, 0x3F1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1500u;
label_3f1500:
    // 0x3f1500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1504: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1504u;
    SET_GPR_U32(ctx, 31, 0x3F150Cu);
    ctx->pc = 0x3F1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1504u;
    // 0x3f1508: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1504u, 0x3F150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F150Cu;
label_3f150c:
    // 0x3f150c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1510: 0xdc25e998  ld          $a1, -0x1668($at)
    ctx->pc = 0x3f1510u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE998u));
    // 0x3f1514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1518: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3f1518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3f151c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F151Cu;
    SET_GPR_U32(ctx, 31, 0x3F1524u);
    ctx->pc = 0x3F1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F151Cu;
    // 0x3f1520: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F151Cu, 0x3F1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1524u;
label_3f1524:
    // 0x3f1524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1528: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F1528u;
    SET_GPR_U32(ctx, 31, 0x3F1530u);
    ctx->pc = 0x3F152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1528u;
    // 0x3f152c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F1528u, 0x3F1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1530u;
label_3f1530:
    // 0x3f1530: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x3f1530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x3f1534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1538: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f153c: 0xdc25e9a0  ld          $a1, -0x1660($at)
    ctx->pc = 0x3f153cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9A0u));
    // 0x3f1540: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f1540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f1544: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f1544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1548: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1548u;
    SET_GPR_U32(ctx, 31, 0x3F1550u);
    ctx->pc = 0x3F154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1548u;
    // 0x3f154c: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1548u, 0x3F1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1550u;
label_3f1550:
    // 0x3f1550: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f1550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f1554: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f1554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f1558: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1558u;
    SET_GPR_U32(ctx, 31, 0x3F1560u);
    ctx->pc = 0x3F155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1558u;
    // 0x3f155c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1558u, 0x3F1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1560u;
label_3f1560:
    // 0x3f1560: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1560u;
    SET_GPR_U32(ctx, 31, 0x3F1568u);
    ctx->pc = 0x3F1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1560u;
    // 0x3f1564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1560u, 0x3F1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1568u;
label_3f1568:
    // 0x3f1568: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f156c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f156cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f1570: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x3f1570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f1574: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3F1574u;
    {
        const bool branch_taken_0x3f1574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1574u;
        // 0x3f1578: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1574) {
            ctx->pc = 0x3F1430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1430;
        }
    }
    ctx->pc = 0x3F157Cu;
    // 0x3f157c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3f157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f1580: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3f1580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1584: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x3f1584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f1588: 0x5440ff95  bnel        $v0, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x3F1588u;
    {
        const bool branch_taken_0x3f1588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1588) {
            ctx->pc = 0x3F158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1588u;
            // 0x3f158c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F13E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f13e0;
        }
    }
    ctx->pc = 0x3F1590u;
label_3f1590:
    // 0x3f1590: 0xde820108  ld          $v0, 0x108($s4)
    ctx->pc = 0x3f1590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 264)));
label_3f1594:
    // 0x3f1594: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f1594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f1598: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3f1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3f159c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f15a0: 0x50400116  beql        $v0, $zero, . + 4 + (0x116 << 2)
    ctx->pc = 0x3F15A0u;
    {
        const bool branch_taken_0x3f15a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f15a0) {
            ctx->pc = 0x3F15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F15A0u;
            // 0x3f15a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F19FCu;
            goto label_3f19fc;
        }
    }
    ctx->pc = 0x3F15A8u;
    // 0x3f15a8: 0xc68c024c  lwc1        $f12, 0x24C($s4)
    ctx->pc = 0x3f15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f15ac: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F15ACu;
    SET_GPR_U32(ctx, 31, 0x3F15B4u);
    ctx->pc = 0x3F15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15ACu;
    // 0x3f15b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F15ACu, 0x3F15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F15B4u;
label_3f15b4:
    // 0x3f15b4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f15b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f15b8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f15b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f15bc: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F15BCu;
    SET_GPR_U32(ctx, 31, 0x3F15C4u);
    ctx->pc = 0x3F15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15BCu;
    // 0x3f15c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F15BCu, 0x3F15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F15C4u;
label_3f15c4:
    // 0x3f15c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3f15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f15c8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3f15c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f15cc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3f15ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f15d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3f15d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3f15d4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F15D4u;
    SET_GPR_U32(ctx, 31, 0x3F15DCu);
    ctx->pc = 0x3F15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15D4u;
    // 0x3f15d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F15D4u, 0x3F15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F15DCu;
label_3f15dc:
    // 0x3f15dc: 0xae820268  sw          $v0, 0x268($s4)
    ctx->pc = 0x3f15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 616), GPR_U32(ctx, 2));
    // 0x3f15e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3f15e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f15e4: 0x18a00074  blez        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3F15E4u;
    {
        const bool branch_taken_0x3f15e4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3F15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15E4u;
        // 0x3f15e8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f15e4) {
            ctx->pc = 0x3F17B8u;
            goto label_3f17b8;
        }
    }
    ctx->pc = 0x3F15ECu;
    // 0x3f15ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3f15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3f15f0: 0x2442c548  addiu       $v0, $v0, -0x3AB8
    ctx->pc = 0x3f15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952264));
    // 0x3f15f4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3f15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3f15f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f15fc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3f15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x3f1600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f1600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1604: 0x0  nop
    ctx->pc = 0x3f1604u;
    // NOP
label_3f1608:
    // 0x3f1608: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F1608u;
    SET_GPR_U32(ctx, 31, 0x3F1610u);
    ctx->pc = 0x3F160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1608u;
    // 0x3f160c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F1608u, 0x3F1610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1610u;
label_3f1610:
    // 0x3f1610: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3f1610u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f1614: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3f1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3f1618: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f1618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f161c: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x3f161cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3f1620: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f1620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1624: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3f1624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3f1628: 0x2640018  mult        $zero, $s3, $a0
    ctx->pc = 0x3f1628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3f162c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3f162cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1630: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f1634: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f1634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f1638: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f163c: 0x3012  mflo        $a2
    ctx->pc = 0x3f163cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3f1640: 0x2010  mfhi        $a0
    ctx->pc = 0x3f1640u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f1644: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3f1644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3f1648: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f1648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f164c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3f164cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3f1650: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3f1650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3f1654: 0x4913a  dsrl        $s2, $a0, 4
    ctx->pc = 0x3f1654u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> 4);
label_3f1658:
    // 0x3f1658: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f1658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f165c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f1660: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f1660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f1664: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1664u;
    {
        const bool branch_taken_0x3f1664 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1664u;
        // 0x3f1668: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1664) {
            ctx->pc = 0x3F167Cu;
            goto label_3f167c;
        }
    }
    ctx->pc = 0x3F166Cu;
    // 0x3f166c: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F166Cu;
    SET_GPR_U32(ctx, 31, 0x3F1674u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F166Cu, 0x3F1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1674u;
label_3f1674:
    // 0x3f1674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1674u;
    {
        const bool branch_taken_0x3f1674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1674) {
            ctx->pc = 0x3F1694u;
            goto label_3f1694;
        }
    }
    ctx->pc = 0x3F167Cu;
label_3f167c:
    // 0x3f167c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f1680: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1680u;
    SET_GPR_U32(ctx, 31, 0x3F1688u);
    ctx->pc = 0x3F1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1680u;
    // 0x3f1684: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1680u, 0x3F1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1688u;
label_3f1688:
    // 0x3f1688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f168c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F168Cu;
    SET_GPR_U32(ctx, 31, 0x3F1694u);
    ctx->pc = 0x3F1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F168Cu;
    // 0x3f1690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F168Cu, 0x3F1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1694u;
label_3f1694:
    // 0x3f1694: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1698: 0xdc25e9a8  ld          $a1, -0x1658($at)
    ctx->pc = 0x3f1698u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9A8u));
    // 0x3f169c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f169cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f16a0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F16A0u;
    SET_GPR_U32(ctx, 31, 0x3F16A8u);
    ctx->pc = 0x3F16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16A0u;
    // 0x3f16a4: 0x26760002  addiu       $s6, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F16A0u, 0x3F16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16A8u;
label_3f16a8:
    // 0x3f16a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f16ac: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F16ACu;
    SET_GPR_U32(ctx, 31, 0x3F16B4u);
    ctx->pc = 0x3F16B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16ACu;
    // 0x3f16b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F16ACu, 0x3F16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16B4u;
label_3f16b4:
    // 0x3f16b4: 0x8e830268  lw          $v1, 0x268($s4)
    ctx->pc = 0x3f16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3f16b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f16bc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f16bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f16c0: 0xdc25e9b0  ld          $a1, -0x1650($at)
    ctx->pc = 0x3f16c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9B0u));
    // 0x3f16c4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f16c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f16cc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F16CCu;
    SET_GPR_U32(ctx, 31, 0x3F16D4u);
    ctx->pc = 0x3F16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16CCu;
    // 0x3f16d0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F16CCu, 0x3F16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16D4u;
label_3f16d4:
    // 0x3f16d4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f16d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f16d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f16d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f16dc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F16DCu;
    SET_GPR_U32(ctx, 31, 0x3F16E4u);
    ctx->pc = 0x3F16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16DCu;
    // 0x3f16e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F16DCu, 0x3F16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16E4u;
label_3f16e4:
    // 0x3f16e4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F16E4u;
    SET_GPR_U32(ctx, 31, 0x3F16ECu);
    ctx->pc = 0x3F16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16E4u;
    // 0x3f16e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F16E4u, 0x3F16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16ECu;
label_3f16ec:
    // 0x3f16ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f16ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f16f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f16f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f16f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3f16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f16f8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f16f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f16fc: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f16fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f1700: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1700u;
    {
        const bool branch_taken_0x3f1700 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1700u;
        // 0x3f1704: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1700) {
            ctx->pc = 0x3F1718u;
            goto label_3f1718;
        }
    }
    ctx->pc = 0x3F1708u;
    // 0x3f1708: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1708u;
    SET_GPR_U32(ctx, 31, 0x3F1710u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1708u, 0x3F1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1710u;
label_3f1710:
    // 0x3f1710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1710u;
    {
        const bool branch_taken_0x3f1710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1710) {
            ctx->pc = 0x3F1734u;
            goto label_3f1734;
        }
    }
    ctx->pc = 0x3F1718u;
label_3f1718:
    // 0x3f1718: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x3f1718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x3f171c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f171cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f1720: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1720u;
    SET_GPR_U32(ctx, 31, 0x3F1728u);
    ctx->pc = 0x3F1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1720u;
    // 0x3f1724: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1720u, 0x3F1728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1728u;
label_3f1728:
    // 0x3f1728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f172c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F172Cu;
    SET_GPR_U32(ctx, 31, 0x3F1734u);
    ctx->pc = 0x3F1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F172Cu;
    // 0x3f1730: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F172Cu, 0x3F1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1734u;
label_3f1734:
    // 0x3f1734: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1738: 0xdc25e9b8  ld          $a1, -0x1648($at)
    ctx->pc = 0x3f1738u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9B8u));
    // 0x3f173c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1740: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3f1740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3f1744: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1744u;
    SET_GPR_U32(ctx, 31, 0x3F174Cu);
    ctx->pc = 0x3F1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1744u;
    // 0x3f1748: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1744u, 0x3F174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F174Cu;
label_3f174c:
    // 0x3f174c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1750: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F1750u;
    SET_GPR_U32(ctx, 31, 0x3F1758u);
    ctx->pc = 0x3F1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1750u;
    // 0x3f1754: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F1750u, 0x3F1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1758u;
label_3f1758:
    // 0x3f1758: 0x8e830268  lw          $v1, 0x268($s4)
    ctx->pc = 0x3f1758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
    // 0x3f175c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1760: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1764: 0xdc25e9c0  ld          $a1, -0x1640($at)
    ctx->pc = 0x3f1764u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9C0u));
    // 0x3f1768: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f1768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f176c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f176cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1770: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1770u;
    SET_GPR_U32(ctx, 31, 0x3F1778u);
    ctx->pc = 0x3F1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1770u;
    // 0x3f1774: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1770u, 0x3F1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1778u;
label_3f1778:
    // 0x3f1778: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f1778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f177c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f177cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f1780: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F1780u;
    SET_GPR_U32(ctx, 31, 0x3F1788u);
    ctx->pc = 0x3F1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1780u;
    // 0x3f1784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F1780u, 0x3F1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1788u;
label_3f1788:
    // 0x3f1788: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1788u;
    SET_GPR_U32(ctx, 31, 0x3F1790u);
    ctx->pc = 0x3F178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1788u;
    // 0x3f178c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1788u, 0x3F1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1790u;
label_3f1790:
    // 0x3f1790: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1794: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f1794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f1798: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x3f1798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f179c: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3F179Cu;
    {
        const bool branch_taken_0x3f179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F179Cu;
        // 0x3f17a0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f179c) {
            ctx->pc = 0x3F1658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1658;
        }
    }
    ctx->pc = 0x3F17A4u;
    // 0x3f17a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3f17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f17a8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3f17a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f17ac: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x3f17acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f17b0: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x3F17B0u;
    {
        const bool branch_taken_0x3f17b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17B0u;
        // 0x3f17b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f17b0) {
            ctx->pc = 0x3F1608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1608;
        }
    }
    ctx->pc = 0x3F17B8u;
label_3f17b8:
    // 0x3f17b8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F17B8u;
    SET_GPR_U32(ctx, 31, 0x3F17C0u);
    ctx->pc = 0x3F17BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F17B8u;
    // 0x3f17bc: 0xc68c0250  lwc1        $f12, 0x250($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F17B8u, 0x3F17C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F17C0u;
label_3f17c0:
    // 0x3f17c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f17c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f17c4: 0xdc25e9c8  ld          $a1, -0x1638($at)
    ctx->pc = 0x3f17c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9C8u));
    // 0x3f17c8: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F17C8u;
    SET_GPR_U32(ctx, 31, 0x3F17D0u);
    ctx->pc = 0x3F17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F17C8u;
    // 0x3f17cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F17C8u, 0x3F17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F17D0u;
label_3f17d0:
    // 0x3f17d0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F17D0u;
    {
        const bool branch_taken_0x3f17d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f17d0) {
            ctx->pc = 0x3F17F8u;
            goto label_3f17f8;
        }
    }
    ctx->pc = 0x3F17D8u;
    // 0x3f17d8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F17D8u;
    SET_GPR_U32(ctx, 31, 0x3F17E0u);
    ctx->pc = 0x3F17DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F17D8u;
    // 0x3f17dc: 0xc68c0250  lwc1        $f12, 0x250($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F17D8u, 0x3F17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F17E0u;
label_3f17e0:
    // 0x3f17e0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3f17e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f17e4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3f17e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3f17e8: 0xc0bee3e  jal         func_2FB8F8
    ctx->pc = 0x3F17E8u;
    SET_GPR_U32(ctx, 31, 0x3F17F0u);
    ctx->pc = 0x3F17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F17E8u;
    // 0x3f17ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x3F17E8u, 0x3F17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F17F0u;
label_3f17f0:
    // 0x3f17f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F17F0u;
    {
        const bool branch_taken_0x3f17f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17F0u;
        // 0x3f17f4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f17f0) {
            ctx->pc = 0x3F1804u;
            goto label_3f1804;
        }
    }
    ctx->pc = 0x3F17F8u;
label_3f17f8:
    // 0x3f17f8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3F17F8u;
    SET_GPR_U32(ctx, 31, 0x3F1800u);
    ctx->pc = 0x3F17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F17F8u;
    // 0x3f17fc: 0xc68c024c  lwc1        $f12, 0x24C($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3F17F8u, 0x3F1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1800u;
label_3f1800:
    // 0x3f1800: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3f1800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1804:
    // 0x3f1804: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3f1804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1808: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f180c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3f180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f1810: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3f1810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3f1814: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F1814u;
    SET_GPR_U32(ctx, 31, 0x3F181Cu);
    ctx->pc = 0x3F1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1814u;
    // 0x3f1818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F1814u, 0x3F181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F181Cu;
label_3f181c:
    // 0x3f181c: 0xae820264  sw          $v0, 0x264($s4)
    ctx->pc = 0x3f181cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 612), GPR_U32(ctx, 2));
    // 0x3f1820: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3f1820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f1824: 0x18a00074  blez        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3F1824u;
    {
        const bool branch_taken_0x3f1824 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3F1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1824u;
        // 0x3f1828: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1824) {
            ctx->pc = 0x3F19F8u;
            goto label_3f19f8;
        }
    }
    ctx->pc = 0x3F182Cu;
    // 0x3f182c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3f182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3f1830: 0x2442c548  addiu       $v0, $v0, -0x3AB8
    ctx->pc = 0x3f1830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952264));
    // 0x3f1834: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3f1834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3f1838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f183c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3f183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3f1840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f1840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1844: 0x0  nop
    ctx->pc = 0x3f1844u;
    // NOP
label_3f1848:
    // 0x3f1848: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F1848u;
    SET_GPR_U32(ctx, 31, 0x3F1850u);
    ctx->pc = 0x3F184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1848u;
    // 0x3f184c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F1848u, 0x3F1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1850u;
label_3f1850:
    // 0x3f1850: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3f1850u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f1854: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3f1854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1858: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f1858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f185c: 0x8e850264  lw          $a1, 0x264($s4)
    ctx->pc = 0x3f185cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3f1860: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f1860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f1864: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3f1864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3f1868: 0x2640018  mult        $zero, $s3, $a0
    ctx->pc = 0x3f1868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3f186c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3f186cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1870: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f1874: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f1874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3f1878: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f187c: 0x3012  mflo        $a2
    ctx->pc = 0x3f187cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3f1880: 0x2010  mfhi        $a0
    ctx->pc = 0x3f1880u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3f1884: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3f1884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3f1888: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3f1888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3f188c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3f188cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3f1890: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3f1890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3f1894: 0x4913a  dsrl        $s2, $a0, 4
    ctx->pc = 0x3f1894u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> 4);
label_3f1898:
    // 0x3f1898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f1898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f189c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f18a0: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f18a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f18a4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F18A4u;
    {
        const bool branch_taken_0x3f18a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18A4u;
        // 0x3f18a8: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f18a4) {
            ctx->pc = 0x3F18BCu;
            goto label_3f18bc;
        }
    }
    ctx->pc = 0x3F18ACu;
    // 0x3f18ac: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F18ACu;
    SET_GPR_U32(ctx, 31, 0x3F18B4u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F18ACu, 0x3F18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18B4u;
label_3f18b4:
    // 0x3f18b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F18B4u;
    {
        const bool branch_taken_0x3f18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f18b4) {
            ctx->pc = 0x3F18D4u;
            goto label_3f18d4;
        }
    }
    ctx->pc = 0x3F18BCu;
label_3f18bc:
    // 0x3f18bc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f18bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f18c0: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F18C0u;
    SET_GPR_U32(ctx, 31, 0x3F18C8u);
    ctx->pc = 0x3F18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F18C0u;
    // 0x3f18c4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F18C0u, 0x3F18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18C8u;
label_3f18c8:
    // 0x3f18c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f18cc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F18CCu;
    SET_GPR_U32(ctx, 31, 0x3F18D4u);
    ctx->pc = 0x3F18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F18CCu;
    // 0x3f18d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F18CCu, 0x3F18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18D4u;
label_3f18d4:
    // 0x3f18d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f18d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f18d8: 0xdc25e9d0  ld          $a1, -0x1630($at)
    ctx->pc = 0x3f18d8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9D0u));
    // 0x3f18dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f18dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f18e0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F18E0u;
    SET_GPR_U32(ctx, 31, 0x3F18E8u);
    ctx->pc = 0x3F18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F18E0u;
    // 0x3f18e4: 0x26760002  addiu       $s6, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F18E0u, 0x3F18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18E8u;
label_3f18e8:
    // 0x3f18e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f18ec: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F18ECu;
    SET_GPR_U32(ctx, 31, 0x3F18F4u);
    ctx->pc = 0x3F18F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F18ECu;
    // 0x3f18f0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F18ECu, 0x3F18F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18F4u;
label_3f18f4:
    // 0x3f18f4: 0x8e830264  lw          $v1, 0x264($s4)
    ctx->pc = 0x3f18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3f18f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f18f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f18fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f18fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1900: 0xdc25e9d8  ld          $a1, -0x1628($at)
    ctx->pc = 0x3f1900u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9D8u));
    // 0x3f1904: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f1904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f1908: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f1908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f190c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F190Cu;
    SET_GPR_U32(ctx, 31, 0x3F1914u);
    ctx->pc = 0x3F1910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F190Cu;
    // 0x3f1910: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F190Cu, 0x3F1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1914u;
label_3f1914:
    // 0x3f1914: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f1914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f1918: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f1918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f191c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F191Cu;
    SET_GPR_U32(ctx, 31, 0x3F1924u);
    ctx->pc = 0x3F1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F191Cu;
    // 0x3f1920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F191Cu, 0x3F1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1924u;
label_3f1924:
    // 0x3f1924: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1924u;
    SET_GPR_U32(ctx, 31, 0x3F192Cu);
    ctx->pc = 0x3F1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1924u;
    // 0x3f1928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1924u, 0x3F192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F192Cu;
label_3f192c:
    // 0x3f192c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f192cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1930: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3f1930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3f1934: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3f1934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f1938: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3f1938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3f193c: 0x242202d  daddu       $a0, $s2, $v0
    ctx->pc = 0x3f193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3f1940: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1940u;
    {
        const bool branch_taken_0x3f1940 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1940u;
        // 0x3f1944: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1940) {
            ctx->pc = 0x3F1958u;
            goto label_3f1958;
        }
    }
    ctx->pc = 0x3F1948u;
    // 0x3f1948: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1948u;
    SET_GPR_U32(ctx, 31, 0x3F1950u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1948u, 0x3F1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1950u;
label_3f1950:
    // 0x3f1950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1950u;
    {
        const bool branch_taken_0x3f1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1950) {
            ctx->pc = 0x3F1974u;
            goto label_3f1974;
        }
    }
    ctx->pc = 0x3F1958u;
label_3f1958:
    // 0x3f1958: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x3f1958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x3f195c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f1960: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3F1960u;
    SET_GPR_U32(ctx, 31, 0x3F1968u);
    ctx->pc = 0x3F1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1960u;
    // 0x3f1964: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3F1960u, 0x3F1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1968u;
label_3f1968:
    // 0x3f1968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f196c: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F196Cu;
    SET_GPR_U32(ctx, 31, 0x3F1974u);
    ctx->pc = 0x3F1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F196Cu;
    // 0x3f1970: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F196Cu, 0x3F1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1974u;
label_3f1974:
    // 0x3f1974: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1978: 0xdc25e9e0  ld          $a1, -0x1620($at)
    ctx->pc = 0x3f1978u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9E0u));
    // 0x3f197c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1980: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3f1980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3f1984: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1984u;
    SET_GPR_U32(ctx, 31, 0x3F198Cu);
    ctx->pc = 0x3F1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1984u;
    // 0x3f1988: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1984u, 0x3F198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F198Cu;
label_3f198c:
    // 0x3f198c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1990: 0xc0c39c4  jal         func_30E710
    ctx->pc = 0x3F1990u;
    SET_GPR_U32(ctx, 31, 0x3F1998u);
    ctx->pc = 0x3F1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1990u;
    // 0x3f1994: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E710u, 0x3F1990u, 0x3F1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1998u;
label_3f1998:
    // 0x3f1998: 0x8e830264  lw          $v1, 0x264($s4)
    ctx->pc = 0x3f1998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 612)));
    // 0x3f199c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f199cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f19a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f19a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f19a4: 0xdc25e9e8  ld          $a1, -0x1618($at)
    ctx->pc = 0x3f19a4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9E8u));
    // 0x3f19a8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3f19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f19ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3f19acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f19b0: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F19B0u;
    SET_GPR_U32(ctx, 31, 0x3F19B8u);
    ctx->pc = 0x3F19B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19B0u;
    // 0x3f19b4: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F19B0u, 0x3F19B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19B8u;
label_3f19b8:
    // 0x3f19b8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3f19b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3f19bc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f19bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f19c0: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3F19C0u;
    SET_GPR_U32(ctx, 31, 0x3F19C8u);
    ctx->pc = 0x3F19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19C0u;
    // 0x3f19c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3F19C0u, 0x3F19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19C8u;
label_3f19c8:
    // 0x3f19c8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F19C8u;
    SET_GPR_U32(ctx, 31, 0x3F19D0u);
    ctx->pc = 0x3F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19C8u;
    // 0x3f19cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F19C8u, 0x3F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19D0u;
label_3f19d0:
    // 0x3f19d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f19d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f19d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3f19d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3f19d8: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x3f19d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3f19dc: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3F19DCu;
    {
        const bool branch_taken_0x3f19dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19DCu;
        // 0x3f19e0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f19dc) {
            ctx->pc = 0x3F1898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1898;
        }
    }
    ctx->pc = 0x3F19E4u;
    // 0x3f19e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3f19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f19e8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3f19e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f19ec: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x3f19ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f19f0: 0x5440ff95  bnel        $v0, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x3F19F0u;
    {
        const bool branch_taken_0x3f19f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f19f0) {
            ctx->pc = 0x3F19F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F19F0u;
            // 0x3f19f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1848;
        }
    }
    ctx->pc = 0x3F19F8u;
label_3f19f8:
    // 0x3f19f8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3f19f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f19fc:
    // 0x3f19fc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3f19fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f1a00: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3f1a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f1a04: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3f1a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f1a08: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3f1a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f1a0c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3f1a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f1a10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f1a10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f1a14: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3f1a14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f1a18: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3f1a18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f1a1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f1a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1a20: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A20u;
        // 0x3f1a24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A28u;
}
