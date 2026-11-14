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

// Function: sub_00329AB8
// Address: 0x329ab8 - 0x329b50
void sub_00329AB8_0x329ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329AB8_0x329ab8");
#endif

    switch (ctx->pc) {
        case 0x329b34u: goto label_329b34;
        default: break;
    }

    ctx->pc = 0x329ab8u;

    // 0x329ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329abc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x329abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x329ac4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x329ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x329ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329acc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x329accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x329ad0: 0x90c4002e  lbu         $a0, 0x2E($a2)
    ctx->pc = 0x329ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x329ad4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x329ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x329ad8: 0x30470004  andi        $a3, $v0, 0x4
    ctx->pc = 0x329ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x329adc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x329adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x329ae0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x329ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x329ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x329AE4u;
    {
        const bool branch_taken_0x329ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AE4u;
        // 0x329ae8: 0x651818  mult        $v1, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ae4) {
            ctx->pc = 0x329AF8u;
            goto label_329af8;
        }
    }
    ctx->pc = 0x329AECu;
    // 0x329aec: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x329aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x329af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x329AF0u;
    {
        const bool branch_taken_0x329af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF0u;
        // 0x329af4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329af0) {
            ctx->pc = 0x329AFCu;
            goto label_329afc;
        }
    }
    ctx->pc = 0x329AF8u;
label_329af8:
    // 0x329af8: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x329af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_329afc:
    // 0x329afc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x329afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x329b00: 0x8cd00030  lw          $s0, 0x30($a2)
    ctx->pc = 0x329b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x329b04: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x329b08: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x329b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x329b0c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x329b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x329b10: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x329b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x329b14: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x329b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x329b18: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x329b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x329b1c: 0x24c40048  addiu       $a0, $a2, 0x48
    ctx->pc = 0x329b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x329b20: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x329b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x329b24: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x329b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x329b28: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x329b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329b2c: 0xc0e3e3a  jal         func_38F8E8
    ctx->pc = 0x329B2Cu;
    SET_GPR_U32(ctx, 31, 0x329B34u);
    ctx->pc = 0x329B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B2Cu;
    // 0x329b30: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8E8u, 0x329B2Cu, 0x329B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B34u;
label_329b34:
    // 0x329b34: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x329b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x329b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329b3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x329b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x329b40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x329b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329b44: 0x3e00008  jr          $ra
    ctx->pc = 0x329B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B44u;
        // 0x329b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B4Cu;
    // 0x329b4c: 0x0  nop
    ctx->pc = 0x329b4cu;
    // NOP
    ctx->pc = 0x329b50u;
}
