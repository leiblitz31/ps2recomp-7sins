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

// Function: sub_00328588
// Address: 0x328588 - 0x3285f8
void sub_00328588_0x328588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328588_0x328588");
#endif

    switch (ctx->pc) {
        case 0x3285d0u: goto label_3285d0;
        case 0x3285dcu: goto label_3285dc;
        default: break;
    }

    ctx->pc = 0x328588u;

    // 0x328588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32858c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x328590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x328590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x328594: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x328594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x328598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32859c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32859cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3285a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3285a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3285a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3285a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F2320u));
    // 0x3285ac: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3285acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3285b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3285b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x3285b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3285b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3285b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3285b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3285bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3285BCu;
    {
        const bool branch_taken_0x3285bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285BCu;
        // 0x3285c0: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285bc) {
            ctx->pc = 0x3285DCu;
            goto label_3285dc;
        }
    }
    ctx->pc = 0x3285C4u;
    // 0x3285c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3285c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285c8: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x3285C8u;
    SET_GPR_U32(ctx, 31, 0x3285D0u);
    ctx->pc = 0x3285CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285C8u;
    // 0x3285cc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328330u, 0x3285C8u, 0x3285D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285D0u;
label_3285d0:
    // 0x3285d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3285d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285d4: 0xc0ca0fe  jal         func_3283F8
    ctx->pc = 0x3285D4u;
    SET_GPR_U32(ctx, 31, 0x3285DCu);
    ctx->pc = 0x3285D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285D4u;
    // 0x3285d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283F8u, 0x3285D4u, 0x3285DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285DCu;
label_3285dc:
    // 0x3285dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3285dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3285e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3285e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3285e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3285e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3285e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3285ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3285ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285ECu;
        // 0x3285f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3285ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3285F4u;
    // 0x3285f4: 0x0  nop
    ctx->pc = 0x3285f4u;
    // NOP
    ctx->pc = 0x3285f8u;
}
