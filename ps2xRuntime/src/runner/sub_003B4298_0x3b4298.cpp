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

// Function: sub_003B4298
// Address: 0x3b4298 - 0x3b42f8
void sub_003B4298_0x3b4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4298_0x3b4298");
#endif

    switch (ctx->pc) {
        case 0x3b4298u: goto label_3b4298;
        case 0x3b429cu: goto label_3b429c;
        case 0x3b42a0u: goto label_3b42a0;
        case 0x3b42a4u: goto label_3b42a4;
        case 0x3b42a8u: goto label_3b42a8;
        case 0x3b42acu: goto label_3b42ac;
        case 0x3b42b0u: goto label_3b42b0;
        case 0x3b42b4u: goto label_3b42b4;
        case 0x3b42b8u: goto label_3b42b8;
        case 0x3b42bcu: goto label_3b42bc;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42c4u: goto label_3b42c4;
        case 0x3b42c8u: goto label_3b42c8;
        case 0x3b42ccu: goto label_3b42cc;
        case 0x3b42d0u: goto label_3b42d0;
        case 0x3b42d4u: goto label_3b42d4;
        case 0x3b42d8u: goto label_3b42d8;
        case 0x3b42dcu: goto label_3b42dc;
        case 0x3b42e0u: goto label_3b42e0;
        case 0x3b42e4u: goto label_3b42e4;
        case 0x3b42e8u: goto label_3b42e8;
        case 0x3b42ecu: goto label_3b42ec;
        case 0x3b42f0u: goto label_3b42f0;
        case 0x3b42f4u: goto label_3b42f4;
        default: break;
    }

    ctx->pc = 0x3b4298u;

label_3b4298:
    // 0x3b4298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b429c:
    // 0x3b429c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b42a0:
    // 0x3b42a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b42a4:
    // 0x3b42a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b42a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b42a8:
    // 0x3b42a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b42ac:
    // 0x3b42ac: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b42acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b42b0:
    // 0x3b42b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b42b4:
    if (ctx->pc == 0x3B42B4u) {
        ctx->pc = 0x3B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42B0u;
        // 0x3b42b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42B8u;
        goto label_3b42b8;
    }
    ctx->pc = 0x3B42B0u;
    {
        const bool branch_taken_0x3b42b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42B0u;
        // 0x3b42b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42b0) {
            ctx->pc = 0x3B42C8u;
            goto label_3b42c8;
        }
    }
    ctx->pc = 0x3B42B8u;
label_3b42b8:
    // 0x3b42b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b42bc:
    // 0x3b42bc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3b42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3b42c0:
    // 0x3b42c0: 0x40f809  jalr        $v0
label_3b42c4:
    if (ctx->pc == 0x3B42C4u) {
        ctx->pc = 0x3B42C8u;
        goto label_3b42c8;
    }
    ctx->pc = 0x3B42C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B42C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B42C0u, 0x3B42C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B42C8u;
label_3b42c8:
    // 0x3b42c8: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3b42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3b42cc:
    // 0x3b42cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b42d0:
    if (ctx->pc == 0x3B42D0u) {
        ctx->pc = 0x3B42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42CCu;
        // 0x3b42d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42D4u;
        goto label_3b42d4;
    }
    ctx->pc = 0x3B42CCu;
    {
        const bool branch_taken_0x3b42cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42CCu;
        // 0x3b42d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42cc) {
            ctx->pc = 0x3B42E4u;
            goto label_3b42e4;
        }
    }
    ctx->pc = 0x3B42D4u;
label_3b42d4:
    // 0x3b42d4: 0xc0e9e5c  jal         func_3A7970
label_3b42d8:
    if (ctx->pc == 0x3B42D8u) {
        ctx->pc = 0x3B42DCu;
        goto label_3b42dc;
    }
    ctx->pc = 0x3B42D4u;
    SET_GPR_U32(ctx, 31, 0x3B42DCu);
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B42D4u, 0x3B42DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42DCu;
label_3b42dc:
    // 0x3b42dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b42dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b42e0:
    // 0x3b42e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b42e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b42e4:
    // 0x3b42e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b42e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b42e8:
    // 0x3b42e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b42e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b42ec:
    // 0x3b42ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b42ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b42f0:
    // 0x3b42f0: 0x3e00008  jr          $ra
label_3b42f4:
    if (ctx->pc == 0x3B42F4u) {
        ctx->pc = 0x3B42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42F0u;
        // 0x3b42f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42F8u;
        goto label_fallthrough_0x3b42f0;
    }
    ctx->pc = 0x3B42F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42F0u;
        // 0x3b42f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B42F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b42f0:
    ctx->pc = 0x3B42F8u;
}
