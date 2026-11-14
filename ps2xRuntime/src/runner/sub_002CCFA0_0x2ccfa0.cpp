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

// Function: sub_002CCFA0
// Address: 0x2ccfa0 - 0x2cd480
void sub_002CCFA0_0x2ccfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCFA0_0x2ccfa0");
#endif

    switch (ctx->pc) {
        case 0x2ccfe8u: goto label_2ccfe8;
        case 0x2cd008u: goto label_2cd008;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd040u: goto label_2cd040;
        case 0x2cd050u: goto label_2cd050;
        case 0x2cd060u: goto label_2cd060;
        case 0x2cd06cu: goto label_2cd06c;
        case 0x2cd078u: goto label_2cd078;
        case 0x2cd090u: goto label_2cd090;
        case 0x2cd0a4u: goto label_2cd0a4;
        case 0x2cd0b4u: goto label_2cd0b4;
        case 0x2cd0c0u: goto label_2cd0c0;
        case 0x2cd0ccu: goto label_2cd0cc;
        case 0x2cd0d8u: goto label_2cd0d8;
        case 0x2cd0e8u: goto label_2cd0e8;
        case 0x2cd0fcu: goto label_2cd0fc;
        case 0x2cd10cu: goto label_2cd10c;
        case 0x2cd11cu: goto label_2cd11c;
        case 0x2cd128u: goto label_2cd128;
        case 0x2cd134u: goto label_2cd134;
        case 0x2cd140u: goto label_2cd140;
        case 0x2cd154u: goto label_2cd154;
        case 0x2cd164u: goto label_2cd164;
        case 0x2cd170u: goto label_2cd170;
        case 0x2cd188u: goto label_2cd188;
        case 0x2cd194u: goto label_2cd194;
        case 0x2cd1bcu: goto label_2cd1bc;
        case 0x2cd1d0u: goto label_2cd1d0;
        case 0x2cd1e0u: goto label_2cd1e0;
        case 0x2cd1ecu: goto label_2cd1ec;
        case 0x2cd204u: goto label_2cd204;
        case 0x2cd214u: goto label_2cd214;
        case 0x2cd234u: goto label_2cd234;
        case 0x2cd250u: goto label_2cd250;
        case 0x2cd26cu: goto label_2cd26c;
        case 0x2cd28cu: goto label_2cd28c;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2e0u: goto label_2cd2e0;
        case 0x2cd2f0u: goto label_2cd2f0;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd32cu: goto label_2cd32c;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd384u: goto label_2cd384;
        case 0x2cd39cu: goto label_2cd39c;
        case 0x2cd3b4u: goto label_2cd3b4;
        case 0x2cd3c0u: goto label_2cd3c0;
        case 0x2cd3ccu: goto label_2cd3cc;
        case 0x2cd3e4u: goto label_2cd3e4;
        case 0x2cd3f8u: goto label_2cd3f8;
        case 0x2cd408u: goto label_2cd408;
        case 0x2cd42cu: goto label_2cd42c;
        case 0x2cd440u: goto label_2cd440;
        default: break;
    }

    ctx->pc = 0x2ccfa0u;

    // 0x2ccfa0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ccfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ccfa4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ccfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ccfa8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ccfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2ccfac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ccfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ccfb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ccfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ccfb4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ccfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ccfb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ccfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ccfbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ccfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ccfc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ccfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ccfc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ccfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ccfc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ccfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ccfcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ccfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ccfd0: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2ccfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2ccfd4: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2ccfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2ccfd8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2ccfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ccfdc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2ccfe0: 0xc0b3520  jal         func_2CD480
    ctx->pc = 0x2CCFE0u;
    SET_GPR_U32(ctx, 31, 0x2CCFE8u);
    ctx->pc = 0x2CD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD480u, 0x2CCFE0u, 0x2CCFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFE8u;
