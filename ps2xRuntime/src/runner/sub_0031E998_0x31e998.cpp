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

// Function: sub_0031E998
// Address: 0x31e998 - 0x31ea08
void sub_0031E998_0x31e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E998_0x31e998");
#endif

    switch (ctx->pc) {
        case 0x31e998u: goto label_31e998;
        case 0x31e99cu: goto label_31e99c;
        case 0x31e9a0u: goto label_31e9a0;
        case 0x31e9a4u: goto label_31e9a4;
        case 0x31e9a8u: goto label_31e9a8;
        case 0x31e9acu: goto label_31e9ac;
        case 0x31e9b0u: goto label_31e9b0;
        case 0x31e9b4u: goto label_31e9b4;
        case 0x31e9b8u: goto label_31e9b8;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9c0u: goto label_31e9c0;
        case 0x31e9c4u: goto label_31e9c4;
        case 0x31e9c8u: goto label_31e9c8;
        case 0x31e9ccu: goto label_31e9cc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        case 0x31e9d8u: goto label_31e9d8;
        case 0x31e9dcu: goto label_31e9dc;
        case 0x31e9e0u: goto label_31e9e0;
        case 0x31e9e4u: goto label_31e9e4;
        case 0x31e9e8u: goto label_31e9e8;
        case 0x31e9ecu: goto label_31e9ec;
        case 0x31e9f0u: goto label_31e9f0;
        case 0x31e9f4u: goto label_31e9f4;
        case 0x31e9f8u: goto label_31e9f8;
        case 0x31e9fcu: goto label_31e9fc;
        case 0x31ea00u: goto label_31ea00;
        case 0x31ea04u: goto label_31ea04;
        default: break;
    }

    ctx->pc = 0x31e998u;

label_31e998:
    // 0x31e998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31e99c:
    // 0x31e99c: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e9a0:
    // 0x31e9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31e9a4:
    // 0x31e9a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31e9a8:
    // 0x31e9a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e9ac:
    // 0x31e9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e9b0:
    // 0x31e9b0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x31e9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31e9b4:
    // 0x31e9b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e9b8:
    // 0x31e9b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31e9bc:
    if (ctx->pc == 0x31E9BCu) {
        ctx->pc = 0x31E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B8u;
        // 0x31e9bc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9C0u;
        goto label_31e9c0;
    }
    ctx->pc = 0x31E9B8u;
    {
        const bool branch_taken_0x31e9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B8u;
        // 0x31e9bc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9b8) {
            ctx->pc = 0x31E9D0u;
            goto label_31e9d0;
        }
    }
    ctx->pc = 0x31E9C0u;
label_31e9c0:
    // 0x31e9c0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31e9c4:
    // 0x31e9c4: 0x40f809  jalr        $v0
label_31e9c8:
    if (ctx->pc == 0x31E9C8u) {
        ctx->pc = 0x31E9CCu;
        goto label_31e9cc;
    }
    ctx->pc = 0x31E9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E9CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E9C4u, 0x31E9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E9CCu;
label_31e9cc:
    // 0x31e9cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x31e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_31e9d0:
    // 0x31e9d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31e9d4:
    // 0x31e9d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31e9d8:
    if (ctx->pc == 0x31E9D8u) {
        ctx->pc = 0x31E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9D4u;
        // 0x31e9d8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9DCu;
        goto label_31e9dc;
    }
    ctx->pc = 0x31E9D4u;
    {
        const bool branch_taken_0x31e9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9D4u;
        // 0x31e9d8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9d4) {
            ctx->pc = 0x31E9ECu;
            goto label_31e9ec;
        }
    }
    ctx->pc = 0x31E9DCu;
label_31e9dc:
    // 0x31e9dc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x31e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_31e9e0:
    // 0x31e9e0: 0x40f809  jalr        $v0
label_31e9e4:
    if (ctx->pc == 0x31E9E4u) {
        ctx->pc = 0x31E9E8u;
        goto label_31e9e8;
    }
    ctx->pc = 0x31E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E9E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E9E0u, 0x31E9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E9E8u;
label_31e9e8:
    // 0x31e9e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31e9ec:
    // 0x31e9ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_31e9f0:
    // 0x31e9f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31e9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e9f4:
    // 0x31e9f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31e9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e9f8:
    // 0x31e9f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e9fc:
    // 0x31e9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31ea00:
    // 0x31ea00: 0x3e00008  jr          $ra
label_31ea04:
    if (ctx->pc == 0x31EA04u) {
        ctx->pc = 0x31EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA00u;
        // 0x31ea04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA08u;
        goto label_fallthrough_0x31ea00;
    }
    ctx->pc = 0x31EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA00u;
        // 0x31ea04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31ea00:
    ctx->pc = 0x31EA08u;
}
