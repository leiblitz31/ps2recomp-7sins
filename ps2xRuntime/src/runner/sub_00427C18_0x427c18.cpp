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

// Function: sub_00427C18
// Address: 0x427c18 - 0x428090
void sub_00427C18_0x427c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427C18_0x427c18");
#endif

    switch (ctx->pc) {
        case 0x427c68u: goto label_427c68;
        case 0x427c90u: goto label_427c90;
        case 0x427cb4u: goto label_427cb4;
        case 0x427e80u: goto label_427e80;
        case 0x428000u: goto label_428000;
        case 0x428028u: goto label_428028;
        case 0x42804cu: goto label_42804c;
        default: break;
    }

    ctx->pc = 0x427c18u;

    // 0x427c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x427c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x427c1c: 0x8f82be8c  lw          $v0, -0x4174($gp)
    ctx->pc = 0x427c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x427c20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x427c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x427c24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x427c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x427c28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x427c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x427c2c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x427c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x427c30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x427c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x427c34: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x427C34u;
    {
        const bool branch_taken_0x427c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427C34u;
        // 0x427c38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427c34) {
            ctx->pc = 0x427CDCu;
            goto label_427cdc;
        }
    }
    ctx->pc = 0x427C3Cu;
    // 0x427c3c: 0x9783bea8  lhu         $v1, -0x4158($gp)
    ctx->pc = 0x427c3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950568)));
    // 0x427c40: 0x9782beaa  lhu         $v0, -0x4156($gp)
    ctx->pc = 0x427c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    // 0x427c44: 0x10620109  beq         $v1, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x427C44u;
    {
        const bool branch_taken_0x427c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x427C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427C44u;
        // 0x427c48: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427c44) {
            ctx->pc = 0x42806Cu;
            goto label_42806c;
        }
    }
    ctx->pc = 0x427C4Cu;
    // 0x427c4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x427c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427c50: 0x10940107  beq         $a0, $s4, . + 4 + (0x107 << 2)
    ctx->pc = 0x427C50u;
    {
        const bool branch_taken_0x427c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x427C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427C50u;
        // 0x427c54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427c50) {
            ctx->pc = 0x428070u;
            goto label_428070;
        }
    }
    ctx->pc = 0x427C58u;
    // 0x427c58: 0xa780bea8  sh          $zero, -0x4158($gp)
    ctx->pc = 0x427c58u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950568), (uint16_t)GPR_U32(ctx, 0));
    // 0x427c5c: 0xa780beaa  sh          $zero, -0x4156($gp)
    ctx->pc = 0x427c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 0));
    // 0x427c60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x427c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x427c64: 0x0  nop
    ctx->pc = 0x427c64u;
    // NOP
label_427c68:
    // 0x427c68: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x427c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
    // 0x427c6c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x427c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427c70: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x427c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x427c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x427c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x427c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x427c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x427c7c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x427c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x427c80: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x427C80u;
    {
        const bool branch_taken_0x427c80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x427C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427C80u;
        // 0x427c84: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427c80) {
            ctx->pc = 0x427CBCu;
            goto label_427cbc;
        }
    }
    ctx->pc = 0x427C88u;
    // 0x427c88: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x427c88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x427c8c: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x427c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
label_427c90:
    // 0x427c90: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x427c90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x427c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x427c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427c98: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x427c98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x427c9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x427c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x427ca0: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x427ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x427ca4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x427ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x427ca8: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x427ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x427cac: 0xc10a0aa  jal         func_4282A8
    ctx->pc = 0x427CACu;
    SET_GPR_U32(ctx, 31, 0x427CB4u);
    ctx->pc = 0x427CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427CACu;
    // 0x427cb0: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4282A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4282A8u, 0x427CACu, 0x427CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427CB4u;
label_427cb4:
    // 0x427cb4: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x427CB4u;
    {
        const bool branch_taken_0x427cb4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x427CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CB4u;
        // 0x427cb8: 0x8f82bea4  lw          $v0, -0x415C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427cb4) {
            ctx->pc = 0x427C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427c90;
        }
    }
    ctx->pc = 0x427CBCu;
label_427cbc:
    // 0x427cbc: 0x9782ade6  lhu         $v0, -0x521A($gp)
    ctx->pc = 0x427cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
    // 0x427cc0: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x427cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x427cc4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x427cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x427cc8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x427cc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x427ccc: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x427CCCu;
    {
        const bool branch_taken_0x427ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x427CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CCCu;
        // 0x427cd0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ccc) {
            ctx->pc = 0x427C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427c68;
        }
    }
    ctx->pc = 0x427CD4u;
    // 0x427cd4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x427CD4u;
    {
        const bool branch_taken_0x427cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CD4u;
        // 0x427cd8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427cd4) {
            ctx->pc = 0x428070u;
            goto label_428070;
        }
    }
    ctx->pc = 0x427CDCu;
