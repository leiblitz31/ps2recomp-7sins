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

// Function: sub_00178130
// Address: 0x178130 - 0x178190
void sub_00178130_0x178130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178130_0x178130");
#endif

    ctx->pc = 0x178130u;

    // 0x178130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17813c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178140: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x178140u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178144: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x178148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17814c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17814Cu;
    {
        const bool branch_taken_0x17814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17814c) {
            ctx->pc = 0x178170u;
            goto label_178170;
        }
    }
    ctx->pc = 0x178154u;
    // 0x178154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178158: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x178158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17815c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x17815cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178160: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x178160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x178164: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178164u;
    {
        const bool branch_taken_0x178164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178164) {
            ctx->pc = 0x178170u;
            goto label_178170;
        }
    }
    ctx->pc = 0x17816Cu;
    // 0x17816c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178170:
    // 0x178170: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x178170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x178174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17817c: 0x3e00008  jr          $ra
    ctx->pc = 0x17817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17817Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178184u;
    // 0x178184: 0x0  nop
    ctx->pc = 0x178184u;
    // NOP
    // 0x178188: 0x0  nop
    ctx->pc = 0x178188u;
    // NOP
    // 0x17818c: 0x0  nop
    ctx->pc = 0x17818cu;
    // NOP
    ctx->pc = 0x178190u;
}
