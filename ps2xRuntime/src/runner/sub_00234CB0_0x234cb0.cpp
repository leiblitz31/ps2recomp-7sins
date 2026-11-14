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

// Function: sub_00234CB0
// Address: 0x234cb0 - 0x234d40
void sub_00234CB0_0x234cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234CB0_0x234cb0");
#endif

    switch (ctx->pc) {
        case 0x234cd8u: goto label_234cd8;
        case 0x234cf0u: goto label_234cf0;
        default: break;
    }

    ctx->pc = 0x234cb0u;

    // 0x234cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234cc4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x234cc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234cc8: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x234cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x234ccc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234cd0: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234CD0u;
    SET_GPR_U32(ctx, 31, 0x234CD8u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234CD0u, 0x234CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CD8u;
label_234cd8:
    // 0x234cd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234CD8u;
    {
        const bool branch_taken_0x234cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234cd8) {
            ctx->pc = 0x234CFCu;
            goto label_234cfc;
        }
    }
    ctx->pc = 0x234CE0u;
    // 0x234ce0: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x234ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x234ce4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x234ce8: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234CE8u;
    SET_GPR_U32(ctx, 31, 0x234CF0u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234CE8u, 0x234CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CF0u;
label_234cf0:
    // 0x234cf0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234CF0u;
    {
        const bool branch_taken_0x234cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234cf0) {
            ctx->pc = 0x234CFCu;
            goto label_234cfc;
        }
    }
    ctx->pc = 0x234CF8u;
    // 0x234cf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x234cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234cfc:
    // 0x234cfc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234CFCu;
    {
        const bool branch_taken_0x234cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cfc) {
            ctx->pc = 0x234D14u;
            goto label_234d14;
        }
    }
    ctx->pc = 0x234D04u;
    // 0x234d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234d08: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x234d08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234D0Cu;
    {
        const bool branch_taken_0x234d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d0c) {
            ctx->pc = 0x234D18u;
            goto label_234d18;
        }
    }
    ctx->pc = 0x234D14u;
label_234d14:
    // 0x234d14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x234d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234d18:
    // 0x234d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x234D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234D34u;
    // 0x234d34: 0x0  nop
    ctx->pc = 0x234d34u;
    // NOP
    // 0x234d38: 0x0  nop
    ctx->pc = 0x234d38u;
    // NOP
    // 0x234d3c: 0x0  nop
    ctx->pc = 0x234d3cu;
    // NOP
    ctx->pc = 0x234d40u;
}
