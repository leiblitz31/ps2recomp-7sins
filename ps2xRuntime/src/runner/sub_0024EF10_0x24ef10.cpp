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

// Function: sub_0024EF10
// Address: 0x24ef10 - 0x24f1a0
void sub_0024EF10_0x24ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EF10_0x24ef10");
#endif

    switch (ctx->pc) {
        case 0x24ef4cu: goto label_24ef4c;
        case 0x24ef60u: goto label_24ef60;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef84u: goto label_24ef84;
        case 0x24ef90u: goto label_24ef90;
        case 0x24efa0u: goto label_24efa0;
        case 0x24efb8u: goto label_24efb8;
        case 0x24efccu: goto label_24efcc;
        case 0x24efdcu: goto label_24efdc;
        case 0x24eff0u: goto label_24eff0;
        case 0x24f008u: goto label_24f008;
        case 0x24f028u: goto label_24f028;
        case 0x24f040u: goto label_24f040;
        case 0x24f050u: goto label_24f050;
        case 0x24f078u: goto label_24f078;
        case 0x24f08cu: goto label_24f08c;
        case 0x24f0a0u: goto label_24f0a0;
        case 0x24f0acu: goto label_24f0ac;
        case 0x24f0bcu: goto label_24f0bc;
        case 0x24f0ccu: goto label_24f0cc;
        case 0x24f0dcu: goto label_24f0dc;
        case 0x24f0f4u: goto label_24f0f4;
        case 0x24f108u: goto label_24f108;
        case 0x24f118u: goto label_24f118;
        case 0x24f140u: goto label_24f140;
        case 0x24f154u: goto label_24f154;
        case 0x24f170u: goto label_24f170;
        default: break;
    }

    ctx->pc = 0x24ef10u;

    // 0x24ef10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x24ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x24ef14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24ef18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24ef1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24ef20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24ef24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ef28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ef2c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x24ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x24ef30: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x24ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x24ef34: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x24ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x24ef38: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24ef3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x24ef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ef40: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24ef44: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x24EF44u;
    SET_GPR_U32(ctx, 31, 0x24EF4Cu);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x24EF44u, 0x24EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF4Cu;
label_24ef4c:
    // 0x24ef4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24ef4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ef50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ef54: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24ef54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24ef58: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x24EF58u;
    {
        const bool branch_taken_0x24ef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ef58) {
            ctx->pc = 0x24F010u;
            goto label_24f010;
        }
    }
    ctx->pc = 0x24EF60u;
label_24ef60:
    // 0x24ef60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x24ef60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef64: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x24ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x24ef68: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x24ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24ef6c: 0xc053cbc  jal         func_14F2F0
    ctx->pc = 0x24EF6Cu;
    SET_GPR_U32(ctx, 31, 0x24EF74u);
    ctx->pc = 0x14F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2F0u, 0x24EF6Cu, 0x24EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF74u;
