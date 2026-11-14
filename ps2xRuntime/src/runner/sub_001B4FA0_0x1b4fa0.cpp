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

// Function: sub_001B4FA0
// Address: 0x1b4fa0 - 0x1b5700
void sub_001B4FA0_0x1b4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4FA0_0x1b4fa0");
#endif

    switch (ctx->pc) {
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b506cu: goto label_1b506c;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b50b4u: goto label_1b50b4;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5140u: goto label_1b5140;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b5174u: goto label_1b5174;
        case 0x1b5190u: goto label_1b5190;
        case 0x1b51b4u: goto label_1b51b4;
        case 0x1b51d0u: goto label_1b51d0;
        case 0x1b51ecu: goto label_1b51ec;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b538cu: goto label_1b538c;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53e0u: goto label_1b53e0;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b542cu: goto label_1b542c;
        case 0x1b5444u: goto label_1b5444;
        case 0x1b5488u: goto label_1b5488;
        case 0x1b5494u: goto label_1b5494;
        case 0x1b54acu: goto label_1b54ac;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54d0u: goto label_1b54d0;
        case 0x1b54e8u: goto label_1b54e8;
        case 0x1b54fcu: goto label_1b54fc;
        case 0x1b5510u: goto label_1b5510;
        case 0x1b552cu: goto label_1b552c;
        case 0x1b5550u: goto label_1b5550;
        case 0x1b556cu: goto label_1b556c;
        case 0x1b5588u: goto label_1b5588;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b5604u: goto label_1b5604;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5628u: goto label_1b5628;
        case 0x1b5640u: goto label_1b5640;
        case 0x1b5684u: goto label_1b5684;
        case 0x1b5690u: goto label_1b5690;
        case 0x1b56acu: goto label_1b56ac;
        case 0x1b56c4u: goto label_1b56c4;
        default: break;
    }

    ctx->pc = 0x1b4fa0u;

    // 0x1b4fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b4fa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b4fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b4fa8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b4fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1b4fac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b4facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b4fb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b4fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b4fb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b4fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b4fb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b4fbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4fc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b4fc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b4fc8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1b4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1b4fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b4fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fd0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1B4FD0u;
    {
        const bool branch_taken_0x1b4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fd0) {
            ctx->pc = 0x1B52BCu;
            goto label_1b52bc;
        }
    }
    ctx->pc = 0x1B4FD8u;
label_1b4fd8:
    // 0x1b4fd8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b4fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4fdc: 0x249501fc  addiu       $s5, $a0, 0x1FC
    ctx->pc = 0x1b4fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 508));
    // 0x1b4fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b4fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fe8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B4FE8u;
    SET_GPR_U32(ctx, 31, 0x1B4FF0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B4FE8u, 0x1B4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FF0u;
label_1b4ff0:
    // 0x1b4ff0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4ff4: 0x8c91001c  lw          $s1, 0x1C($a0)
    ctx->pc = 0x1b4ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b4ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ffc: 0x16020050  bne         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1B4FFCu;
    {
        const bool branch_taken_0x1b4ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ffc) {
            ctx->pc = 0x1B5140u;
            goto label_1b5140;
        }
    }
    ctx->pc = 0x1B5004u;
    // 0x1b5004: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b5004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5008: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b500c: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1b500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1b5010: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1b5010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b5014: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5014u;
    SET_GPR_U32(ctx, 31, 0x1B501Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5014u, 0x1B501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B501Cu;
label_1b501c:
    // 0x1b501c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b501cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5020: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5024: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b5028: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b502c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B502Cu;
    {
        const bool branch_taken_0x1b502c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b502c) {
            ctx->pc = 0x1B5044u;
            goto label_1b5044;
        }
    }
    ctx->pc = 0x1B5034u;
    // 0x1b5034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5038: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1b5038u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b503c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B503Cu;
    {
        const bool branch_taken_0x1b503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b503c) {
            ctx->pc = 0x1B5048u;
            goto label_1b5048;
        }
    }
    ctx->pc = 0x1B5044u;