label_427cdc:
    // 0x427cdc: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x427CDCu;
    {
        const bool branch_taken_0x427cdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x427CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CDCu;
        // 0x427ce0: 0x8f84be24  lw          $a0, -0x41DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427cdc) {
            ctx->pc = 0x427D64u;
            goto label_427d64;
        }
    }
    ctx->pc = 0x427CE4u;
    // 0x427ce4: 0x8f84be3c  lw          $a0, -0x41C4($gp)
    ctx->pc = 0x427ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x427ce8: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x427ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x427cec: 0x8f86be88  lw          $a2, -0x4178($gp)
    ctx->pc = 0x427cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950536)));
    // 0x427cf0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x427cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x427cf4: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x427cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x427cf8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x427cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x427cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x427cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x427d00: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x427d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x427d04: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x427d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x427d08: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x427D08u;
    {
        const bool branch_taken_0x427d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x427D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D08u;
        // 0x427d0c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d08) {
            ctx->pc = 0x427D40u;
            goto label_427d40;
        }
    }
    ctx->pc = 0x427D10u;
    // 0x427d10: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x427d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x427d14: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x427d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x427d18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x427d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x427d1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x427d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x427d20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x427d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x427d24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x427d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x427d28: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x427d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x427d2c: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x427d2cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427d30: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x427d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x427d34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x427D34u;
    {
        const bool branch_taken_0x427d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D34u;
        // 0x427d38: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d34) {
            ctx->pc = 0x427D48u;
            goto label_427d48;
        }
    }
    ctx->pc = 0x427D3Cu;
    // 0x427d3c: 0x0  nop
    ctx->pc = 0x427d3cu;
    // NOP
label_427d40:
    // 0x427d40: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x427d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x427d44: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x427d44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
label_427d48:
    // 0x427d48: 0xaf80be88  sw          $zero, -0x4178($gp)
    ctx->pc = 0x427d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 0));
    // 0x427d4c: 0x8f83be8c  lw          $v1, -0x4174($gp)
    ctx->pc = 0x427d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x427d50: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x427d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x427d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x427d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x427d58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x427d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x427d5c: 0xaf83be8c  sw          $v1, -0x4174($gp)
    ctx->pc = 0x427d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 3));
    // 0x427d60: 0x8f84be24  lw          $a0, -0x41DC($gp)
    ctx->pc = 0x427d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
label_427d64:
    // 0x427d64: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x427D64u;
    {
        const bool branch_taken_0x427d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x427D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D64u;
        // 0x427d68: 0x8f83be8c  lw          $v1, -0x4174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d64) {
            ctx->pc = 0x427E1Cu;
            goto label_427e1c;
        }
    }
    ctx->pc = 0x427D6Cu;
    // 0x427d6c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x427d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x427d70: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x427D70u;
    {
        const bool branch_taken_0x427d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x427D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D70u;
        // 0x427d74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d70) {
            ctx->pc = 0x427E04u;
            goto label_427e04;
        }
    }
    ctx->pc = 0x427D78u;
    // 0x427d78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x427d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x427d7c: 0x71024b89  pcpyld      $t1, $t0, $v0
    ctx->pc = 0x427d7cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x427d80: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x427d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x427d84: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x427d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x427d88: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x427d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x427d8c: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x427d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x427d90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x427d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x427d94: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x427d94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x427d98: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x427d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x427d9c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x427d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x427da0: 0x70624b89  pcpyld      $t1, $v1, $v0
    ctx->pc = 0x427da0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427da4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x427da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x427da8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x427da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x427dac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x427dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x427db0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x427db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x427db4: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x427db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x427db8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x427db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x427dbc: 0x3c070600  lui         $a3, 0x600
    ctx->pc = 0x427dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1536 << 16));
    // 0x427dc0: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x427dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x427dc4: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x427dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x427dc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x427dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x427dcc: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x427dccu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x427dd0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x427dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x427dd4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x427dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x427dd8: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x427dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x427ddc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x427ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x427de0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x427de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x427de4: 0x70a84b89  pcpyld      $t1, $a1, $t0
    ctx->pc = 0x427de4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x427de8: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x427de8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x427dec: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x427decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x427df0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x427df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x427df4: 0x70e64b89  pcpyld      $t1, $a3, $a2
    ctx->pc = 0x427df4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x427df8: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x427df8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x427dfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x427DFCu;
    {
        const bool branch_taken_0x427dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427DFCu;
        // 0x427e00: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427dfc) {
            ctx->pc = 0x427E38u;
            goto label_427e38;
        }
    }
    ctx->pc = 0x427E04u;
