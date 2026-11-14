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

// Function: sub_004A8980
// Address: 0x4a8980 - 0x4a89e8
void sub_004A8980_0x4a8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8980_0x4a8980");
#endif

    switch (ctx->pc) {
        case 0x4a89b4u: goto label_4a89b4;
        case 0x4a89c4u: goto label_4a89c4;
        case 0x4a89dcu: goto label_4a89dc;
        default: break;
    }

    ctx->pc = 0x4a8980u;

    // 0x4a8980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a8984: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a8984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a898c: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x4a898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4a8990: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a8990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a8994: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A8994u;
    {
        const bool branch_taken_0x4a8994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8994u;
        // 0x4a8998: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8994) {
            ctx->pc = 0x4A89CCu;
            goto label_4a89cc;
        }
    }
    ctx->pc = 0x4A899Cu;
    // 0x4a899c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4a899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a89a0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4a89a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x4a89a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A89A4u;
    {
        const bool branch_taken_0x4a89a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a89a4) {
            ctx->pc = 0x4A89A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A89A4u;
            // 0x4a89a8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A89BCu;
            goto label_4a89bc;
        }
    }
    ctx->pc = 0x4A89ACu;
    // 0x4a89ac: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4A89ACu;
    SET_GPR_U32(ctx, 31, 0x4A89B4u);
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A89ACu, 0x4A89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A89B4u;
label_4a89b4:
    // 0x4a89b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A89B4u;
    {
        const bool branch_taken_0x4a89b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89B4u;
        // 0x4a89b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a89b4) {
            ctx->pc = 0x4A89E0u;
            goto label_4a89e0;
        }
    }
    ctx->pc = 0x4A89BCu;
label_4a89bc:
    // 0x4a89bc: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4A89BCu;
    SET_GPR_U32(ctx, 31, 0x4A89C4u);
    ctx->pc = 0x4A89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A89BCu;
    // 0x4a89c0: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A89BCu, 0x4A89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A89C4u;
label_4a89c4:
    // 0x4a89c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A89C4u;
    {
        const bool branch_taken_0x4a89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89C4u;
        // 0x4a89c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a89c4) {
            ctx->pc = 0x4A89E0u;
            goto label_4a89e0;
        }
    }
    ctx->pc = 0x4A89CCu;
label_4a89cc:
    // 0x4a89cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A89CCu;
    {
        const bool branch_taken_0x4a89cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89CCu;
        // 0x4a89d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a89cc) {
            ctx->pc = 0x4A89E0u;
            goto label_4a89e0;
        }
    }
    ctx->pc = 0x4A89D4u;
    // 0x4a89d4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A89D4u;
    SET_GPR_U32(ctx, 31, 0x4A89DCu);
    ctx->pc = 0x4A89D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A89D4u;
    // 0x4a89d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A89D4u, 0x4A89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A89DCu;
label_4a89dc:
    // 0x4a89dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a89dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a89e0:
    // 0x4a89e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A89E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89E0u;
        // 0x4a89e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A89E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A89E8u;
}