label_24ef74:
    // 0x24ef74: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24ef78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24ef78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef7c: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24EF7Cu;
    SET_GPR_U32(ctx, 31, 0x24EF84u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24EF7Cu, 0x24EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF84u;
label_24ef84:
    // 0x24ef84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ef84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef88: 0xc053cac  jal         func_14F2B0
    ctx->pc = 0x24EF88u;
    SET_GPR_U32(ctx, 31, 0x24EF90u);
    ctx->pc = 0x14F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2B0u, 0x24EF88u, 0x24EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EF90u;
label_24ef90:
    // 0x24ef90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24ef94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24ef94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ef98: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24EF98u;
    SET_GPR_U32(ctx, 31, 0x24EFA0u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24EF98u, 0x24EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFA0u;
label_24efa0:
    // 0x24efa0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24efa4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x24efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x24efa8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x24efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24efac: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x24efacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24efb0: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x24EFB0u;
    SET_GPR_U32(ctx, 31, 0x24EFB8u);
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x24EFB0u, 0x24EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFB8u;
label_24efb8:
    // 0x24efb8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24efbc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24efc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24efc4: 0xc094d94  jal         func_253650
    ctx->pc = 0x24EFC4u;
    SET_GPR_U32(ctx, 31, 0x24EFCCu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24EFC4u, 0x24EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFCCu;
label_24efcc:
    // 0x24efcc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24efd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24efd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24efd4: 0xc094d94  jal         func_253650
    ctx->pc = 0x24EFD4u;
    SET_GPR_U32(ctx, 31, 0x24EFDCu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24EFD4u, 0x24EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFDCu;
label_24efdc:
    // 0x24efdc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24EFDCu;
    {
        const bool branch_taken_0x24efdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24efdc) {
            ctx->pc = 0x24EFFCu;
            goto label_24effc;
        }
    }
    ctx->pc = 0x24EFE4u;
    // 0x24efe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24efe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24efe8: 0xc053c68  jal         func_14F1A0
    ctx->pc = 0x24EFE8u;
    SET_GPR_U32(ctx, 31, 0x24EFF0u);
    ctx->pc = 0x14F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A0u, 0x24EFE8u, 0x24EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EFF0u;
label_24eff0:
    // 0x24eff0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24eff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eff4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24EFF4u;
    {
        const bool branch_taken_0x24eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eff4) {
            ctx->pc = 0x24F00Cu;
            goto label_24f00c;
        }
    }
    ctx->pc = 0x24EFFCu;
label_24effc:
    // 0x24effc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f000: 0xc053c60  jal         func_14F180
    ctx->pc = 0x24F000u;
    SET_GPR_U32(ctx, 31, 0x24F008u);
    ctx->pc = 0x14F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F180u, 0x24F000u, 0x24F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F008u;
label_24f008:
    // 0x24f008: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24f008u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f00c:
    // 0x24f00c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x24f00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f010:
    // 0x24f010: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x24F010u;
    {
        const bool branch_taken_0x24f010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f010) {
            ctx->pc = 0x24EF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ef60;
        }
    }
    ctx->pc = 0x24F018u;
    // 0x24f018: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x24f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x24f01c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24f01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f020: 0xc093cac  jal         func_24F2B0
    ctx->pc = 0x24F020u;
    SET_GPR_U32(ctx, 31, 0x24F028u);
    ctx->pc = 0x24F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2B0u, 0x24F020u, 0x24F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F028u;
label_24f028:
    // 0x24f028: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x24F028u;
    {
        const bool branch_taken_0x24f028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f028) {
            ctx->pc = 0x24F0A0u;
            goto label_24f0a0;
        }
    }
    ctx->pc = 0x24F030u;
    // 0x24f030: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x24f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x24f034: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x24f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24f038: 0xc093c9c  jal         func_24F270
    ctx->pc = 0x24F038u;
    SET_GPR_U32(ctx, 31, 0x24F040u);
    ctx->pc = 0x24F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F270u, 0x24F038u, 0x24F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F040u;
label_24f040:
    // 0x24f040: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x24f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x24f044: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x24f044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x24f048: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x24F048u;
    SET_GPR_U32(ctx, 31, 0x24F050u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x24F048u, 0x24F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F050u;
label_24f050:
    // 0x24f050: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F050u;
    {
        const bool branch_taken_0x24f050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f050) {
            ctx->pc = 0x24F094u;
            goto label_24f094;
        }
    }
    ctx->pc = 0x24F058u;
    // 0x24f058: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24f05c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x24f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24f060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24f060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f064: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24f064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f068: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x24f068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24f06c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f070: 0xc093e3c  jal         func_24F8F0
    ctx->pc = 0x24F070u;
    SET_GPR_U32(ctx, 31, 0x24F078u);
    ctx->pc = 0x24F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F8F0u, 0x24F070u, 0x24F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F078u;
label_24f078:
    // 0x24f078: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x24f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f07c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x24f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24f080: 0x27869e90  addiu       $a2, $gp, -0x6170
    ctx->pc = 0x24f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942352));
    // 0x24f084: 0xc093c88  jal         func_24F220
    ctx->pc = 0x24F084u;
    SET_GPR_U32(ctx, 31, 0x24F08Cu);
    ctx->pc = 0x24F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F220u, 0x24F084u, 0x24F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F08Cu;
label_24f08c:
    // 0x24f08c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24F08Cu;
    {
        const bool branch_taken_0x24f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f08c) {
            ctx->pc = 0x24F170u;
            goto label_24f170;
        }
    }
    ctx->pc = 0x24F094u;
