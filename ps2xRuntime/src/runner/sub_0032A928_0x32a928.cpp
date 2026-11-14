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

// Function: sub_0032A928
// Address: 0x32a928 - 0x32a978
void sub_0032A928_0x32a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A928_0x32a928");
#endif

    switch (ctx->pc) {
        case 0x32a954u: goto label_32a954;
        case 0x32a960u: goto label_32a960;
        default: break;
    }

    ctx->pc = 0x32a928u;

    // 0x32a928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a92c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32a930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32a934: 0x8c432374  lw          $v1, 0x2374($v0)
    ctx->pc = 0x32a934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2374u));
    // 0x32a938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a940: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A940u;
    {
        const bool branch_taken_0x32a940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A940u;
        // 0x32a944: 0x24422374  addiu       $v0, $v0, 0x2374 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9076));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a940) {
            ctx->pc = 0x32A954u;
            goto label_32a954;
        }
    }
    ctx->pc = 0x32A948u;
    // 0x32a948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a94c: 0xc0cab8e  jal         func_32AE38
    ctx->pc = 0x32A94Cu;
    SET_GPR_U32(ctx, 31, 0x32A954u);
    ctx->pc = 0x32A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A94Cu;
    // 0x32a950: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE38u, 0x32A94Cu, 0x32A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A954u;
label_32a954:
    // 0x32a954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a958: 0xc0caab6  jal         func_32AAD8
    ctx->pc = 0x32A958u;
    SET_GPR_U32(ctx, 31, 0x32A960u);
    ctx->pc = 0x32A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A958u;
    // 0x32a95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AAD8u, 0x32A958u, 0x32A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A960u;
label_32a960:
    // 0x32a960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a968: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32a968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a96c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A96Cu;
        // 0x32a970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A974u;
    // 0x32a974: 0x0  nop
    ctx->pc = 0x32a974u;
    // NOP
    ctx->pc = 0x32a978u;
}
