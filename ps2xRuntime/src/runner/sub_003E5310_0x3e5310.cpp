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

// Function: sub_003E5310
// Address: 0x3e5310 - 0x3e5368
void sub_003E5310_0x3e5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5310_0x3e5310");
#endif

    switch (ctx->pc) {
        case 0x3e5340u: goto label_3e5340;
        case 0x3e5350u: goto label_3e5350;
        default: break;
    }

    ctx->pc = 0x3e5310u;

    // 0x3e5310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e5314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e5314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e5318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e531c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5320: 0xae0500e4  sw          $a1, 0xE4($s0)
    ctx->pc = 0x3e5320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    // 0x3e5324: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x3e5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x3e5328: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5328u;
    {
        const bool branch_taken_0x3e5328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5328u;
        // 0x3e532c: 0xae0600e0  sw          $a2, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5328) {
            ctx->pc = 0x3E5350u;
            goto label_3e5350;
        }
    }
    ctx->pc = 0x3E5330u;
    // 0x3e5330: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3e5330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x3e5334: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e5334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e5338: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E5338u;
    SET_GPR_U32(ctx, 31, 0x3E5340u);
    ctx->pc = 0x3E533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5338u;
    // 0x3e533c: 0x24a5e6d8  addiu       $a1, $a1, -0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E5338u, 0x3E5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5340u;
label_3e5340:
    // 0x3e5340: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e5340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e5344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5348: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3E5348u;
    SET_GPR_U32(ctx, 31, 0x3E5350u);
    ctx->pc = 0x3E534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5348u;
    // 0x3e534c: 0x24a5e720  addiu       $a1, $a1, -0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E5348u, 0x3E5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5350u;
label_3e5350:
    // 0x3e5350: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x3e5350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x3e5354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e5354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e535c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E535Cu;
        // 0x3e5360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5364u;
    // 0x3e5364: 0x0  nop
    ctx->pc = 0x3e5364u;
    // NOP
    ctx->pc = 0x3e5368u;
}