label_2ccfe8:
    // 0x2ccfe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCFE8u;
    {
        const bool branch_taken_0x2ccfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccfe8) {
            ctx->pc = 0x2CCFFCu;
            goto label_2ccffc;
        }
    }
    ctx->pc = 0x2CCFF0u;
    // 0x2ccff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ccff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccff4: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2CCFF4u;
    {
        const bool branch_taken_0x2ccff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccff4) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CCFFCu;
label_2ccffc:
    // 0x2ccffc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2ccffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd000: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x2CD000u;
    SET_GPR_U32(ctx, 31, 0x2CD008u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x2CD000u, 0x2CD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD008u;
label_2cd008:
    // 0x2cd008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd00c: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD00Cu;
    {
        const bool branch_taken_0x2cd00c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd00c) {
            ctx->pc = 0x2CD050u;
            goto label_2cd050;
        }
    }
    ctx->pc = 0x2CD014u;
    // 0x2cd014: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2cd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd018: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cd018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2cd01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd020: 0xc09d660  jal         func_275980
    ctx->pc = 0x2CD020u;
    SET_GPR_U32(ctx, 31, 0x2CD028u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CD020u, 0x2CD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD028u;
label_2cd028:
    // 0x2cd028: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd02c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2cd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd030: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cd030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2cd034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd038: 0xc09d660  jal         func_275980
    ctx->pc = 0x2CD038u;
    SET_GPR_U32(ctx, 31, 0x2CD040u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CD038u, 0x2CD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD040u;
label_2cd040:
    // 0x2cd040: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd044: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cd044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd048: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2CD048u;
    SET_GPR_U32(ctx, 31, 0x2CD050u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2CD048u, 0x2CD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD050u;
label_2cd050:
    // 0x2cd050: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd058: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2CD058u;
    SET_GPR_U32(ctx, 31, 0x2CD060u);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2CD058u, 0x2CD060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD060u;
label_2cd060:
    // 0x2cd060: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd064: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD064u;
    SET_GPR_U32(ctx, 31, 0x2CD06Cu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD064u, 0x2CD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD06Cu;
label_2cd06c:
    // 0x2cd06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd070: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CD070u;
    SET_GPR_U32(ctx, 31, 0x2CD078u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CD070u, 0x2CD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD078u;
label_2cd078:
    // 0x2cd078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd07c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CD07Cu;
    {
        const bool branch_taken_0x2cd07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd07c) {
            ctx->pc = 0x2CD11Cu;
            goto label_2cd11c;
        }
    }
    ctx->pc = 0x2CD084u;
    // 0x2cd084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd088: 0xc048094  jal         func_120250
    ctx->pc = 0x2CD088u;
    SET_GPR_U32(ctx, 31, 0x2CD090u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2CD088u, 0x2CD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD090u;
label_2cd090:
    // 0x2cd090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd094: 0x24050479  addiu       $a1, $zero, 0x479
    ctx->pc = 0x2cd094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1145));
    // 0x2cd098: 0x2786a4f4  addiu       $a2, $gp, -0x5B0C
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cd09c: 0xc041a50  jal         func_106940
    ctx->pc = 0x2CD09Cu;
    SET_GPR_U32(ctx, 31, 0x2CD0A4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2CD09Cu, 0x2CD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0A4u;
label_2cd0a4:
    // 0x2cd0a4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2cd0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2cd0a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0ac: 0xc040304  jal         func_100C10
    ctx->pc = 0x2CD0ACu;
    SET_GPR_U32(ctx, 31, 0x2CD0B4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2CD0ACu, 0x2CD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0B4u;
label_2cd0b4:
    // 0x2cd0b4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd0b8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD0B8u;
    SET_GPR_U32(ctx, 31, 0x2CD0C0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD0B8u, 0x2CD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0C0u;
label_2cd0c0:
    // 0x2cd0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0c4: 0xc0970ac  jal         func_25C2B0
    ctx->pc = 0x2CD0C4u;
    SET_GPR_U32(ctx, 31, 0x2CD0CCu);
    ctx->pc = 0x25C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C2B0u, 0x2CD0C4u, 0x2CD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0CCu;
label_2cd0cc:
    // 0x2cd0cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0d0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2CD0D0u;
    SET_GPR_U32(ctx, 31, 0x2CD0D8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2CD0D0u, 0x2CD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0D8u;
label_2cd0d8:
    // 0x2cd0d8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2cd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2cd0dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0e0: 0xc0b3f64  jal         func_2CFD90
    ctx->pc = 0x2CD0E0u;
    SET_GPR_U32(ctx, 31, 0x2CD0E8u);
    ctx->pc = 0x2CFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD90u, 0x2CD0E0u, 0x2CD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0E8u;
label_2cd0e8:
    // 0x2cd0e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD0E8u;
    {
        const bool branch_taken_0x2cd0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0e8) {
            ctx->pc = 0x2CD10Cu;
            goto label_2cd10c;
        }
    }
    ctx->pc = 0x2CD0F0u;
    // 0x2cd0f0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd0f4: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD0F4u;
    SET_GPR_U32(ctx, 31, 0x2CD0FCu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD0F4u, 0x2CD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0FCu;
label_2cd0fc:
    // 0x2cd0fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd104: 0xc097078  jal         func_25C1E0
    ctx->pc = 0x2CD104u;
    SET_GPR_U32(ctx, 31, 0x2CD10Cu);
    ctx->pc = 0x25C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1E0u, 0x2CD104u, 0x2CD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD10Cu;
label_2cd10c:
    // 0x2cd10c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2cd10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2cd110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd114: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD114u;
    SET_GPR_U32(ctx, 31, 0x2CD11Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD114u, 0x2CD11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD11Cu;
label_2cd11c:
    // 0x2cd11c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd120: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2CD120u;
    SET_GPR_U32(ctx, 31, 0x2CD128u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2CD120u, 0x2CD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD128u;
label_2cd128:
    // 0x2cd128: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd12c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD12Cu;
    SET_GPR_U32(ctx, 31, 0x2CD134u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD12Cu, 0x2CD134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD134u;
label_2cd134:
    // 0x2cd134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd138: 0xc097098  jal         func_25C260
    ctx->pc = 0x2CD138u;
    SET_GPR_U32(ctx, 31, 0x2CD140u);
    ctx->pc = 0x25C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C260u, 0x2CD138u, 0x2CD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD140u;
label_2cd140:
    // 0x2cd140: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cd140u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd144: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2cd148: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2cd148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2cd14c: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2CD14Cu;
    SET_GPR_U32(ctx, 31, 0x2CD154u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2CD14Cu, 0x2CD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD154u;
label_2cd154:
    // 0x2cd154: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x2cd154u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2cd158: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd15c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD15Cu;
    SET_GPR_U32(ctx, 31, 0x2CD164u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD15Cu, 0x2CD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD164u;
label_2cd164:
    // 0x2cd164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd168: 0xc097084  jal         func_25C210
    ctx->pc = 0x2CD168u;
    SET_GPR_U32(ctx, 31, 0x2CD170u);
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2CD168u, 0x2CD170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD170u;
label_2cd170:
    // 0x2cd170: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2cd170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd174: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x2CD174u;
    {
        const bool branch_taken_0x2cd174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd174) {
            ctx->pc = 0x2CD2B4u;
            goto label_2cd2b4;
        }
    }
    ctx->pc = 0x2CD17Cu;
    // 0x2cd17c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd180: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD180u;
    SET_GPR_U32(ctx, 31, 0x2CD188u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD180u, 0x2CD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD188u;
label_2cd188:
    // 0x2cd188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd18c: 0xc097070  jal         func_25C1C0
    ctx->pc = 0x2CD18Cu;
    SET_GPR_U32(ctx, 31, 0x2CD194u);
    ctx->pc = 0x25C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1C0u, 0x2CD18Cu, 0x2CD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD194u;
label_2cd194:
    // 0x2cd194: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2cd198: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CD198u;
    {
        const bool branch_taken_0x2cd198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd198) {
            ctx->pc = 0x2CD274u;
            goto label_2cd274;
        }
    }
    ctx->pc = 0x2CD1A0u;
    // 0x2cd1a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2cd1a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD1A4u;
    {
        const bool branch_taken_0x2cd1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1a4) {
            ctx->pc = 0x2CD1C4u;
            goto label_2cd1c4;
        }
    }
    ctx->pc = 0x2CD1ACu;
    // 0x2cd1ac: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd1b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd1b4: 0xc096e24  jal         func_25B890
    ctx->pc = 0x2CD1B4u;
    SET_GPR_U32(ctx, 31, 0x2CD1BCu);
    ctx->pc = 0x25B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B890u, 0x2CD1B4u, 0x2CD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1BCu;
label_2cd1bc:
    // 0x2cd1bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2CD1BCu;
    {
        const bool branch_taken_0x2cd1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1bc) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD1C4u;
label_2cd1c4:
    // 0x2cd1c4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd1c8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD1C8u;
    SET_GPR_U32(ctx, 31, 0x2CD1D0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD1C8u, 0x2CD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1D0u;
label_2cd1d0:
    // 0x2cd1d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1d8: 0xc097064  jal         func_25C190
    ctx->pc = 0x2CD1D8u;
    SET_GPR_U32(ctx, 31, 0x2CD1E0u);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x2CD1D8u, 0x2CD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1E0u;
label_2cd1e0:
    // 0x2cd1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1e4: 0xc048094  jal         func_120250
    ctx->pc = 0x2CD1E4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ECu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2CD1E4u, 0x2CD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1ECu;
label_2cd1ec:
    // 0x2cd1ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cd1f4: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x2cd1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x2cd1f8: 0x2786a4f4  addiu       $a2, $gp, -0x5B0C
    ctx->pc = 0x2cd1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cd1fc: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2CD1FCu;
    SET_GPR_U32(ctx, 31, 0x2CD204u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2CD1FCu, 0x2CD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD204u;
label_2cd204:
    // 0x2cd204: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cd204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cd208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd20c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2CD20Cu;
    SET_GPR_U32(ctx, 31, 0x2CD214u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2CD20Cu, 0x2CD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD214u;
label_2cd214:
    // 0x2cd214: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD214u;
    {
        const bool branch_taken_0x2cd214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd214) {
            ctx->pc = 0x2CD25Cu;
            goto label_2cd25c;
        }
    }
    ctx->pc = 0x2CD21Cu;
    // 0x2cd21c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd220: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2cd220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cd224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd228: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2cd228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd22c: 0xc0b3384  jal         func_2CCE10
    ctx->pc = 0x2CD22Cu;
    SET_GPR_U32(ctx, 31, 0x2CD234u);
    ctx->pc = 0x2CCE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE10u, 0x2CD22Cu, 0x2CD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD234u;
label_2cd234:
    // 0x2cd234: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2CD234u;
    {
        const bool branch_taken_0x2cd234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd234) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD23Cu;
    // 0x2cd23c: 0xa3a000ef  sb          $zero, 0xEF($sp)
    ctx->pc = 0x2cd23cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd240: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd248: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD248u;
    SET_GPR_U32(ctx, 31, 0x2CD250u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD248u, 0x2CD250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD250u;
label_2cd250:
    // 0x2cd250: 0x93a200ef  lbu         $v0, 0xEF($sp)
    ctx->pc = 0x2cd250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 239)));
    // 0x2cd254: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2CD254u;
    {
        const bool branch_taken_0x2cd254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd254) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD25Cu;
label_2cd25c:
    // 0x2cd25c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd260: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cd260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd264: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2CD264u;
    SET_GPR_U32(ctx, 31, 0x2CD26Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2CD264u, 0x2CD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD26Cu;
label_2cd26c:
    // 0x2cd26c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2CD26Cu;
    {
        const bool branch_taken_0x2cd26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd26c) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD274u;
label_2cd274:
    // 0x2cd274: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd278: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2cd278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd27c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cd27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd280: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd284: 0xc0b3384  jal         func_2CCE10
    ctx->pc = 0x2CD284u;
    SET_GPR_U32(ctx, 31, 0x2CD28Cu);
    ctx->pc = 0x2CCE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE10u, 0x2CD284u, 0x2CD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD28Cu;
label_2cd28c:
    // 0x2cd28c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CD28Cu;
    {
        const bool branch_taken_0x2cd28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd28c) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD294u;
    // 0x2cd294: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2cd294u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd298: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd29c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd2a0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD2A0u;
    SET_GPR_U32(ctx, 31, 0x2CD2A8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD2A0u, 0x2CD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2A8u;
label_2cd2a8:
    // 0x2cd2a8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2cd2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2ac: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2CD2ACu;
    {
        const bool branch_taken_0x2cd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2ac) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD2B4u;
label_2cd2b4:
    // 0x2cd2b4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CD2B4u;
    {
        const bool branch_taken_0x2cd2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2b4) {
            ctx->pc = 0x2CD350u;
            goto label_2cd350;
        }
    }
    ctx->pc = 0x2CD2BCu;
    // 0x2cd2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2c0: 0xc048094  jal         func_120250
    ctx->pc = 0x2CD2C0u;
    SET_GPR_U32(ctx, 31, 0x2CD2C8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2CD2C0u, 0x2CD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2C8u;
label_2cd2c8:
    // 0x2cd2c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2cc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cd2d0: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x2cd2d4: 0x2786a4f4  addiu       $a2, $gp, -0x5B0C
    ctx->pc = 0x2cd2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cd2d8: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2CD2D8u;
    SET_GPR_U32(ctx, 31, 0x2CD2E0u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2CD2D8u, 0x2CD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E0u;
label_2cd2e0:
    // 0x2cd2e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cd2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2e8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2CD2E8u;
    SET_GPR_U32(ctx, 31, 0x2CD2F0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2CD2E8u, 0x2CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2F0u;
label_2cd2f0:
    // 0x2cd2f0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD2F0u;
    {
        const bool branch_taken_0x2cd2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2f0) {
            ctx->pc = 0x2CD338u;
            goto label_2cd338;
        }
    }
    ctx->pc = 0x2CD2F8u;
    // 0x2cd2f8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd2fc: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2cd2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cd300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd304: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2cd304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd308: 0xc0b3384  jal         func_2CCE10
    ctx->pc = 0x2CD308u;
    SET_GPR_U32(ctx, 31, 0x2CD310u);
    ctx->pc = 0x2CCE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE10u, 0x2CD308u, 0x2CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD310u;
label_2cd310:
    // 0x2cd310: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CD310u;
    {
        const bool branch_taken_0x2cd310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd310) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD318u;
    // 0x2cd318: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cd318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd31c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd320: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd324: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD324u;
    SET_GPR_U32(ctx, 31, 0x2CD32Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD324u, 0x2CD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD32Cu;
label_2cd32c:
    // 0x2cd32c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2cd32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd330: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2CD330u;
    {
        const bool branch_taken_0x2cd330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd330) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD338u;
label_2cd338:
    // 0x2cd338: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd33c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cd33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd340: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2CD340u;
    SET_GPR_U32(ctx, 31, 0x2CD348u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2CD340u, 0x2CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD348u;
label_2cd348:
    // 0x2cd348: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD348u;
    {
        const bool branch_taken_0x2cd348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd348) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD350u;
label_2cd350:
    // 0x2cd350: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd354: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd358: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cd358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd35c: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2cd35cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd360: 0xc0b3384  jal         func_2CCE10
    ctx->pc = 0x2CD360u;
    SET_GPR_U32(ctx, 31, 0x2CD368u);
    ctx->pc = 0x2CCE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE10u, 0x2CD360u, 0x2CD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD368u;
label_2cd368:
    // 0x2cd368: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD368u;
    {
        const bool branch_taken_0x2cd368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd368) {
            ctx->pc = 0x2CD390u;
            goto label_2cd390;
        }
    }
    ctx->pc = 0x2CD370u;
    // 0x2cd370: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cd370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd374: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd378: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd37c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD37Cu;
    SET_GPR_U32(ctx, 31, 0x2CD384u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD37Cu, 0x2CD384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD384u;
label_2cd384:
    // 0x2cd384: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2cd384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd388: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2CD388u;
    {
        const bool branch_taken_0x2cd388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd388) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD390u;
label_2cd390:
    // 0x2cd390: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd394: 0xc042514  jal         func_109450
    ctx->pc = 0x2CD394u;
    SET_GPR_U32(ctx, 31, 0x2CD39Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x2CD394u, 0x2CD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD39Cu;
label_2cd39c:
    // 0x2cd39c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CD39Cu;
    {
        const bool branch_taken_0x2cd39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd39c) {
            ctx->pc = 0x2CD414u;
            goto label_2cd414;
        }
    }
    ctx->pc = 0x2CD3A4u;
    // 0x2cd3a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2cd3a8: 0x2785a4f4  addiu       $a1, $gp, -0x5B0C
    ctx->pc = 0x2cd3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cd3ac: 0xc040304  jal         func_100C10
    ctx->pc = 0x2CD3ACu;
    SET_GPR_U32(ctx, 31, 0x2CD3B4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2CD3ACu, 0x2CD3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3B4u;
label_2cd3b4:
    // 0x2cd3b4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2cd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd3b8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD3B8u;
    SET_GPR_U32(ctx, 31, 0x2CD3C0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD3B8u, 0x2CD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3C0u;
label_2cd3c0:
    // 0x2cd3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3c4: 0xc097070  jal         func_25C1C0
    ctx->pc = 0x2CD3C4u;
    SET_GPR_U32(ctx, 31, 0x2CD3CCu);
    ctx->pc = 0x25C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1C0u, 0x2CD3C4u, 0x2CD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3CCu;
label_2cd3cc:
    // 0x2cd3cc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd3d0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd3d4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x2cd3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2cd3d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cd3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3dc: 0xc0b352c  jal         func_2CD4B0
    ctx->pc = 0x2CD3DCu;
    SET_GPR_U32(ctx, 31, 0x2CD3E4u);
    ctx->pc = 0x2CD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4B0u, 0x2CD3DCu, 0x2CD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3E4u;
label_2cd3e4:
    // 0x2cd3e4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2cd3e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cd3e8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2cd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2cd3ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd3f0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD3F0u;
    SET_GPR_U32(ctx, 31, 0x2CD3F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD3F0u, 0x2CD3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3F8u;
label_2cd3f8:
    // 0x2cd3f8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd3fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd400: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD400u;
    SET_GPR_U32(ctx, 31, 0x2CD408u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD400u, 0x2CD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD408u;
label_2cd408:
    // 0x2cd408: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2cd408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd40c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CD40Cu;
    {
        const bool branch_taken_0x2cd40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd40c) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD414u;
label_2cd414:
    // 0x2cd414: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd418: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd41c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x2cd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cd420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd424: 0xc0b352c  jal         func_2CD4B0
    ctx->pc = 0x2CD424u;
    SET_GPR_U32(ctx, 31, 0x2CD42Cu);
    ctx->pc = 0x2CD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4B0u, 0x2CD424u, 0x2CD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD42Cu;
label_2cd42c:
    // 0x2cd42c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2cd42cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cd430: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2cd430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2cd434: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd438: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CD438u;
    SET_GPR_U32(ctx, 31, 0x2CD440u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CD438u, 0x2CD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD440u;
label_2cd440:
    // 0x2cd440: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2cd440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cd444:
    // 0x2cd444: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2cd444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cd448: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2cd448u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cd44c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2cd44cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cd450: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cd450u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cd454: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cd454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd458: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cd458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd45c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cd45cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd460: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cd460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cd464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd468: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd46c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cd46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd470: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2cd474: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD47Cu;
    // 0x2cd47c: 0x0  nop
    ctx->pc = 0x2cd47cu;
    // NOP
    ctx->pc = 0x2cd480u;
}
