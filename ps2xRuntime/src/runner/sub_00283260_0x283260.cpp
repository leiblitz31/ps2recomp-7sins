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

// Function: sub_00283260
// Address: 0x283260 - 0x283470
void sub_00283260_0x283260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283260_0x283260");
#endif

    switch (ctx->pc) {
        case 0x28329cu: goto label_28329c;
        case 0x2832b0u: goto label_2832b0;
        case 0x2832c4u: goto label_2832c4;
        case 0x2832d4u: goto label_2832d4;
        case 0x2832ecu: goto label_2832ec;
        case 0x283304u: goto label_283304;
        case 0x28331cu: goto label_28331c;
        case 0x28333cu: goto label_28333c;
        case 0x283354u: goto label_283354;
        case 0x283364u: goto label_283364;
        case 0x28338cu: goto label_28338c;
        case 0x2833a0u: goto label_2833a0;
        case 0x2833b4u: goto label_2833b4;
        case 0x2833c0u: goto label_2833c0;
        case 0x2833d4u: goto label_2833d4;
        case 0x2833ecu: goto label_2833ec;
        case 0x283414u: goto label_283414;
        case 0x283428u: goto label_283428;
        case 0x283444u: goto label_283444;
        default: break;
    }

    ctx->pc = 0x283260u;

    // 0x283260: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x283260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x283264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x283264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x283268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x283268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28326c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28327c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x28327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x283280: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x283280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x283284: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x283284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x283288: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x283288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28328c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28328cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283290: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x283290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283294: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x283294u;
    SET_GPR_U32(ctx, 31, 0x28329Cu);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x283294u, 0x28329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28329Cu;
label_28329c:
    // 0x28329c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28329cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2832a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2832a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2832a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2832A8u;
    {
        const bool branch_taken_0x2832a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2832a8) {
            ctx->pc = 0x283324u;
            goto label_283324;
        }
    }
    ctx->pc = 0x2832B0u;
label_2832b0:
    // 0x2832b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2832b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832b4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2832b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2832b8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2832b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2832bc: 0xc0a040c  jal         func_281030
    ctx->pc = 0x2832BCu;
    SET_GPR_U32(ctx, 31, 0x2832C4u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x2832BCu, 0x2832C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832C4u;
label_2832c4:
    // 0x2832c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2832c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2832c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832cc: 0xc0a03fc  jal         func_280FF0
    ctx->pc = 0x2832CCu;
    SET_GPR_U32(ctx, 31, 0x2832D4u);
    ctx->pc = 0x280FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FF0u, 0x2832CCu, 0x2832D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832D4u;
label_2832d4:
    // 0x2832d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2832d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2832d8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2832d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2832dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2832dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e4: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x2832E4u;
    SET_GPR_U32(ctx, 31, 0x2832ECu);
    ctx->pc = 0x280FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FC0u, 0x2832E4u, 0x2832ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832ECu;
label_2832ec:
    // 0x2832ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2832ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2832f0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2832F0u;
    {
        const bool branch_taken_0x2832f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2832f0) {
            ctx->pc = 0x283310u;
            goto label_283310;
        }
    }
    ctx->pc = 0x2832F8u;
    // 0x2832f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2832f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832fc: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x2832FCu;
    SET_GPR_U32(ctx, 31, 0x283304u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x2832FCu, 0x283304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283304u;
label_283304:
    // 0x283304: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x283304u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283308u;
    {
        const bool branch_taken_0x283308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283308) {
            ctx->pc = 0x283320u;
            goto label_283320;
        }
    }
    ctx->pc = 0x283310u;
label_283310:
    // 0x283310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283314: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x283314u;
    SET_GPR_U32(ctx, 31, 0x28331Cu);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x283314u, 0x28331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28331Cu;
label_28331c:
    // 0x28331c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_283320:
    // 0x283320: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x283320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283324:
    // 0x283324: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x283324u;
    {
        const bool branch_taken_0x283324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x283324) {
            ctx->pc = 0x2832B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2832b0;
        }
    }
    ctx->pc = 0x28332Cu;
    // 0x28332c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x283330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x283330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283334: 0xc0a0d6c  jal         func_2835B0
    ctx->pc = 0x283334u;
    SET_GPR_U32(ctx, 31, 0x28333Cu);
    ctx->pc = 0x2835B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2835B0u, 0x283334u, 0x28333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28333Cu;
label_28333c:
    // 0x28333c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x28333Cu;
    {
        const bool branch_taken_0x28333c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28333c) {
            ctx->pc = 0x2833B4u;
            goto label_2833b4;
        }
    }
    ctx->pc = 0x283344u;
    // 0x283344: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x283348: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x283348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28334c: 0xc0a0d5c  jal         func_283570
    ctx->pc = 0x28334Cu;
    SET_GPR_U32(ctx, 31, 0x283354u);
    ctx->pc = 0x283570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283570u, 0x28334Cu, 0x283354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283354u;
