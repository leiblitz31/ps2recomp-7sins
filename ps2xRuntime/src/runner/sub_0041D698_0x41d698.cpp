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

// Function: sub_0041D698
// Address: 0x41d698 - 0x41d700
void sub_0041D698_0x41d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D698_0x41d698");
#endif

    switch (ctx->pc) {
        case 0x41d698u: goto label_41d698;
        case 0x41d69cu: goto label_41d69c;
        case 0x41d6a0u: goto label_41d6a0;
        case 0x41d6a4u: goto label_41d6a4;
        case 0x41d6a8u: goto label_41d6a8;
        case 0x41d6acu: goto label_41d6ac;
        case 0x41d6b0u: goto label_41d6b0;
        case 0x41d6b4u: goto label_41d6b4;
        case 0x41d6b8u: goto label_41d6b8;
        case 0x41d6bcu: goto label_41d6bc;
        case 0x41d6c0u: goto label_41d6c0;
        case 0x41d6c4u: goto label_41d6c4;
        case 0x41d6c8u: goto label_41d6c8;
        case 0x41d6ccu: goto label_41d6cc;
        case 0x41d6d0u: goto label_41d6d0;
        case 0x41d6d4u: goto label_41d6d4;
        case 0x41d6d8u: goto label_41d6d8;
        case 0x41d6dcu: goto label_41d6dc;
        case 0x41d6e0u: goto label_41d6e0;
        case 0x41d6e4u: goto label_41d6e4;
        case 0x41d6e8u: goto label_41d6e8;
        case 0x41d6ecu: goto label_41d6ec;
        case 0x41d6f0u: goto label_41d6f0;
        case 0x41d6f4u: goto label_41d6f4;
        case 0x41d6f8u: goto label_41d6f8;
        case 0x41d6fcu: goto label_41d6fc;
        default: break;
    }

    ctx->pc = 0x41d698u;

label_41d698:
    // 0x41d698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41d698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41d69c:
    // 0x41d69c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41d6a0:
    // 0x41d6a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41d6a4:
    // 0x41d6a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41d6a8:
    // 0x41d6a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41d6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d6ac:
    // 0x41d6ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41d6b0:
    // 0x41d6b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x41d6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41d6b4:
    // 0x41d6b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x41d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_41d6b8:
    // 0x41d6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d6bc:
    // 0x41d6bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41d6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d6c0:
    // 0x41d6c0: 0xc10472a  jal         func_411CA8
label_41d6c4:
    if (ctx->pc == 0x41D6C4u) {
        ctx->pc = 0x41D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6C0u;
        // 0x41d6c4: 0x8c52e918  lw          $s2, -0x16E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D6C8u;
        goto label_41d6c8;
    }
    ctx->pc = 0x41D6C0u;
    SET_GPR_U32(ctx, 31, 0x41D6C8u);
    ctx->pc = 0x41D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D6C0u;
    // 0x41d6c4: 0x8c52e918  lw          $s2, -0x16E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411CA8u, 0x41D6C0u, 0x41D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D6C8u;
label_41d6c8:
    // 0x41d6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d6cc:
    // 0x41d6cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41d6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d6d0:
    // 0x41d6d0: 0x240f809  jalr        $s2
label_41d6d4:
    if (ctx->pc == 0x41D6D4u) {
        ctx->pc = 0x41D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6D0u;
        // 0x41d6d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D6D8u;
        goto label_41d6d8;
    }
    ctx->pc = 0x41D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x41D6D8u);
        ctx->pc = 0x41D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6D0u;
        // 0x41d6d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D6D0u, 0x41D6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D6D8u;
label_41d6d8:
    // 0x41d6d8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x41d6d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_41d6dc:
    // 0x41d6dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41d6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41d6e0:
    // 0x41d6e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41d6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41d6e4:
    // 0x41d6e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41d6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41d6e8:
    // 0x41d6e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41d6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d6ec:
    // 0x41d6ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x41d6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d6f0:
    // 0x41d6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d6f4:
    // 0x41d6f4: 0x3e00008  jr          $ra
label_41d6f8:
    if (ctx->pc == 0x41D6F8u) {
        ctx->pc = 0x41D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6F4u;
        // 0x41d6f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D6FCu;
        goto label_41d6fc;
    }
    ctx->pc = 0x41D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D6F4u;
        // 0x41d6f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D6FCu;
label_41d6fc:
    // 0x41d6fc: 0x0  nop
    ctx->pc = 0x41d6fcu;
    // NOP
    ctx->pc = 0x41d700u;
}
