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

// Function: sub_002E8F50
// Address: 0x2e8f50 - 0x2e8fb0
void sub_002E8F50_0x2e8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F50_0x2e8f50");
#endif

    switch (ctx->pc) {
        case 0x2e8f9cu: goto label_2e8f9c;
        default: break;
    }

    ctx->pc = 0x2e8f50u;

    // 0x2e8f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f60: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E8F60u;
    {
        const bool branch_taken_0x2e8f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F60u;
        // 0x2e8f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f60) {
            ctx->pc = 0x2E8FA0u;
            goto label_2e8fa0;
        }
    }
    ctx->pc = 0x2E8F68u;
    // 0x2e8f68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e8f6c: 0x24426a90  addiu       $v0, $v0, 0x6A90
    ctx->pc = 0x2e8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27280));
    // 0x2e8f70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8F70u;
    {
        const bool branch_taken_0x2e8f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F70u;
        // 0x2e8f74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f70) {
            ctx->pc = 0x2E8F84u;
            goto label_2e8f84;
        }
    }
    ctx->pc = 0x2E8F78u;
    // 0x2e8f78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e8f7c: 0x24426a70  addiu       $v0, $v0, 0x6A70
    ctx->pc = 0x2e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27248));
    // 0x2e8f80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2e8f84:
    // 0x2e8f84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2e8f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2e8f88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e8f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e8f8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8F8Cu;
    {
        const bool branch_taken_0x2e8f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F8Cu;
        // 0x2e8f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f8c) {
            ctx->pc = 0x2E8F9Cu;
            goto label_2e8f9c;
        }
    }
    ctx->pc = 0x2E8F94u;
    // 0x2e8f94: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E8F94u;
    SET_GPR_U32(ctx, 31, 0x2E8F9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E8F94u, 0x2E8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F9Cu;
label_2e8f9c:
    // 0x2e8f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8fa0:
    // 0x2e8fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FA8u;
        // 0x2e8fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8FB0u;
}