label_283354:
    // 0x283354: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x283354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x283358: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x283358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28335c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28335Cu;
    SET_GPR_U32(ctx, 31, 0x283364u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28335Cu, 0x283364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283364u;
label_283364:
    // 0x283364: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x283364u;
    {
        const bool branch_taken_0x283364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283364) {
            ctx->pc = 0x2833A8u;
            goto label_2833a8;
        }
    }
    ctx->pc = 0x28336Cu;
    // 0x28336c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x283370: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x283370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x283374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283378: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x283378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28337c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28337cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x283380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283384: 0xc0a0f34  jal         func_283CD0
    ctx->pc = 0x283384u;
    SET_GPR_U32(ctx, 31, 0x28338Cu);
    ctx->pc = 0x283CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283CD0u, 0x283384u, 0x28338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28338Cu;
label_28338c:
    // 0x28338c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283390: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x283390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x283394: 0x2786a24c  addiu       $a2, $gp, -0x5DB4
    ctx->pc = 0x283394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943308));
    // 0x283398: 0xc0a0d3c  jal         func_2834F0
    ctx->pc = 0x283398u;
    SET_GPR_U32(ctx, 31, 0x2833A0u);
    ctx->pc = 0x2834F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834F0u, 0x283398u, 0x2833A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833A0u;
label_2833a0:
    // 0x2833a0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2833A0u;
    {
        const bool branch_taken_0x2833a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833a0) {
            ctx->pc = 0x283444u;
            goto label_283444;
        }
    }
    ctx->pc = 0x2833A8u;
label_2833a8:
    // 0x2833a8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2833a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2833ac: 0xc0a0d2c  jal         func_2834B0
    ctx->pc = 0x2833ACu;
    SET_GPR_U32(ctx, 31, 0x2833B4u);
    ctx->pc = 0x2834B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834B0u, 0x2833ACu, 0x2833B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833B4u;
label_2833b4:
    // 0x2833b4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2833b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2833b8: 0xc0a0d1c  jal         func_283470
    ctx->pc = 0x2833B8u;
    SET_GPR_U32(ctx, 31, 0x2833C0u);
    ctx->pc = 0x283470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283470u, 0x2833B8u, 0x2833C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833C0u;
label_2833c0:
    // 0x2833c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2833c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833c4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2833c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2833c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2833c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2833cc: 0xc0a040c  jal         func_281030
    ctx->pc = 0x2833CCu;
    SET_GPR_U32(ctx, 31, 0x2833D4u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x2833CCu, 0x2833D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833D4u;
label_2833d4:
    // 0x2833d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2833d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2833d8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2833d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2833dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2833dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2833e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833e4: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x2833E4u;
    SET_GPR_U32(ctx, 31, 0x2833ECu);
    ctx->pc = 0x280FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FC0u, 0x2833E4u, 0x2833ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833ECu;
label_2833ec:
    // 0x2833ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283430u;
            goto label_283430;
        }
    }
    ctx->pc = 0x2833F4u;
    // 0x2833f4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2833f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2833f8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2833f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2833fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2833fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x283400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283404: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x283404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x283408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28340c: 0xc0a0f34  jal         func_283CD0
    ctx->pc = 0x28340Cu;
    SET_GPR_U32(ctx, 31, 0x283414u);
    ctx->pc = 0x283CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283CD0u, 0x28340Cu, 0x283414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283414u;
label_283414:
    // 0x283414: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283418: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x283418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28341c: 0x2786a250  addiu       $a2, $gp, -0x5DB0
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943312));
    // 0x283420: 0xc0a0d3c  jal         func_2834F0
    ctx->pc = 0x283420u;
    SET_GPR_U32(ctx, 31, 0x283428u);
    ctx->pc = 0x2834F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834F0u, 0x283420u, 0x283428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283428u;
label_283428:
    // 0x283428: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283428u;
    {
        const bool branch_taken_0x283428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283428) {
            ctx->pc = 0x283444u;
            goto label_283444;
        }
    }
    ctx->pc = 0x283430u;
label_283430:
    // 0x283430: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283434: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x283434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x283438: 0x2786a254  addiu       $a2, $gp, -0x5DAC
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943316));
    // 0x28343c: 0xc0a0d3c  jal         func_2834F0
    ctx->pc = 0x28343Cu;
    SET_GPR_U32(ctx, 31, 0x283444u);
    ctx->pc = 0x2834F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834F0u, 0x28343Cu, 0x283444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283444u;
label_283444:
    // 0x283444: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x283444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283448: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x283448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28344c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28344cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28345c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28345cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x283460: 0x3e00008  jr          $ra
    ctx->pc = 0x283460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283468u;
    // 0x283468: 0x0  nop
    ctx->pc = 0x283468u;
    // NOP
    // 0x28346c: 0x0  nop
    ctx->pc = 0x28346cu;
    // NOP
    ctx->pc = 0x283470u;
}
