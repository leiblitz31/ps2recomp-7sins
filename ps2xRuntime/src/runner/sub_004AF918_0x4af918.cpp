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

// Function: sub_004AF918
// Address: 0x4af918 - 0x4af988
void sub_004AF918_0x4af918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF918_0x4af918");
#endif

    switch (ctx->pc) {
        case 0x4af940u: goto label_4af940;
        case 0x4af960u: goto label_4af960;
        case 0x4af974u: goto label_4af974;
        default: break;
    }

    ctx->pc = 0x4af918u;

    // 0x4af918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4af918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4af91c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4af91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4af920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4af920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4af924: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4af924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4af928: 0x2450e9c0  addiu       $s0, $v0, -0x1640
    ctx->pc = 0x4af928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x4af92c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af930: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4af930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4af934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af938: 0xc126852  jal         func_49A148
    ctx->pc = 0x4AF938u;
    SET_GPR_U32(ctx, 31, 0x4AF940u);
    ctx->pc = 0x4AF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF938u;
    // 0x4af93c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4AF938u, 0x4AF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF940u;
label_4af940:
    // 0x4af940: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4af940u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4af944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4af944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4af948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af954: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4af954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af958: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AF958u;
    SET_GPR_U32(ctx, 31, 0x4AF960u);
    ctx->pc = 0x4AF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF958u;
    // 0x4af95c: 0x3529080e  ori         $t1, $t1, 0x80E (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2062);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AF958u, 0x4AF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF960u;
label_4af960:
    // 0x4af960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4af960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af964: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF964u;
    {
        const bool branch_taken_0x4af964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF964u;
        // 0x4af968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af964) {
            ctx->pc = 0x4AF978u;
            goto label_4af978;
        }
    }
    ctx->pc = 0x4AF96Cu;
    // 0x4af96c: 0xc12bc02  jal         func_4AF008
    ctx->pc = 0x4AF96Cu;
    SET_GPR_U32(ctx, 31, 0x4AF974u);
    ctx->pc = 0x4AF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF96Cu;
    // 0x4af970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF008u, 0x4AF96Cu, 0x4AF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF974u;
label_4af974:
    // 0x4af974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af978:
    // 0x4af978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4af978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af980: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF980u;
        // 0x4af984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF988u;
}