label_427e04:
    // 0x427e04: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x427e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x427e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x427e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427e0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x427e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x427e10: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x427e10u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x427e14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x427E14u;
    {
        const bool branch_taken_0x427e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427E14u;
        // 0x427e18: 0x7c490000  sq          $t1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e14) {
            ctx->pc = 0x427E30u;
            goto label_427e30;
        }
    }
    ctx->pc = 0x427E1Cu;
label_427e1c:
    // 0x427e1c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x427e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x427e20: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x427e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x427e24: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x427e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x427e28: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x427e28u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x427e2c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x427e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_427e30:
    // 0x427e30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x427e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x427e34: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x427e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_427e38:
    // 0x427e38: 0xaf80be28  sw          $zero, -0x41D8($gp)
    ctx->pc = 0x427e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 0));
    // 0x427e3c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x427e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x427e40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x427E40u;
    {
        const bool branch_taken_0x427e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427E40u;
        // 0x427e44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e40) {
            ctx->pc = 0x427E50u;
            goto label_427e50;
        }
    }
    ctx->pc = 0x427E48u;
    // 0x427e48: 0x8f82be3c  lw          $v0, -0x41C4($gp)
    ctx->pc = 0x427e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x427e4c: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x427e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_427e50:
    // 0x427e50: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x427E50u;
    {
        const bool branch_taken_0x427e50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427E50u;
        // 0x427e54: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e50) {
            ctx->pc = 0x427F44u;
            goto label_427f44;
        }
    }
    ctx->pc = 0x427E58u;
    // 0x427e58: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x427e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x427e5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x427e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x427e60: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x427e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x427e64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x427E64u;
    {
        const bool branch_taken_0x427e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427E64u;
        // 0x427e68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e64) {
            ctx->pc = 0x427EA0u;
            goto label_427ea0;
        }
    }
    ctx->pc = 0x427E6Cu;
    // 0x427e6c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x427e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x427e70: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x427e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x427e74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x427e74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x427e78: 0xf  sync
    ctx->pc = 0x427e78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427e7c: 0x40f  sync.p
    ctx->pc = 0x427e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_427e80:
    // 0x427e80: 0x0  nop
    ctx->pc = 0x427e80u;
    // NOP
    // 0x427e84: 0x0  nop
    ctx->pc = 0x427e84u;
    // NOP
    // 0x427e88: 0x0  nop
    ctx->pc = 0x427e88u;
    // NOP
    // 0x427e8c: 0x0  nop
    ctx->pc = 0x427e8cu;
    // NOP
    // 0x427e90: 0x0  nop
    ctx->pc = 0x427e90u;
    // NOP
    // 0x427e94: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x427E94u;
    {
        const bool branch_taken_0x427e94 = (false);
        if (branch_taken_0x427e94) {
            ctx->pc = 0x427E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427e80;
        }
    }
    ctx->pc = 0x427E9Cu;
    // 0x427e9c: 0x0  nop
    ctx->pc = 0x427e9cu;
    // NOP
label_427ea0:
    // 0x427ea0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x427ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x427ea4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x427ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x427ea8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x427ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x427eac: 0x8f86be3c  lw          $a2, -0x41C4($gp)
    ctx->pc = 0x427eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x427eb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x427eb0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x427eb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x427eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x427eb8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x427eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x427ebc: 0x8f85be40  lw          $a1, -0x41C0($gp)
    ctx->pc = 0x427ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
    // 0x427ec0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x427ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x427ec4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x427ec4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 6)); // MMIO: 0x1000d080
    // 0x427ec8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x427ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x427ecc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x427eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x427ed0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x427ed0u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x427ed4: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x427ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x427ed8: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x427ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x427edc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x427edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x427ee0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x427ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x427ee4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x427ee4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x427ee8: 0xf  sync
    ctx->pc = 0x427ee8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427eec: 0x40f  sync.p
    ctx->pc = 0x427eecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427ef0: 0x8f84be28  lw          $a0, -0x41D8($gp)
    ctx->pc = 0x427ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950440)));
    // 0x427ef4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x427EF4u;
    {
        const bool branch_taken_0x427ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x427EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427EF4u;
        // 0x427ef8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ef4) {
            ctx->pc = 0x427F28u;
            goto label_427f28;
        }
    }
    ctx->pc = 0x427EFCu;
    // 0x427efc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x427efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x427f00: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x427f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x427f04: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x427f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x427f08: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x427F08u;
    {
        const bool branch_taken_0x427f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x427F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427F08u;
        // 0x427f0c: 0x8f82be40  lw          $v0, -0x41C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f08) {
            ctx->pc = 0x427F2Cu;
            goto label_427f2c;
        }
    }
    ctx->pc = 0x427F10u;
    // 0x427f10: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x427f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x427f14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x427f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x427f18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x427f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x427f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x427f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x427f20: 0xaf82be28  sw          $v0, -0x41D8($gp)
    ctx->pc = 0x427f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 2));
    // 0x427f24: 0x0  nop
    ctx->pc = 0x427f24u;
    // NOP
