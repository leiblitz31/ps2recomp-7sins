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

// Function: sub_003ACED0
// Address: 0x3aced0 - 0x3acf20
void sub_003ACED0_0x3aced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACED0_0x3aced0");
#endif

    switch (ctx->pc) {
        case 0x3acef8u: goto label_3acef8;
        case 0x3acf00u: goto label_3acf00;
        default: break;
    }

    ctx->pc = 0x3aced0u;

    // 0x3aced0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3aced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3aced4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3aced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3aced8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3aced8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3acedc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3acedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3acee0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3acee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3acee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3acee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3acee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3aceec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acef0: 0xc0eb942  jal         func_3AE508
    ctx->pc = 0x3ACEF0u;
    SET_GPR_U32(ctx, 31, 0x3ACEF8u);
    ctx->pc = 0x3ACEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEF0u;
    // 0x3acef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE508u, 0x3ACEF0u, 0x3ACEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACEF8u;
label_3acef8:
    // 0x3acef8: 0xc104d30  jal         func_4134C0
    ctx->pc = 0x3ACEF8u;
    SET_GPR_U32(ctx, 31, 0x3ACF00u);
    ctx->pc = 0x3ACEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEF8u;
    // 0x3acefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134C0u, 0x3ACEF8u, 0x3ACF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF00u;
label_3acf00:
    // 0x3acf00: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3acf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3acf04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3acf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3acf08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3acf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3acf0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3acf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3acf10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3acf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3acf14: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF14u;
        // 0x3acf18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACF1Cu;
    // 0x3acf1c: 0x0  nop
    ctx->pc = 0x3acf1cu;
    // NOP
    ctx->pc = 0x3acf20u;
}
