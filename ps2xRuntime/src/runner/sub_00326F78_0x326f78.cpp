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

// Function: sub_00326F78
// Address: 0x326f78 - 0x326fd0
void sub_00326F78_0x326f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F78_0x326f78");
#endif

    switch (ctx->pc) {
        case 0x326f8cu: goto label_326f8c;
        case 0x326fa4u: goto label_326fa4;
        case 0x326fb4u: goto label_326fb4;
        default: break;
    }

    ctx->pc = 0x326f78u;

    // 0x326f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326f7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326f84: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x326F84u;
    SET_GPR_U32(ctx, 31, 0x326F8Cu);
    ctx->pc = 0x326F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F84u;
    // 0x326f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x326F84u, 0x326F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F8Cu;
label_326f8c:
    // 0x326f8c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x326f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326f90: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x326f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x326f94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x326F94u;
    {
        const bool branch_taken_0x326f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F94u;
        // 0x326f98: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f94) {
            ctx->pc = 0x326FACu;
            goto label_326fac;
        }
    }
    ctx->pc = 0x326F9Cu;
    // 0x326f9c: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x326F9Cu;
    SET_GPR_U32(ctx, 31, 0x326FA4u);
    ctx->pc = 0x326FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F9Cu;
    // 0x326fa0: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x326F9Cu, 0x326FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FA4u;
label_326fa4:
    // 0x326fa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326FA4u;
    {
        const bool branch_taken_0x326fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA4u;
        // 0x326fa8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fa4) {
            ctx->pc = 0x326FB8u;
            goto label_326fb8;
        }
    }
    ctx->pc = 0x326FACu;
label_326fac:
    // 0x326fac: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x326FACu;
    SET_GPR_U32(ctx, 31, 0x326FB4u);
    ctx->pc = 0x326FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FACu;
    // 0x326fb0: 0x3484100f  ori         $a0, $a0, 0x100F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4111);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x326FACu, 0x326FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FB4u;
label_326fb4:
    // 0x326fb4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x326fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_326fb8:
    // 0x326fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326fc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x326FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FC4u;
        // 0x326fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FCCu;
    // 0x326fcc: 0x0  nop
    ctx->pc = 0x326fccu;
    // NOP
    ctx->pc = 0x326fd0u;
}