label_427f28:
    // 0x427f28: 0x8f82be40  lw          $v0, -0x41C0($gp)
    ctx->pc = 0x427f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950464)));
label_427f2c:
    // 0x427f2c: 0x8f83be3c  lw          $v1, -0x41C4($gp)
    ctx->pc = 0x427f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950460)));
    // 0x427f30: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x427f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x427f34: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x427f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x427f38: 0xaf82be40  sw          $v0, -0x41C0($gp)
    ctx->pc = 0x427f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 2));
    // 0x427f3c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x427f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x427f40: 0xaf83be3c  sw          $v1, -0x41C4($gp)
    ctx->pc = 0x427f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 3));
label_427f44:
    // 0x427f44: 0x8f84be4c  lw          $a0, -0x41B4($gp)
    ctx->pc = 0x427f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x427f48: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x427F48u;
    {
        const bool branch_taken_0x427f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x427F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427F48u;
        // 0x427f4c: 0x8f87be48  lw          $a3, -0x41B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f48) {
            ctx->pc = 0x427F8Cu;
            goto label_427f8c;
        }
    }
    ctx->pc = 0x427F50u;
    // 0x427f50: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x427F50u;
    {
        const bool branch_taken_0x427f50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x427F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427F50u;
        // 0x427f54: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f50) {
            ctx->pc = 0x427F80u;
            goto label_427f80;
        }
    }
    ctx->pc = 0x427F58u;
    // 0x427f58: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x427f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x427f5c: 0x8f85be44  lw          $a1, -0x41BC($gp)
    ctx->pc = 0x427f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x427f60: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x427f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x427f64: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x427f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x427f68: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x427f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x427f6c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x427f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x427f70: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x427f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x427f74: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x427f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x427f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x427F78u;
    {
        const bool branch_taken_0x427f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427F78u;
        // 0x427f7c: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f78) {
            ctx->pc = 0x427F8Cu;
            goto label_427f8c;
        }
    }
    ctx->pc = 0x427F80u;
label_427f80:
    // 0x427f80: 0x8f83be44  lw          $v1, -0x41BC($gp)
    ctx->pc = 0x427f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x427f84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x427f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x427f88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x427f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_427f8c:
    // 0x427f8c: 0x8f85be7c  lw          $a1, -0x4184($gp)
    ctx->pc = 0x427f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x427f90: 0x8f82be80  lw          $v0, -0x4180($gp)
    ctx->pc = 0x427f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950528)));
    // 0x427f94: 0x8f84be84  lw          $a0, -0x417C($gp)
    ctx->pc = 0x427f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950532)));
    // 0x427f98: 0x8f83be8c  lw          $v1, -0x4174($gp)
    ctx->pc = 0x427f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950540)));
    // 0x427f9c: 0xaf85be50  sw          $a1, -0x41B0($gp)
    ctx->pc = 0x427f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 5));
    // 0x427fa0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x427fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x427fa4: 0xaf82be44  sw          $v0, -0x41BC($gp)
    ctx->pc = 0x427fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 2));
    // 0x427fa8: 0xaf83be4c  sw          $v1, -0x41B4($gp)
    ctx->pc = 0x427fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 3));
    // 0x427fac: 0xaf84be48  sw          $a0, -0x41B8($gp)
    ctx->pc = 0x427facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 4));
    // 0x427fb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x427FB0u;
    {
        const bool branch_taken_0x427fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x427FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427FB0u;
        // 0x427fb4: 0xaf85be7c  sw          $a1, -0x4184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427fb0) {
            ctx->pc = 0x427FC0u;
            goto label_427fc0;
        }
    }
    ctx->pc = 0x427FB8u;
    // 0x427fb8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x427fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x427fbc: 0xaf82be7c  sw          $v0, -0x4184($gp)
    ctx->pc = 0x427fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 2));
