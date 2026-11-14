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

// Function: sub_004B4408
// Address: 0x4b4408 - 0x4b4468
void sub_004B4408_0x4b4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4408_0x4b4408");
#endif

    switch (ctx->pc) {
        case 0x4b4434u: goto label_4b4434;
        case 0x4b4444u: goto label_4b4444;
        case 0x4b4454u: goto label_4b4454;
        default: break;
    }

    ctx->pc = 0x4b4408u;

    // 0x4b4408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b440c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b4410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4418: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x4b4418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x4b441c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b4420: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4420u;
    {
        const bool branch_taken_0x4b4420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4420u;
        // 0x4b4424: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4420) {
            ctx->pc = 0x4B444Cu;
            goto label_4b444c;
        }
    }
    ctx->pc = 0x4B4428u;
    // 0x4b4428: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4b4428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4b442c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4B442Cu;
    SET_GPR_U32(ctx, 31, 0x4B4434u);
    ctx->pc = 0x4B4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B442Cu;
    // 0x4b4430: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4B442Cu, 0x4B4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4434u;
label_4b4434:
    // 0x4b4434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4434u;
    {
        const bool branch_taken_0x4b4434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4434) {
            ctx->pc = 0x4B444Cu;
            goto label_4b444c;
        }
    }
    ctx->pc = 0x4B443Cu;
    // 0x4b443c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4B443Cu;
    SET_GPR_U32(ctx, 31, 0x4B4444u);
    ctx->pc = 0x4B4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B443Cu;
    // 0x4b4440: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4B443Cu, 0x4B4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4444u;
label_4b4444:
    // 0x4b4444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4444u;
    {
        const bool branch_taken_0x4b4444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4444u;
        // 0x4b4448: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4444) {
            ctx->pc = 0x4B4458u;
            goto label_4b4458;
        }
    }
    ctx->pc = 0x4B444Cu;
label_4b444c:
    // 0x4b444c: 0xc12d07c  jal         func_4B41F0
    ctx->pc = 0x4B444Cu;
    SET_GPR_U32(ctx, 31, 0x4B4454u);
    ctx->pc = 0x4B4450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B444Cu;
    // 0x4b4450: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B41F0u, 0x4B444Cu, 0x4B4454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4454u;
label_4b4454:
    // 0x4b4454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4458:
    // 0x4b4458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b445c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B445Cu;
        // 0x4b4460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4464u;
    // 0x4b4464: 0x0  nop
    ctx->pc = 0x4b4464u;
    // NOP
    ctx->pc = 0x4b4468u;
}
