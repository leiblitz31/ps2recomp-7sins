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

// Function: sub_001BB740
// Address: 0x1bb740 - 0x1bb810
void sub_001BB740_0x1bb740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB740_0x1bb740");
#endif

    switch (ctx->pc) {
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7f0u: goto label_1bb7f0;
        default: break;
    }

    ctx->pc = 0x1bb740u;

    // 0x1bb740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb74c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bb750: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb754: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb758: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BB758u;
    {
        const bool branch_taken_0x1bb758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb758) {
            ctx->pc = 0x1BB7F8u;
            goto label_1bb7f8;
        }
    }
    ctx->pc = 0x1BB760u;
    // 0x1bb760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb764: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB764u;
    {
        const bool branch_taken_0x1bb764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb764) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB76Cu;
label_1bb76c:
    // 0x1bb76c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb770: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1bb770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb774: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb77c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb780: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB780u;
    {
        const bool branch_taken_0x1bb780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb780) {
            ctx->pc = 0x1BB7B8u;
            goto label_1bb7b8;
        }
    }
    ctx->pc = 0x1BB788u;
    // 0x1bb788: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb78c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb790: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1bb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1bb794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb798: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb79c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1BB79Cu;
    SET_GPR_U32(ctx, 31, 0x1BB7A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1BB79Cu, 0x1BB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7A4u;
label_1bb7a4:
    // 0x1bb7a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb7a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb7ac: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb7b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb7b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1bb7b8:
    // 0x1bb7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb7bc:
    // 0x1bb7bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb7c0: 0x8c63be5c  lw          $v1, -0x41A4($v1)
    ctx->pc = 0x1bb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bb7c4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1bb7c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bb7c8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BB7C8u;
    {
        const bool branch_taken_0x1bb7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7c8) {
            ctx->pc = 0x1BB76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb76c;
        }
    }
    ctx->pc = 0x1BB7D0u;
    // 0x1bb7d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb7d4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb7d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB7D8u;
    {
        const bool branch_taken_0x1bb7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7d8) {
            ctx->pc = 0x1BB7F8u;
            goto label_1bb7f8;
        }
    }
    ctx->pc = 0x1BB7E0u;
    // 0x1bb7e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb7e4: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1bb7e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1BB7E8u;
    SET_GPR_U32(ctx, 31, 0x1BB7F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1BB7E8u, 0x1BB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7F0u;
label_1bb7f0:
    // 0x1bb7f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb7f4: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x1bb7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
label_1bb7f8:
    // 0x1bb7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb7fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb800: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bb800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bb804: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB80Cu;
    // 0x1bb80c: 0x0  nop
    ctx->pc = 0x1bb80cu;
    // NOP
    ctx->pc = 0x1bb810u;
}