label_427fc0:
    // 0x427fc0: 0x9783bea8  lhu         $v1, -0x4158($gp)
    ctx->pc = 0x427fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950568)));
    // 0x427fc4: 0x9782beaa  lhu         $v0, -0x4156($gp)
    ctx->pc = 0x427fc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    // 0x427fc8: 0xaf80be24  sw          $zero, -0x41DC($gp)
    ctx->pc = 0x427fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 0));
    // 0x427fcc: 0xaf80be20  sw          $zero, -0x41E0($gp)
    ctx->pc = 0x427fccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 0));
    // 0x427fd0: 0xaf80be80  sw          $zero, -0x4180($gp)
    ctx->pc = 0x427fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950528), GPR_U32(ctx, 0));
    // 0x427fd4: 0xaf80be84  sw          $zero, -0x417C($gp)
    ctx->pc = 0x427fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950532), GPR_U32(ctx, 0));
    // 0x427fd8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x427FD8u;
    {
        const bool branch_taken_0x427fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x427FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427FD8u;
        // 0x427fdc: 0xaf80be8c  sw          $zero, -0x4174($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427fd8) {
            ctx->pc = 0x42806Cu;
            goto label_42806c;
        }
    }
    ctx->pc = 0x427FE0u;
    // 0x427fe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x427fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427fe4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x427fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427fe8: 0x10940021  beq         $a0, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x427FE8u;
    {
        const bool branch_taken_0x427fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x427FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427FE8u;
        // 0x427fec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427fe8) {
            ctx->pc = 0x428070u;
            goto label_428070;
        }
    }
    ctx->pc = 0x427FF0u;
    // 0x427ff0: 0xa780bea8  sh          $zero, -0x4158($gp)
    ctx->pc = 0x427ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950568), (uint16_t)GPR_U32(ctx, 0));
    // 0x427ff4: 0xa780beaa  sh          $zero, -0x4156($gp)
    ctx->pc = 0x427ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 0));
    // 0x427ff8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x427ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x427ffc: 0x0  nop
    ctx->pc = 0x427ffcu;
    // NOP
label_428000:
    // 0x428000: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x428000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
    // 0x428004: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x428004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428008: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x428008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42800c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x428010: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x428010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x428014: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x428014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x428018: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x428018u;
    {
        const bool branch_taken_0x428018 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x42801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428018u;
        // 0x42801c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428018) {
            ctx->pc = 0x428054u;
            goto label_428054;
        }
    }
    ctx->pc = 0x428020u;
    // 0x428020: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x428020u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x428024: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x428024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
label_428028:
    // 0x428028: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x428028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x42802c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428030: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x428030u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x428034: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x428034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x428038: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x428038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x42803c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x428040: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x428040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x428044: 0xc10a0aa  jal         func_4282A8
    ctx->pc = 0x428044u;
    SET_GPR_U32(ctx, 31, 0x42804Cu);
    ctx->pc = 0x428048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428044u;
    // 0x428048: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4282A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4282A8u, 0x428044u, 0x42804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42804Cu;
label_42804c:
    // 0x42804c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x42804Cu;
    {
        const bool branch_taken_0x42804c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x428050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42804Cu;
        // 0x428050: 0x8f82bea4  lw          $v0, -0x415C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42804c) {
            ctx->pc = 0x428028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428028;
        }
    }
    ctx->pc = 0x428054u;
label_428054:
    // 0x428054: 0x9782ade6  lhu         $v0, -0x521A($gp)
    ctx->pc = 0x428054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
    // 0x428058: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x428058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x42805c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x42805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x428060: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x428060u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x428064: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x428064u;
    {
        const bool branch_taken_0x428064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x428068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428064u;
        // 0x428068: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428064) {
            ctx->pc = 0x428000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428000;
        }
    }
    ctx->pc = 0x42806Cu;
label_42806c:
    // 0x42806c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x42806cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_428070:
    // 0x428070: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x428070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x428074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x428074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x428078: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x428078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42807c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x42807cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x428080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428084: 0x3e00008  jr          $ra
    ctx->pc = 0x428084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428084u;
        // 0x428088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42808Cu;
    // 0x42808c: 0x0  nop
    ctx->pc = 0x42808cu;
    // NOP
    ctx->pc = 0x428090u;
}
