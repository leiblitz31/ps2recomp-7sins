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

// Function: sub_003B96E8
// Address: 0x3b96e8 - 0x3b97f0
void sub_003B96E8_0x3b96e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B96E8_0x3b96e8");
#endif

    switch (ctx->pc) {
        case 0x3b9724u: goto label_3b9724;
        case 0x3b9774u: goto label_3b9774;
        case 0x3b979cu: goto label_3b979c;
        case 0x3b97b8u: goto label_3b97b8;
        case 0x3b97ccu: goto label_3b97cc;
        default: break;
    }

    ctx->pc = 0x3b96e8u;

    // 0x3b96e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b96e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b96ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3b96f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3b96f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3b96f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b96f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b96fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b96fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9700: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b9700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3b9704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b970c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b970cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9710: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b9714: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3b9714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x3b9718: 0x34a501a4  ori         $a1, $a1, 0x1A4
    ctx->pc = 0x3b9718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    // 0x3b971c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B971Cu;
    SET_GPR_U32(ctx, 31, 0x3B9724u);
    ctx->pc = 0x3B9720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B971Cu;
    // 0x3b9720: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B971Cu, 0x3B9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9724u;
label_3b9724:
    // 0x3b9724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b972c: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x3b972cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x3b9730: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b9730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9734: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x3b9734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x3b9738: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3b9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3b973c: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x3b973cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x3b9740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9744: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b9744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9748: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3b9748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x3b974c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b974cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b9750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9754: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b9754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9758: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9758u;
        // 0x3b975c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9760u;
    // 0x3b9760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9768: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x3b9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x3b976c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B976Cu;
    SET_GPR_U32(ctx, 31, 0x3B9774u);
    ctx->pc = 0x3B9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B976Cu;
    // 0x3b9770: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B976Cu, 0x3B9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9774u;
label_3b9774:
    // 0x3b9774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9778: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9778u;
        // 0x3b977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9780u;
    // 0x3b9780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b9788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b978c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b9794: 0xc0ee5fc  jal         func_3B97F0
    ctx->pc = 0x3B9794u;
    SET_GPR_U32(ctx, 31, 0x3B979Cu);
    ctx->pc = 0x3B9798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9794u;
    // 0x3b9798: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B97F0u, 0x3B9794u, 0x3B979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B979Cu;
label_3b979c:
    // 0x3b979c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3b979cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3b97a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b97a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b97a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b97a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b97a8: 0x240501a4  addiu       $a1, $zero, 0x1A4
    ctx->pc = 0x3b97a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x3b97ac: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3b97acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3b97b0: 0xc103404  jal         func_40D010
    ctx->pc = 0x3B97B0u;
    SET_GPR_U32(ctx, 31, 0x3B97B8u);
    ctx->pc = 0x3B97B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B97B0u;
    // 0x3b97b4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3B97B0u, 0x3B97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B97B8u;
label_3b97b8:
    // 0x3b97b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B97B8u;
    {
        const bool branch_taken_0x3b97b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97B8u;
        // 0x3b97bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97b8) {
            ctx->pc = 0x3B97D8u;
            goto label_3b97d8;
        }
    }
    ctx->pc = 0x3B97C0u;
    // 0x3b97c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b97c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b97c4: 0xc0ee3a0  jal         func_3B8E80
    ctx->pc = 0x3B97C4u;
    SET_GPR_U32(ctx, 31, 0x3B97CCu);
    ctx->pc = 0x3B97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B97C4u;
    // 0x3b97c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E80u, 0x3B97C4u, 0x3B97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B97CCu;
label_3b97cc:
    // 0x3b97cc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b97ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3b97d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B97D0u;
    {
        const bool branch_taken_0x3b97d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97D0u;
        // 0x3b97d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97d0) {
            ctx->pc = 0x3B97DCu;
            goto label_3b97dc;
        }
    }
    ctx->pc = 0x3B97D8u;
label_3b97d8:
    // 0x3b97d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b97d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b97dc:
    // 0x3b97dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b97dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b97e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b97e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b97e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b97e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b97e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B97E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97E8u;
        // 0x3b97ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B97E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B97F0u;
}
