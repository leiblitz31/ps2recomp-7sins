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

// Function: sub_0041C170
// Address: 0x41c170 - 0x41c1e0
void sub_0041C170_0x41c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C170_0x41c170");
#endif

    switch (ctx->pc) {
        case 0x41c170u: goto label_41c170;
        case 0x41c174u: goto label_41c174;
        case 0x41c178u: goto label_41c178;
        case 0x41c17cu: goto label_41c17c;
        case 0x41c180u: goto label_41c180;
        case 0x41c184u: goto label_41c184;
        case 0x41c188u: goto label_41c188;
        case 0x41c18cu: goto label_41c18c;
        case 0x41c190u: goto label_41c190;
        case 0x41c194u: goto label_41c194;
        case 0x41c198u: goto label_41c198;
        case 0x41c19cu: goto label_41c19c;
        case 0x41c1a0u: goto label_41c1a0;
        case 0x41c1a4u: goto label_41c1a4;
        case 0x41c1a8u: goto label_41c1a8;
        case 0x41c1acu: goto label_41c1ac;
        case 0x41c1b0u: goto label_41c1b0;
        case 0x41c1b4u: goto label_41c1b4;
        case 0x41c1b8u: goto label_41c1b8;
        case 0x41c1bcu: goto label_41c1bc;
        case 0x41c1c0u: goto label_41c1c0;
        case 0x41c1c4u: goto label_41c1c4;
        case 0x41c1c8u: goto label_41c1c8;
        case 0x41c1ccu: goto label_41c1cc;
        case 0x41c1d0u: goto label_41c1d0;
        case 0x41c1d4u: goto label_41c1d4;
        case 0x41c1d8u: goto label_41c1d8;
        case 0x41c1dcu: goto label_41c1dc;
        default: break;
    }

    ctx->pc = 0x41c170u;

label_41c170:
    // 0x41c170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41c174:
    // 0x41c174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41c174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41c178:
    // 0x41c178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c17c:
    // 0x41c17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c180:
    // 0x41c180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c184:
    // 0x41c184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41c184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41c188:
    // 0x41c188: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_41c18c:
    if (ctx->pc == 0x41C18Cu) {
        ctx->pc = 0x41C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C188u;
        // 0x41c18c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C190u;
        goto label_41c190;
    }
    ctx->pc = 0x41C188u;
    {
        const bool branch_taken_0x41c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c188) {
            ctx->pc = 0x41C18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C188u;
            // 0x41c18c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C19Cu;
            goto label_41c19c;
        }
    }
    ctx->pc = 0x41C190u;
label_41c190:
    // 0x41c190: 0xc1070bc  jal         func_41C2F0
label_41c194:
    if (ctx->pc == 0x41C194u) {
        ctx->pc = 0x41C198u;
        goto label_41c198;
    }
    ctx->pc = 0x41C190u;
    SET_GPR_U32(ctx, 31, 0x41C198u);
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41C190u, 0x41C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C198u;
label_41c198:
    // 0x41c198: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41c198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41c19c:
    // 0x41c19c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c1a0:
    // 0x41c1a0: 0xc104ca6  jal         func_413298
label_41c1a4:
    if (ctx->pc == 0x41C1A4u) {
        ctx->pc = 0x41C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1A0u;
        // 0x41c1a4: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1A8u;
        goto label_41c1a8;
    }
    ctx->pc = 0x41C1A0u;
    SET_GPR_U32(ctx, 31, 0x41C1A8u);
    ctx->pc = 0x41C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C1A0u;
    // 0x41c1a4: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41C1A0u, 0x41C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C1A8u;
label_41c1a8:
    // 0x41c1a8: 0x8f86be08  lw          $a2, -0x41F8($gp)
    ctx->pc = 0x41c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41c1ac:
    // 0x41c1ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41c1b0:
    // 0x41c1b0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41c1b4:
    // 0x41c1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c1b8:
    // 0x41c1b8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x41c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41c1bc:
    // 0x41c1bc: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x41c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_41c1c0:
    // 0x41c1c0: 0x40f809  jalr        $v0
label_41c1c4:
    if (ctx->pc == 0x41C1C4u) {
        ctx->pc = 0x41C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1C0u;
        // 0x41c1c4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1C8u;
        goto label_41c1c8;
    }
    ctx->pc = 0x41C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C1C8u);
        ctx->pc = 0x41C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1C0u;
        // 0x41c1c4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C1C0u, 0x41C1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C1C8u;
label_41c1c8:
    // 0x41c1c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41c1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c1cc:
    // 0x41c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c1d0:
    // 0x41c1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c1d4:
    // 0x41c1d4: 0x3e00008  jr          $ra
label_41c1d8:
    if (ctx->pc == 0x41C1D8u) {
        ctx->pc = 0x41C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1D4u;
        // 0x41c1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1DCu;
        goto label_41c1dc;
    }
    ctx->pc = 0x41C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1D4u;
        // 0x41c1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C1DCu;
label_41c1dc:
    // 0x41c1dc: 0x0  nop
    ctx->pc = 0x41c1dcu;
    // NOP
    ctx->pc = 0x41c1e0u;
}
