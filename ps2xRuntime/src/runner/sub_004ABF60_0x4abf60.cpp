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

// Function: sub_004ABF60
// Address: 0x4abf60 - 0x4abfd0
void sub_004ABF60_0x4abf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABF60_0x4abf60");
#endif

    switch (ctx->pc) {
        case 0x4abf7cu: goto label_4abf7c;
        case 0x4abf94u: goto label_4abf94;
        case 0x4abfb4u: goto label_4abfb4;
        default: break;
    }

    ctx->pc = 0x4abf60u;

    // 0x4abf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4abf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4abf64: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4abf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4abf68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4abf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4abf6c: 0x24508948  addiu       $s0, $v0, -0x76B8
    ctx->pc = 0x4abf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936904));
    // 0x4abf70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4abf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4abf74: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4ABF74u;
    SET_GPR_U32(ctx, 31, 0x4ABF7Cu);
    ctx->pc = 0x4ABF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABF74u;
    // 0x4abf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4ABF74u, 0x4ABF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABF7Cu;
label_4abf7c:
    // 0x4abf7c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABF7Cu;
    {
        const bool branch_taken_0x4abf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF7Cu;
        // 0x4abf80: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf7c) {
            ctx->pc = 0x4ABFBCu;
            goto label_4abfbc;
        }
    }
    ctx->pc = 0x4ABF84u;
    // 0x4abf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abf88: 0x24a52730  addiu       $a1, $a1, 0x2730
    ctx->pc = 0x4abf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
    // 0x4abf8c: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4ABF8Cu;
    SET_GPR_U32(ctx, 31, 0x4ABF94u);
    ctx->pc = 0x4ABF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABF8Cu;
    // 0x4abf90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4ABF8Cu, 0x4ABF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABF94u;
label_4abf94:
    // 0x4abf94: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4abf94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4abf98: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4abf98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4abf9c: 0x24a56700  addiu       $a1, $a1, 0x6700
    ctx->pc = 0x4abf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26368));
    // 0x4abfa0: 0x24e76818  addiu       $a3, $a3, 0x6818
    ctx->pc = 0x4abfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26648));
    // 0x4abfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abfa8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4abfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4abfac: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4ABFACu;
    SET_GPR_U32(ctx, 31, 0x4ABFB4u);
    ctx->pc = 0x4ABFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABFACu;
    // 0x4abfb0: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4ABFACu, 0x4ABFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABFB4u;
label_4abfb4:
    // 0x4abfb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4ABFB4u;
    {
        const bool branch_taken_0x4abfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFB4u;
        // 0x4abfb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfb4) {
            ctx->pc = 0x4ABFC0u;
            goto label_4abfc0;
        }
    }
    ctx->pc = 0x4ABFBCu;
label_4abfbc:
    // 0x4abfbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4abfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abfc0:
    // 0x4abfc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4abfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4abfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFC8u;
        // 0x4abfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABFD0u;
}
