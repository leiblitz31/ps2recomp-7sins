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

// Function: sub_003ADF98
// Address: 0x3adf98 - 0x3ae058
void sub_003ADF98_0x3adf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADF98_0x3adf98");
#endif

    switch (ctx->pc) {
        case 0x3adfe8u: goto label_3adfe8;
        default: break;
    }

    ctx->pc = 0x3adf98u;

    // 0x3adf98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3adf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3adf9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3adf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3adfa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3adfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3adfa4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3adfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3adfa8: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3adfa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3adfac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3adfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3adfb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3adfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3adfb4: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3adfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3adfb8: 0x2852001f  slti        $s2, $v0, 0x1F
    ctx->pc = 0x3adfb8u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3adfbc: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3ADFBCu;
    {
        const bool branch_taken_0x3adfbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFBCu;
        // 0x3adfc0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adfbc) {
            ctx->pc = 0x3AE038u;
            goto label_3ae038;
        }
    }
    ctx->pc = 0x3ADFC4u;
    // 0x3adfc4: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x3adfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x3adfc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3adfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3adfcc: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x3adfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x3adfd0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3adfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3adfd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3adfd8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ADFD8u;
    {
        const bool branch_taken_0x3adfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adfd8) {
            ctx->pc = 0x3ADFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADFD8u;
            // 0x3adfdc: 0x8e020610  lw          $v0, 0x610($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADFFCu;
            goto label_3adffc;
        }
    }
    ctx->pc = 0x3ADFE0u;
    // 0x3adfe0: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x3ADFE0u;
    SET_GPR_U32(ctx, 31, 0x3ADFE8u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x3ADFE0u, 0x3ADFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFE8u;
label_3adfe8:
    // 0x3adfe8: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x3adfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x3adfec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3adfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3adff0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3adff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3adff4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3adff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3adff8: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
label_3adffc:
    // 0x3adffc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3adffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ae000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ae000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ae004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae008: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ae008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ae00c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ae00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ae010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ae010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae014: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ae014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae018: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3ae018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ae01c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3ae01cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3ae020: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x3ae020u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ae024: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x3ae024u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x3ae028: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3ae028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3ae02c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x3ae02cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x3ae030: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x3ae030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3ae034: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x3ae034u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
label_3ae038:
    // 0x3ae038: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3ae038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae03c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ae03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae040: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ae040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae044: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ae044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae04c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE04Cu;
        // 0x3ae050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE054u;
    // 0x3ae054: 0x0  nop
    ctx->pc = 0x3ae054u;
    // NOP
    ctx->pc = 0x3ae058u;
}
