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

// Function: sub_0018A220
// Address: 0x18a220 - 0x18a2b0
void sub_0018A220_0x18a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A220_0x18a220");
#endif

    switch (ctx->pc) {
        case 0x18a248u: goto label_18a248;
        case 0x18a274u: goto label_18a274;
        case 0x18a294u: goto label_18a294;
        default: break;
    }

    ctx->pc = 0x18a220u;

    // 0x18a220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a22c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18a230: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18a230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18a234: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a238: 0x24500014  addiu       $s0, $v0, 0x14
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18a23c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a240: 0xc0626cc  jal         func_189B30
    ctx->pc = 0x18A240u;
    SET_GPR_U32(ctx, 31, 0x18A248u);
    ctx->pc = 0x189B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B30u, 0x18A240u, 0x18A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A248u;
label_18a248:
    // 0x18a248: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A248u;
    {
        const bool branch_taken_0x18a248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a248) {
            ctx->pc = 0x18A274u;
            goto label_18a274;
        }
    }
    ctx->pc = 0x18A250u;
    // 0x18a250: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a254: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a258: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18a258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a25c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x18a260: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18a264: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x18a264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a268: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18a268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18a26c: 0xc062680  jal         func_189A00
    ctx->pc = 0x18A26Cu;
    SET_GPR_U32(ctx, 31, 0x18A274u);
    ctx->pc = 0x189A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189A00u, 0x18A26Cu, 0x18A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A274u;
label_18a274:
    // 0x18a274: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a278: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18a27c: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x18a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x18a280: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18a280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18a284: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a288: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x18a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18a28c: 0xc0624b0  jal         func_1892C0
    ctx->pc = 0x18A28Cu;
    SET_GPR_U32(ctx, 31, 0x18A294u);
    ctx->pc = 0x1892C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892C0u, 0x18A28Cu, 0x18A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A294u;
label_18a294:
    // 0x18a294: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a2a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18a2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2ACu;
    // 0x18a2ac: 0x0  nop
    ctx->pc = 0x18a2acu;
    // NOP
    ctx->pc = 0x18a2b0u;
}
