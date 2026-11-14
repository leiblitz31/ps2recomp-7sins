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

// Function: sub_0049AA60
// Address: 0x49aa60 - 0x49aaf8
void sub_0049AA60_0x49aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AA60_0x49aa60");
#endif

    switch (ctx->pc) {
        case 0x49aa74u: goto label_49aa74;
        case 0x49aa7cu: goto label_49aa7c;
        case 0x49aaa4u: goto label_49aaa4;
        case 0x49aaccu: goto label_49aacc;
        case 0x49aae8u: goto label_49aae8;
        default: break;
    }

    ctx->pc = 0x49aa60u;

    // 0x49aa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49aa64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49aa68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49aa6c: 0xc126abe  jal         func_49AAF8
    ctx->pc = 0x49AA6Cu;
    SET_GPR_U32(ctx, 31, 0x49AA74u);
    ctx->pc = 0x49AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AA6Cu;
    // 0x49aa70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49AAF8u, 0x49AA6Cu, 0x49AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AA74u;
label_49aa74:
    // 0x49aa74: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x49AA74u;
    SET_GPR_U32(ctx, 31, 0x49AA7Cu);
    ctx->pc = 0x49AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AA74u;
    // 0x49aa78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49AA74u, 0x49AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AA7Cu;
label_49aa7c:
    // 0x49aa7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49aa80: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x49aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x49aa84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49AA84u;
    {
        const bool branch_taken_0x49aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA84u;
        // 0x49aa88: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa84) {
            ctx->pc = 0x49AAA8u;
            goto label_49aaa8;
        }
    }
    ctx->pc = 0x49AA8Cu;
    // 0x49aa8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49AA8Cu;
    {
        const bool branch_taken_0x49aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AA8Cu;
        // 0x49aa90: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa8c) {
            ctx->pc = 0x49AAACu;
            goto label_49aaac;
        }
    }
    ctx->pc = 0x49AA94u;
    // 0x49aa94: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49aa98: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x49aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x49aa9c: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49AA9Cu;
    SET_GPR_U32(ctx, 31, 0x49AAA4u);
    ctx->pc = 0x49AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AA9Cu;
    // 0x49aaa0: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49AA9Cu, 0x49AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AAA4u;
label_49aaa4:
    // 0x49aaa4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49aaa8:
    // 0x49aaa8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x49aaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_49aaac:
    // 0x49aaac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49AAACu;
    {
        const bool branch_taken_0x49aaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AAACu;
        // 0x49aab0: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aaac) {
            ctx->pc = 0x49AACCu;
            goto label_49aacc;
        }
    }
    ctx->pc = 0x49AAB4u;
    // 0x49aab4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49AAB4u;
    {
        const bool branch_taken_0x49aab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49aab4) {
            ctx->pc = 0x49AAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49AAB4u;
            // 0x49aab8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49AAD0u;
            goto label_49aad0;
        }
    }
    ctx->pc = 0x49AABCu;
    // 0x49aabc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49aac0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x49aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x49aac4: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49AAC4u;
    SET_GPR_U32(ctx, 31, 0x49AACCu);
    ctx->pc = 0x49AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AAC4u;
    // 0x49aac8: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49AAC4u, 0x49AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AACCu;
label_49aacc:
    // 0x49aacc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49aad0:
    // 0x49aad0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49aad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49aad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49AAD4u;
    {
        const bool branch_taken_0x49aad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AAD4u;
        // 0x49aad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aad4) {
            ctx->pc = 0x49AAE8u;
            goto label_49aae8;
        }
    }
    ctx->pc = 0x49AADCu;
    // 0x49aadc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49aae0: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49AAE0u;
    SET_GPR_U32(ctx, 31, 0x49AAE8u);
    ctx->pc = 0x49AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AAE0u;
    // 0x49aae4: 0x248481e0  addiu       $a0, $a0, -0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49AAE0u, 0x49AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AAE8u;
label_49aae8:
    // 0x49aae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49aae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49aaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49aaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49aaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x49AAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AAF0u;
        // 0x49aaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AAF8u;
}