label_1b5044:
    // 0x1b5044: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b5044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5048:
    // 0x1b5048: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b504c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B504Cu;
    SET_GPR_U32(ctx, 31, 0x1B5054u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B504Cu, 0x1B5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5054u;
label_1b5054:
    // 0x1b5054: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5058: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b505c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b5060: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5064: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5064u;
    SET_GPR_U32(ctx, 31, 0x1B506Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5064u, 0x1B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B506Cu;
label_1b506c:
    // 0x1b506c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b506cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5070: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5074: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b5074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5078: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B5078u;
    SET_GPR_U32(ctx, 31, 0x1B5080u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5078u, 0x1B5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5080u;
label_1b5080:
    // 0x1b5080: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5084: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1b5084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b5088: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b508c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B508Cu;
    {
        const bool branch_taken_0x1b508c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b508c) {
            ctx->pc = 0x1B50A4u;
            goto label_1b50a4;
        }
    }
    ctx->pc = 0x1B5094u;
    // 0x1b5094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5098: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1b5098u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b509c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B509Cu;
    {
        const bool branch_taken_0x1b509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b509c) {
            ctx->pc = 0x1B50A8u;
            goto label_1b50a8;
        }
    }
    ctx->pc = 0x1B50A4u;
label_1b50a4:
    // 0x1b50a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b50a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b50a8:
    // 0x1b50a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b50ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B50ACu;
    SET_GPR_U32(ctx, 31, 0x1B50B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B50ACu, 0x1B50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50B4u;
label_1b50b4:
    // 0x1b50b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b50b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b50bc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b50c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b50c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B50C4u;
    SET_GPR_U32(ctx, 31, 0x1B50CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B50C4u, 0x1B50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50CCu;
label_1b50cc:
    // 0x1b50cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b50d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b50d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b50d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B50D8u;
    SET_GPR_U32(ctx, 31, 0x1B50E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B50D8u, 0x1B50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50E0u;
label_1b50e0:
    // 0x1b50e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b50e4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1b50e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b50ec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B50ECu;
    {
        const bool branch_taken_0x1b50ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b50ec) {
            ctx->pc = 0x1B5104u;
            goto label_1b5104;
        }
    }
    ctx->pc = 0x1B50F4u;
    // 0x1b50f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50f8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1b50f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b50fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B50FCu;
    {
        const bool branch_taken_0x1b50fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50fc) {
            ctx->pc = 0x1B5108u;
            goto label_1b5108;
        }
    }
    ctx->pc = 0x1B5104u;
label_1b5104:
    // 0x1b5104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b5104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5108:
    // 0x1b5108: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b510c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B510Cu;
    SET_GPR_U32(ctx, 31, 0x1B5114u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B510Cu, 0x1B5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5114u;
label_1b5114:
    // 0x1b5114: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5118: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b511c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b5120: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5124: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5124u;
    SET_GPR_U32(ctx, 31, 0x1B512Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5124u, 0x1B512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B512Cu;
label_1b512c:
    // 0x1b512c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5134: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b5134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5138: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B5138u;
    SET_GPR_U32(ctx, 31, 0x1B5140u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5138u, 0x1B5140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5140u;
label_1b5140:
    // 0x1b5140: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5144: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5144u;
    SET_GPR_U32(ctx, 31, 0x1B514Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5144u, 0x1B514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B514Cu;
label_1b514c:
    // 0x1b514c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5154: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1b5154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1b5158: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B5158u;
    SET_GPR_U32(ctx, 31, 0x1B5160u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B5158u, 0x1B5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5160u;
label_1b5160:
    // 0x1b5160: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5164: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b516c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B516Cu;
    SET_GPR_U32(ctx, 31, 0x1B5174u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B516Cu, 0x1B5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5174u;
label_1b5174:
    // 0x1b5174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5178: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x1b5178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b517c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5180: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5188: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5188u;
    SET_GPR_U32(ctx, 31, 0x1B5190u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5188u, 0x1B5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5190u;
label_1b5190:
    // 0x1b5190: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5194: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b5194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5198: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b5198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b519c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1b519cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b51a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b51a4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b51a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b51a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51ac: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B51ACu;
    SET_GPR_U32(ctx, 31, 0x1B51B4u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B51ACu, 0x1B51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51B4u;
label_1b51b4:
    // 0x1b51b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b51b8: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x1b51b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b51bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b51c0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b51c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b51c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51c8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B51C8u;
    SET_GPR_U32(ctx, 31, 0x1B51D0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B51C8u, 0x1B51D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51D0u;
label_1b51d0:
    // 0x1b51d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b51d4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1b51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b51d8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b51d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b51dc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1b51dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1b51e0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b51e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B51E4u;
    SET_GPR_U32(ctx, 31, 0x1B51ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B51E4u, 0x1B51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51ECu;
label_1b51ec:
    // 0x1b51ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b51ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b51f4: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b51f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b51f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51fc: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B51FCu;
    SET_GPR_U32(ctx, 31, 0x1B5204u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B51FCu, 0x1B5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5204u;
label_1b5204:
    // 0x1b5204: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5208: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b5208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b520c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1b520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5210: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1b5210u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5214: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5218: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b521c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5220: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5220u;
    SET_GPR_U32(ctx, 31, 0x1B5228u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5220u, 0x1B5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5228u;
label_1b5228:
    // 0x1b5228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b522c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5230: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1b5230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5234: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1b5234u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5238: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b523c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b523cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5240: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5248: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B5248u;
    SET_GPR_U32(ctx, 31, 0x1B5250u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B5248u, 0x1B5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5250u;
label_1b5250:
    // 0x1b5250: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5254: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5254u;
    SET_GPR_U32(ctx, 31, 0x1B525Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5254u, 0x1B525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B525Cu;
label_1b525c:
    // 0x1b525c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b525cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5260: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5264: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b526c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B526Cu;
    SET_GPR_U32(ctx, 31, 0x1B5274u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B526Cu, 0x1B5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5274u;
label_1b5274:
    // 0x1b5274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5278: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b527c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b527cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5280: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1b5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5284: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5288: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b528c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b528cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b5290: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b5294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5298: 0x0  nop
    ctx->pc = 0x1b5298u;
    // NOP
    // 0x1b529c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b529cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b52a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b52a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b52a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52a8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b52ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b52acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52b0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B52B0u;
    SET_GPR_U32(ctx, 31, 0x1B52B8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B52B0u, 0x1B52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52B8u;
label_1b52b8:
    // 0x1b52b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b52bc:
    // 0x1b52bc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1b52bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b52c0: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1B52C0u;
    {
        const bool branch_taken_0x1b52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52c0) {
            ctx->pc = 0x1B4FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4fd8;
        }
    }
    ctx->pc = 0x1B52C8u;
    // 0x1b52c8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b52cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B52CCu;
    SET_GPR_U32(ctx, 31, 0x1B52D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B52CCu, 0x1B52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52D4u;
label_1b52d4:
    // 0x1b52d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b52d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b52dc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b52e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b52e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B52E4u;
    SET_GPR_U32(ctx, 31, 0x1B52ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B52E4u, 0x1B52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52ECu;
label_1b52ec:
    // 0x1b52ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b52ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b52f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52f4: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1b52f8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B52F8u;
    SET_GPR_U32(ctx, 31, 0x1B5300u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B52F8u, 0x1B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5300u;
label_1b5300:
    // 0x1b5300: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5304: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b530c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B530Cu;
    SET_GPR_U32(ctx, 31, 0x1B5314u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B530Cu, 0x1B5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5314u;
label_1b5314:
    // 0x1b5314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5318: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x1b5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b531c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5320: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5328: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5328u;
    SET_GPR_U32(ctx, 31, 0x1B5330u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5328u, 0x1B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5330u;
label_1b5330:
    // 0x1b5330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5334: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b5334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5338: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b5338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b533c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1b533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b5340: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5344: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b534c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B534Cu;
    SET_GPR_U32(ctx, 31, 0x1B5354u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B534Cu, 0x1B5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5354u;
label_1b5354:
    // 0x1b5354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5358: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x1b5358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b535c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5360: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5368: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5368u;
    SET_GPR_U32(ctx, 31, 0x1B5370u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5368u, 0x1B5370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5370u;
label_1b5370:
    // 0x1b5370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5374: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1b5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5378: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b5378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b537c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1b537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1b5380: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5384: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5384u;
    SET_GPR_U32(ctx, 31, 0x1B538Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5384u, 0x1B538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B538Cu;
label_1b538c:
    // 0x1b538c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b538cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5390: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5394: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b5398: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b539c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B539Cu;
    SET_GPR_U32(ctx, 31, 0x1B53A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B539Cu, 0x1B53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53A4u;
label_1b53a4:
    // 0x1b53a4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1b53a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b53a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b53ac: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b53acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b53b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53b4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B53B4u;
    SET_GPR_U32(ctx, 31, 0x1B53BCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B53B4u, 0x1B53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53BCu;
label_1b53bc:
    // 0x1b53bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b53c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b53c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b53c4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1b53c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b53c8: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1b53c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b53cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b53d0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b53d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53d8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B53D8u;
    SET_GPR_U32(ctx, 31, 0x1B53E0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B53D8u, 0x1B53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53E0u;
label_1b53e0:
    // 0x1b53e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b53e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b53e8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1b53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b53ec: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1b53ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b53f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b53f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b53f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b53f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b53fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b53fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5400: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B5400u;
    SET_GPR_U32(ctx, 31, 0x1B5408u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B5400u, 0x1B5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b540c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B540Cu;
    SET_GPR_U32(ctx, 31, 0x1B5414u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B540Cu, 0x1B5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5414u;
label_1b5414:
    // 0x1b5414: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5418: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b541c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b5420: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5424: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5424u;
    SET_GPR_U32(ctx, 31, 0x1B542Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5424u, 0x1B542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B542Cu;
label_1b542c:
    // 0x1b542c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1b542cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5430: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5434: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b543c: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B543Cu;
    SET_GPR_U32(ctx, 31, 0x1B5444u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B543Cu, 0x1B5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5444u;
label_1b5444:
    // 0x1b5444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5448: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b544c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b544cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5450: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1b5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5458: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b545c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b545cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b5460: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b5464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5468: 0x0  nop
    ctx->pc = 0x1b5468u;
    // NOP
    // 0x1b546c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b546cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5470: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5474: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b5474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5478: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b547c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5480: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B5480u;
    SET_GPR_U32(ctx, 31, 0x1B5488u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B5480u, 0x1B5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5488u;
label_1b5488:
    // 0x1b5488: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b548c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B548Cu;
    SET_GPR_U32(ctx, 31, 0x1B5494u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B548Cu, 0x1B5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5494u;
label_1b5494:
    // 0x1b5494: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5498: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b549c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b54a0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b54a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b54a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B54A4u;
    SET_GPR_U32(ctx, 31, 0x1B54ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B54A4u, 0x1B54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54ACu;
label_1b54ac:
    // 0x1b54ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b54acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b54b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b54b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b54b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54b8: 0xc44c00f0  lwc1        $f12, 0xF0($v0)
    ctx->pc = 0x1b54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b54bc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1B54BCu;
    SET_GPR_U32(ctx, 31, 0x1B54C4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1B54BCu, 0x1B54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54C4u;
label_1b54c4:
    // 0x1b54c4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b54c8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B54C8u;
    SET_GPR_U32(ctx, 31, 0x1B54D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B54C8u, 0x1B54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54D0u;
label_1b54d0:
    // 0x1b54d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b54d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b54d8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b54dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b54e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B54E0u;
    SET_GPR_U32(ctx, 31, 0x1B54E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B54E0u, 0x1B54E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54E8u;
label_1b54e8:
    // 0x1b54e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b54ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54f0: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1b54f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1b54f4: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1B54F4u;
    SET_GPR_U32(ctx, 31, 0x1B54FCu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1B54F4u, 0x1B54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54FCu;
label_1b54fc:
    // 0x1b54fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5500: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5508: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5508u;
    SET_GPR_U32(ctx, 31, 0x1B5510u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5508u, 0x1B5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5510u;
label_1b5510:
    // 0x1b5510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5514: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x1b5514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5518: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b551c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5524: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5524u;
    SET_GPR_U32(ctx, 31, 0x1B552Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5524u, 0x1B552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B552Cu;
label_1b552c:
    // 0x1b552c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5530: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5534: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b5534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b5538: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1b5538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b553c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5540: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5548: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5548u;
    SET_GPR_U32(ctx, 31, 0x1B5550u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5548u, 0x1B5550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5550u;
label_1b5550:
    // 0x1b5550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5554: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x1b5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5558: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b555c: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5564: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5564u;
    SET_GPR_U32(ctx, 31, 0x1B556Cu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5564u, 0x1B556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B556Cu;
label_1b556c:
    // 0x1b556c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5570: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1b5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5574: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b5574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b5578: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1b5578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1b557c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5580: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5580u;
    SET_GPR_U32(ctx, 31, 0x1B5588u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5580u, 0x1B5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5588u;
label_1b5588:
    // 0x1b5588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b558c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5590: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b5594: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b5594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b5598: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5598u;
    SET_GPR_U32(ctx, 31, 0x1B55A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5598u, 0x1B55A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55A0u;
label_1b55a0:
    // 0x1b55a0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b55a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b55a8: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b55ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55b0: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B55B0u;
    SET_GPR_U32(ctx, 31, 0x1B55B8u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B55B0u, 0x1B55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55B8u;
label_1b55b8:
    // 0x1b55b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b55bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b55bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b55c0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1b55c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b55c4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1b55c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b55c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b55cc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b55d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b55d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55d4: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B55D4u;
    SET_GPR_U32(ctx, 31, 0x1B55DCu);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B55D4u, 0x1B55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55DCu;
label_1b55dc:
    // 0x1b55dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b55e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b55e4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1b55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b55e8: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1b55e8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b55ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b55f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b55f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55fc: 0xc08c208  jal         func_230820
    ctx->pc = 0x1B55FCu;
    SET_GPR_U32(ctx, 31, 0x1B5604u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1B55FCu, 0x1B5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5604u;
label_1b5604:
    // 0x1b5604: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5608: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5608u;
    SET_GPR_U32(ctx, 31, 0x1B5610u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5608u, 0x1B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5610u;
label_1b5610:
    // 0x1b5610: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5614: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5618: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b561c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b5620: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B5620u;
    SET_GPR_U32(ctx, 31, 0x1B5628u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5620u, 0x1B5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5628u;
label_1b5628:
    // 0x1b5628: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1b5628u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b562c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5630: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b5634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5638: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B5638u;
    SET_GPR_U32(ctx, 31, 0x1B5640u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B5638u, 0x1B5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5640u;
label_1b5640:
    // 0x1b5640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5644: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b5644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b5648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b564c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1b564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5654: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b5654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5658: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b5658u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b565c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b5660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5664: 0x0  nop
    ctx->pc = 0x1b5664u;
    // NOP
    // 0x1b5668: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b5668u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b566c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5670: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b5670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5674: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b5678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b567c: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1B567Cu;
    SET_GPR_U32(ctx, 31, 0x1B5684u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1B567Cu, 0x1B5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5684u;
label_1b5684:
    // 0x1b5684: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5688: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B5688u;
    SET_GPR_U32(ctx, 31, 0x1B5690u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5688u, 0x1B5690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5690u;
label_1b5690:
    // 0x1b5690: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b5690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5694: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5698: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b569c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x1b569cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b56a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b56a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B56A4u;
    SET_GPR_U32(ctx, 31, 0x1B56ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B56A4u, 0x1B56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56ACu;
label_1b56ac:
    // 0x1b56ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b56acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b56b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b56b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56b8: 0xc44c00f4  lwc1        $f12, 0xF4($v0)
    ctx->pc = 0x1b56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b56bc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1B56BCu;
    SET_GPR_U32(ctx, 31, 0x1B56C4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1B56BCu, 0x1B56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56C4u;
label_1b56c4:
    // 0x1b56c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b56c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b56cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b56ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b56d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b56d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b56d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b56d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b56d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b56d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b56dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b56dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b56e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b56e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b56e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b56e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b56e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b56ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1b56ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b56f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B56F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B56F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B56F8u;
    // 0x1b56f8: 0x0  nop
    ctx->pc = 0x1b56f8u;
    // NOP
    // 0x1b56fc: 0x0  nop
    ctx->pc = 0x1b56fcu;
    // NOP
    ctx->pc = 0x1b5700u;
}