label_24f094:
    // 0x24f094: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x24f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x24f098: 0xc093c78  jal         func_24F1E0
    ctx->pc = 0x24F098u;
    SET_GPR_U32(ctx, 31, 0x24F0A0u);
    ctx->pc = 0x24F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F1E0u, 0x24F098u, 0x24F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0A0u;
label_24f0a0:
    // 0x24f0a0: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x24f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x24f0a4: 0xc093c68  jal         func_24F1A0
    ctx->pc = 0x24F0A4u;
    SET_GPR_U32(ctx, 31, 0x24F0ACu);
    ctx->pc = 0x24F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F1A0u, 0x24F0A4u, 0x24F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0ACu;
label_24f0ac:
    // 0x24f0ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f0b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0b4: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24F0B4u;
    SET_GPR_U32(ctx, 31, 0x24F0BCu);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24F0B4u, 0x24F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0BCu;
label_24f0bc:
    // 0x24f0bc: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x24f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x24f0c0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24f0c4: 0xc053cbc  jal         func_14F2F0
    ctx->pc = 0x24F0C4u;
    SET_GPR_U32(ctx, 31, 0x24F0CCu);
    ctx->pc = 0x14F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2F0u, 0x24F0C4u, 0x24F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0CCu;
label_24f0cc:
    // 0x24f0cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f0d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0d4: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24F0D4u;
    SET_GPR_U32(ctx, 31, 0x24F0DCu);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24F0D4u, 0x24F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0DCu;
label_24f0dc:
    // 0x24f0dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x24f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24f0e0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x24f0e4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x24f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f0e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x24f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f0ec: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x24F0ECu;
    SET_GPR_U32(ctx, 31, 0x24F0F4u);
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x24F0ECu, 0x24F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F0F4u;
label_24f0f4:
    // 0x24f0f4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x24f0f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24f0f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f0fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f100: 0xc094d94  jal         func_253650
    ctx->pc = 0x24F100u;
    SET_GPR_U32(ctx, 31, 0x24F108u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24F100u, 0x24F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F108u;
label_24f108:
    // 0x24f108: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f10c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f110: 0xc094d94  jal         func_253650
    ctx->pc = 0x24F110u;
    SET_GPR_U32(ctx, 31, 0x24F118u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24F110u, 0x24F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F118u;
label_24f118:
    // 0x24f118: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F118u;
    {
        const bool branch_taken_0x24f118 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f118) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F120u;
    // 0x24f120: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x24f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x24f124: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x24f124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24f128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24f128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f12c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24f12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f130: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x24f130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x24f134: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f138: 0xc093e3c  jal         func_24F8F0
    ctx->pc = 0x24F138u;
    SET_GPR_U32(ctx, 31, 0x24F140u);
    ctx->pc = 0x24F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F8F0u, 0x24F138u, 0x24F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F140u;
label_24f140:
    // 0x24f140: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x24f140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f144: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x24f144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x24f148: 0x27869e94  addiu       $a2, $gp, -0x616C
    ctx->pc = 0x24f148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942356));
    // 0x24f14c: 0xc093c88  jal         func_24F220
    ctx->pc = 0x24F14Cu;
    SET_GPR_U32(ctx, 31, 0x24F154u);
    ctx->pc = 0x24F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F220u, 0x24F14Cu, 0x24F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F154u;
label_24f154:
    // 0x24f154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24F154u;
    {
        const bool branch_taken_0x24f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f154) {
            ctx->pc = 0x24F170u;
            goto label_24f170;
        }
    }
    ctx->pc = 0x24F15Cu;
label_24f15c:
    // 0x24f15c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f160: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x24f164: 0x27869e98  addiu       $a2, $gp, -0x6168
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942360));
    // 0x24f168: 0xc093c88  jal         func_24F220
    ctx->pc = 0x24F168u;
    SET_GPR_U32(ctx, 31, 0x24F170u);
    ctx->pc = 0x24F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F220u, 0x24F168u, 0x24F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F170u;
label_24f170:
    // 0x24f170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24f174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24f178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24f17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24f180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f188: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x24f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24f18c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F194u;
    // 0x24f194: 0x0  nop
    ctx->pc = 0x24f194u;
    // NOP
    // 0x24f198: 0x0  nop
    ctx->pc = 0x24f198u;
    // NOP
    // 0x24f19c: 0x0  nop
    ctx->pc = 0x24f19cu;
    // NOP
    ctx->pc = 0x24f1a0u;
}
