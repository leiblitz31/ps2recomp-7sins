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

// Function: sub_003C2390
// Address: 0x3c2390 - 0x3c23f0
void sub_003C2390_0x3c2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2390_0x3c2390");
#endif

    switch (ctx->pc) {
        case 0x3c2390u: goto label_3c2390;
        case 0x3c2394u: goto label_3c2394;
        case 0x3c2398u: goto label_3c2398;
        case 0x3c239cu: goto label_3c239c;
        case 0x3c23a0u: goto label_3c23a0;
        case 0x3c23a4u: goto label_3c23a4;
        case 0x3c23a8u: goto label_3c23a8;
        case 0x3c23acu: goto label_3c23ac;
        case 0x3c23b0u: goto label_3c23b0;
        case 0x3c23b4u: goto label_3c23b4;
        case 0x3c23b8u: goto label_3c23b8;
        case 0x3c23bcu: goto label_3c23bc;
        case 0x3c23c0u: goto label_3c23c0;
        case 0x3c23c4u: goto label_3c23c4;
        case 0x3c23c8u: goto label_3c23c8;
        case 0x3c23ccu: goto label_3c23cc;
        case 0x3c23d0u: goto label_3c23d0;
        case 0x3c23d4u: goto label_3c23d4;
        case 0x3c23d8u: goto label_3c23d8;
        case 0x3c23dcu: goto label_3c23dc;
        case 0x3c23e0u: goto label_3c23e0;
        case 0x3c23e4u: goto label_3c23e4;
        case 0x3c23e8u: goto label_3c23e8;
        case 0x3c23ecu: goto label_3c23ec;
        default: break;
    }

    ctx->pc = 0x3c2390u;

label_3c2390:
    // 0x3c2390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c2394:
    // 0x3c2394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2398:
    // 0x3c2398: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_3c239c:
    if (ctx->pc == 0x3C239Cu) {
        ctx->pc = 0x3C239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2398u;
        // 0x3c239c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23A0u;
        goto label_3c23a0;
    }
    ctx->pc = 0x3C2398u;
    {
        const bool branch_taken_0x3c2398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2398u;
        // 0x3c239c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2398) {
            ctx->pc = 0x3C23B4u;
            goto label_3c23b4;
        }
    }
    ctx->pc = 0x3C23A0u;
label_3c23a0:
    // 0x3c23a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c23a4:
    // 0x3c23a4: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_3c23a8:
    if (ctx->pc == 0x3C23A8u) {
        ctx->pc = 0x3C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23A4u;
        // 0x3c23a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23ACu;
        goto label_3c23ac;
    }
    ctx->pc = 0x3C23A4u;
    {
        const bool branch_taken_0x3c23a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23A4u;
        // 0x3c23a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23a4) {
            ctx->pc = 0x3C23D0u;
            goto label_3c23d0;
        }
    }
    ctx->pc = 0x3C23ACu;
label_3c23ac:
    // 0x3c23ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c23b0:
    if (ctx->pc == 0x3C23B0u) {
        ctx->pc = 0x3C23B4u;
        goto label_3c23b4;
    }
    ctx->pc = 0x3C23ACu;
    {
        const bool branch_taken_0x3c23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c23ac) {
            ctx->pc = 0x3C23E8u;
            goto label_3c23e8;
        }
    }
    ctx->pc = 0x3C23B4u;
label_3c23b4:
    // 0x3c23b4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3c23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3c23b8:
    // 0x3c23b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c23bc:
    if (ctx->pc == 0x3C23BCu) {
        ctx->pc = 0x3C23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23B8u;
        // 0x3c23bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23C0u;
        goto label_3c23c0;
    }
    ctx->pc = 0x3C23B8u;
    {
        const bool branch_taken_0x3c23b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23B8u;
        // 0x3c23bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23b8) {
            ctx->pc = 0x3C23E8u;
            goto label_3c23e8;
        }
    }
    ctx->pc = 0x3C23C0u;
label_3c23c0:
    // 0x3c23c0: 0x40f809  jalr        $v0
label_3c23c4:
    if (ctx->pc == 0x3C23C4u) {
        ctx->pc = 0x3C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23C0u;
        // 0x3c23c4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23C8u;
        goto label_3c23c8;
    }
    ctx->pc = 0x3C23C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C23C8u);
        ctx->pc = 0x3C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23C0u;
        // 0x3c23c4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C23C0u, 0x3C23C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C23C8u;
label_3c23c8:
    // 0x3c23c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c23cc:
    if (ctx->pc == 0x3C23CCu) {
        ctx->pc = 0x3C23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23C8u;
        // 0x3c23cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23D0u;
        goto label_3c23d0;
    }
    ctx->pc = 0x3C23C8u;
    {
        const bool branch_taken_0x3c23c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23C8u;
        // 0x3c23cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c23c8) {
            ctx->pc = 0x3C23E8u;
            goto label_3c23e8;
        }
    }
    ctx->pc = 0x3C23D0u;
label_3c23d0:
    // 0x3c23d0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3c23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3c23d4:
    // 0x3c23d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c23d8:
    if (ctx->pc == 0x3C23D8u) {
        ctx->pc = 0x3C23DCu;
        goto label_3c23dc;
    }
    ctx->pc = 0x3C23D4u;
    {
        const bool branch_taken_0x3c23d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c23d4) {
            ctx->pc = 0x3C23E8u;
            goto label_3c23e8;
        }
    }
    ctx->pc = 0x3C23DCu;
label_3c23dc:
    // 0x3c23dc: 0x40f809  jalr        $v0
label_3c23e0:
    if (ctx->pc == 0x3C23E0u) {
        ctx->pc = 0x3C23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23DCu;
        // 0x3c23e0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23E4u;
        goto label_3c23e4;
    }
    ctx->pc = 0x3C23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C23E4u);
        ctx->pc = 0x3C23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23DCu;
        // 0x3c23e0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C23DCu, 0x3C23E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C23E4u;
label_3c23e4:
    // 0x3c23e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c23e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c23e8:
    // 0x3c23e8: 0x3e00008  jr          $ra
label_3c23ec:
    if (ctx->pc == 0x3C23ECu) {
        ctx->pc = 0x3C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23E8u;
        // 0x3c23ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23F0u;
        goto label_fallthrough_0x3c23e8;
    }
    ctx->pc = 0x3C23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23E8u;
        // 0x3c23ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C23E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c23e8:
    ctx->pc = 0x3C23F0u;
}
