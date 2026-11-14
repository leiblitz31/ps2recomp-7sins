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

// Function: sub_003A7970
// Address: 0x3a7970 - 0x3a79d8
void sub_003A7970_0x3a7970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7970_0x3a7970");
#endif

    switch (ctx->pc) {
        case 0x3a7970u: goto label_3a7970;
        case 0x3a7974u: goto label_3a7974;
        case 0x3a7978u: goto label_3a7978;
        case 0x3a797cu: goto label_3a797c;
        case 0x3a7980u: goto label_3a7980;
        case 0x3a7984u: goto label_3a7984;
        case 0x3a7988u: goto label_3a7988;
        case 0x3a798cu: goto label_3a798c;
        case 0x3a7990u: goto label_3a7990;
        case 0x3a7994u: goto label_3a7994;
        case 0x3a7998u: goto label_3a7998;
        case 0x3a799cu: goto label_3a799c;
        case 0x3a79a0u: goto label_3a79a0;
        case 0x3a79a4u: goto label_3a79a4;
        case 0x3a79a8u: goto label_3a79a8;
        case 0x3a79acu: goto label_3a79ac;
        case 0x3a79b0u: goto label_3a79b0;
        case 0x3a79b4u: goto label_3a79b4;
        case 0x3a79b8u: goto label_3a79b8;
        case 0x3a79bcu: goto label_3a79bc;
        case 0x3a79c0u: goto label_3a79c0;
        case 0x3a79c4u: goto label_3a79c4;
        case 0x3a79c8u: goto label_3a79c8;
        case 0x3a79ccu: goto label_3a79cc;
        case 0x3a79d0u: goto label_3a79d0;
        case 0x3a79d4u: goto label_3a79d4;
        default: break;
    }

    ctx->pc = 0x3a7970u;

label_3a7970:
    // 0x3a7970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a7974:
    // 0x3a7974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a7974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a7978:
    // 0x3a7978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a797c:
    // 0x3a797c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7980:
    // 0x3a7980: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3a7984:
    // 0x3a7984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7988:
    // 0x3a7988: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_3a798c:
    if (ctx->pc == 0x3A798Cu) {
        ctx->pc = 0x3A798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7988u;
        // 0x3a798c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7990u;
        goto label_3a7990;
    }
    ctx->pc = 0x3A7988u;
    {
        const bool branch_taken_0x3a7988 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3A798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7988u;
        // 0x3a798c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7988) {
            ctx->pc = 0x3A79C4u;
            goto label_3a79c4;
        }
    }
    ctx->pc = 0x3A7990u;
label_3a7990:
    // 0x3a7990: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3a7990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3a7994:
    // 0x3a7994: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3a7998:
    if (ctx->pc == 0x3A7998u) {
        ctx->pc = 0x3A7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7994u;
        // 0x3a7998: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A799Cu;
        goto label_3a799c;
    }
    ctx->pc = 0x3A7994u;
    {
        const bool branch_taken_0x3a7994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7994u;
        // 0x3a7998: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7994) {
            ctx->pc = 0x3A79A8u;
            goto label_3a79a8;
        }
    }
    ctx->pc = 0x3A799Cu;
label_3a799c:
    // 0x3a799c: 0xc10822c  jal         func_4208B0
label_3a79a0:
    if (ctx->pc == 0x3A79A0u) {
        ctx->pc = 0x3A79A4u;
        goto label_3a79a4;
    }
    ctx->pc = 0x3A799Cu;
    SET_GPR_U32(ctx, 31, 0x3A79A4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3A799Cu, 0x3A79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A79A4u;
label_3a79a4:
    // 0x3a79a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a79a8:
    // 0x3a79a8: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3a79a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3a79ac:
    // 0x3a79ac: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x3a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3a79b0:
    // 0x3a79b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a79b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a79b4:
    // 0x3a79b4: 0x40f809  jalr        $v0
label_3a79b8:
    if (ctx->pc == 0x3A79B8u) {
        ctx->pc = 0x3A79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79B4u;
        // 0x3a79b8: 0x8cc4d380  lw          $a0, -0x2C80($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79BCu;
        goto label_3a79bc;
    }
    ctx->pc = 0x3A79B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A79BCu);
        ctx->pc = 0x3A79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79B4u;
        // 0x3a79b8: 0x8cc4d380  lw          $a0, -0x2C80($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955904)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A79B4u, 0x3A79BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A79BCu;
label_3a79bc:
    // 0x3a79bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a79c0:
    if (ctx->pc == 0x3A79C0u) {
        ctx->pc = 0x3A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79BCu;
        // 0x3a79c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79C4u;
        goto label_3a79c4;
    }
    ctx->pc = 0x3A79BCu;
    {
        const bool branch_taken_0x3a79bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79BCu;
        // 0x3a79c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a79bc) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A79C4u;
label_3a79c4:
    // 0x3a79c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a79c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a79c8:
    // 0x3a79c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a79c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a79cc:
    // 0x3a79cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a79ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a79d0:
    // 0x3a79d0: 0x3e00008  jr          $ra
label_3a79d4:
    if (ctx->pc == 0x3A79D4u) {
        ctx->pc = 0x3A79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79D0u;
        // 0x3a79d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79D8u;
        goto label_fallthrough_0x3a79d0;
    }
    ctx->pc = 0x3A79D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79D0u;
        // 0x3a79d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A79D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a79d0:
    ctx->pc = 0x3A79D8u;
}
