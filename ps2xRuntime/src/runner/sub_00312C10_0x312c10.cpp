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

// Function: sub_00312C10
// Address: 0x312c10 - 0x312d68
void sub_00312C10_0x312c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312C10_0x312c10");
#endif

    switch (ctx->pc) {
        case 0x312c10u: goto label_312c10;
        case 0x312c14u: goto label_312c14;
        case 0x312c18u: goto label_312c18;
        case 0x312c1cu: goto label_312c1c;
        case 0x312c20u: goto label_312c20;
        case 0x312c24u: goto label_312c24;
        case 0x312c28u: goto label_312c28;
        case 0x312c2cu: goto label_312c2c;
        case 0x312c30u: goto label_312c30;
        case 0x312c34u: goto label_312c34;
        case 0x312c38u: goto label_312c38;
        case 0x312c3cu: goto label_312c3c;
        case 0x312c40u: goto label_312c40;
        case 0x312c44u: goto label_312c44;
        case 0x312c48u: goto label_312c48;
        case 0x312c4cu: goto label_312c4c;
        case 0x312c50u: goto label_312c50;
        case 0x312c54u: goto label_312c54;
        case 0x312c58u: goto label_312c58;
        case 0x312c5cu: goto label_312c5c;
        case 0x312c60u: goto label_312c60;
        case 0x312c64u: goto label_312c64;
        case 0x312c68u: goto label_312c68;
        case 0x312c6cu: goto label_312c6c;
        case 0x312c70u: goto label_312c70;
        case 0x312c74u: goto label_312c74;
        case 0x312c78u: goto label_312c78;
        case 0x312c7cu: goto label_312c7c;
        case 0x312c80u: goto label_312c80;
        case 0x312c84u: goto label_312c84;
        case 0x312c88u: goto label_312c88;
        case 0x312c8cu: goto label_312c8c;
        case 0x312c90u: goto label_312c90;
        case 0x312c94u: goto label_312c94;
        case 0x312c98u: goto label_312c98;
        case 0x312c9cu: goto label_312c9c;
        case 0x312ca0u: goto label_312ca0;
        case 0x312ca4u: goto label_312ca4;
        case 0x312ca8u: goto label_312ca8;
        case 0x312cacu: goto label_312cac;
        case 0x312cb0u: goto label_312cb0;
        case 0x312cb4u: goto label_312cb4;
        case 0x312cb8u: goto label_312cb8;
        case 0x312cbcu: goto label_312cbc;
        case 0x312cc0u: goto label_312cc0;
        case 0x312cc4u: goto label_312cc4;
        case 0x312cc8u: goto label_312cc8;
        case 0x312cccu: goto label_312ccc;
        case 0x312cd0u: goto label_312cd0;
        case 0x312cd4u: goto label_312cd4;
        case 0x312cd8u: goto label_312cd8;
        case 0x312cdcu: goto label_312cdc;
        case 0x312ce0u: goto label_312ce0;
        case 0x312ce4u: goto label_312ce4;
        case 0x312ce8u: goto label_312ce8;
        case 0x312cecu: goto label_312cec;
        case 0x312cf0u: goto label_312cf0;
        case 0x312cf4u: goto label_312cf4;
        case 0x312cf8u: goto label_312cf8;
        case 0x312cfcu: goto label_312cfc;
        case 0x312d00u: goto label_312d00;
        case 0x312d04u: goto label_312d04;
        case 0x312d08u: goto label_312d08;
        case 0x312d0cu: goto label_312d0c;
        case 0x312d10u: goto label_312d10;
        case 0x312d14u: goto label_312d14;
        case 0x312d18u: goto label_312d18;
        case 0x312d1cu: goto label_312d1c;
        case 0x312d20u: goto label_312d20;
        case 0x312d24u: goto label_312d24;
        case 0x312d28u: goto label_312d28;
        case 0x312d2cu: goto label_312d2c;
        case 0x312d30u: goto label_312d30;
        case 0x312d34u: goto label_312d34;
        case 0x312d38u: goto label_312d38;
        case 0x312d3cu: goto label_312d3c;
        case 0x312d40u: goto label_312d40;
        case 0x312d44u: goto label_312d44;
        case 0x312d48u: goto label_312d48;
        case 0x312d4cu: goto label_312d4c;
        case 0x312d50u: goto label_312d50;
        case 0x312d54u: goto label_312d54;
        case 0x312d58u: goto label_312d58;
        case 0x312d5cu: goto label_312d5c;
        case 0x312d60u: goto label_312d60;
        case 0x312d64u: goto label_312d64;
        default: break;
    }

    ctx->pc = 0x312c10u;

label_312c10:
    // 0x312c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x312c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_312c14:
    // 0x312c14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x312c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_312c18:
    // 0x312c18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x312c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_312c1c:
    // 0x312c1c: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x312c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_312c20:
    // 0x312c20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x312c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_312c24:
    // 0x312c24: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x312c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_312c28:
    // 0x312c28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x312c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_312c2c:
    // 0x312c2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x312c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_312c30:
    // 0x312c30: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x312c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_312c34:
    // 0x312c34: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x312c34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_312c38:
    // 0x312c38: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x312c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_312c3c:
    // 0x312c3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x312c3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312c40:
    // 0x312c40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_312c44:
    if (ctx->pc == 0x312C44u) {
        ctx->pc = 0x312C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C40u;
        // 0x312c44: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312C48u;
        goto label_312c48;
    }
    ctx->pc = 0x312C40u;
    {
        const bool branch_taken_0x312c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C40u;
        // 0x312c44: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c40) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C48u;
label_312c48:
    // 0x312c48: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x312c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_312c4c:
    // 0x312c4c: 0x24510037  addiu       $s1, $v0, 0x37
    ctx->pc = 0x312c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
label_312c50:
    // 0x312c50: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x312c50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_312c54:
    // 0x312c54: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_312c58:
    if (ctx->pc == 0x312C58u) {
        ctx->pc = 0x312C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C54u;
        // 0x312c58: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312C5Cu;
        goto label_312c5c;
    }
    ctx->pc = 0x312C54u;
    {
        const bool branch_taken_0x312c54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C54u;
        // 0x312c58: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c54) {
            ctx->pc = 0x312C64u;
            goto label_312c64;
        }
    }
    ctx->pc = 0x312C5Cu;
label_312c5c:
    // 0x312c5c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x312c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_312c60:
    // 0x312c60: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x312c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312c64:
    // 0x312c64: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x312c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_312c68:
    // 0x312c68: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x312c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_312c6c:
    // 0x312c6c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x312c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_312c70:
    // 0x312c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312c74:
    // 0x312c74: 0x40f809  jalr        $v0
label_312c78:
    if (ctx->pc == 0x312C78u) {
        ctx->pc = 0x312C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C74u;
        // 0x312c78: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312C7Cu;
        goto label_312c7c;
    }
    ctx->pc = 0x312C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312C7Cu);
        ctx->pc = 0x312C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C74u;
        // 0x312c78: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312C74u, 0x312C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312C7Cu;
label_312c7c:
    // 0x312c7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312c80:
    // 0x312c80: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_312c84:
    if (ctx->pc == 0x312C84u) {
        ctx->pc = 0x312C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C80u;
        // 0x312c84: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312C88u;
        goto label_312c88;
    }
    ctx->pc = 0x312C80u;
    {
        const bool branch_taken_0x312c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C80u;
        // 0x312c84: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c80) {
            ctx->pc = 0x312CB8u;
            goto label_312cb8;
        }
    }
    ctx->pc = 0x312C88u;
label_312c88:
    // 0x312c88: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x312c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_312c8c:
    // 0x312c8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x312c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_312c90:
    // 0x312c90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x312c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_312c94:
    // 0x312c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312c98:
    // 0x312c98: 0xc1035f6  jal         func_40D7D8
label_312c9c:
    if (ctx->pc == 0x312C9Cu) {
        ctx->pc = 0x312C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C98u;
        // 0x312c9c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312CA0u;
        goto label_312ca0;
    }
    ctx->pc = 0x312C98u;
    SET_GPR_U32(ctx, 31, 0x312CA0u);
    ctx->pc = 0x312C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C98u;
    // 0x312c9c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x312C98u, 0x312CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CA0u;
label_312ca0:
    // 0x312ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x312ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_312ca4:
    // 0x312ca4: 0xc103628  jal         func_40D8A0
label_312ca8:
    if (ctx->pc == 0x312CA8u) {
        ctx->pc = 0x312CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CA4u;
        // 0x312ca8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312CACu;
        goto label_312cac;
    }
    ctx->pc = 0x312CA4u;
    SET_GPR_U32(ctx, 31, 0x312CACu);
    ctx->pc = 0x312CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312CA4u;
    // 0x312ca8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x312CA4u, 0x312CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CACu;
label_312cac:
    // 0x312cac: 0x10000025  b           . + 4 + (0x25 << 2)
label_312cb0:
    if (ctx->pc == 0x312CB0u) {
        ctx->pc = 0x312CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CACu;
        // 0x312cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312CB4u;
        goto label_312cb4;
    }
    ctx->pc = 0x312CACu;
    {
        const bool branch_taken_0x312cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CACu;
        // 0x312cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cac) {
            ctx->pc = 0x312D44u;
            goto label_312d44;
        }
    }
    ctx->pc = 0x312CB4u;
label_312cb4:
    // 0x312cb4: 0x0  nop
    ctx->pc = 0x312cb4u;
    // NOP
label_312cb8:
    // 0x312cb8: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x312cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_312cbc:
    // 0x312cbc: 0xa4d3001c  sh          $s3, 0x1C($a2)
    ctx->pc = 0x312cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 19));
label_312cc0:
    // 0x312cc0: 0xa4d0001e  sh          $s0, 0x1E($a2)
    ctx->pc = 0x312cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 16));
label_312cc4:
    // 0x312cc4: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x312cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_312cc8:
    // 0x312cc8: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x312cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_312ccc:
    // 0x312ccc: 0x6aa4000f  ldl         $a0, 0xF($s5)
    ctx->pc = 0x312cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_312cd0:
    // 0x312cd0: 0x6ea40008  ldr         $a0, 0x8($s5)
    ctx->pc = 0x312cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_312cd4:
    // 0x312cd4: 0x6aa50017  ldl         $a1, 0x17($s5)
    ctx->pc = 0x312cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_312cd8:
    // 0x312cd8: 0x6ea50010  ldr         $a1, 0x10($s5)
    ctx->pc = 0x312cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_312cdc:
    // 0x312cdc: 0xb0c2000b  sdl         $v0, 0xB($a2)
    ctx->pc = 0x312cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_312ce0:
    // 0x312ce0: 0xb4c20004  sdr         $v0, 0x4($a2)
    ctx->pc = 0x312ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312ce4:
    // 0x312ce4: 0xb0c40013  sdl         $a0, 0x13($a2)
    ctx->pc = 0x312ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_312ce8:
    // 0x312ce8: 0xb4c4000c  sdr         $a0, 0xC($a2)
    ctx->pc = 0x312ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312cec:
    // 0x312cec: 0xb0c5001b  sdl         $a1, 0x1B($a2)
    ctx->pc = 0x312cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_312cf0:
    // 0x312cf0: 0xb4c50014  sdr         $a1, 0x14($a2)
    ctx->pc = 0x312cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_312cf4:
    // 0x312cf4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_312cf8:
    if (ctx->pc == 0x312CF8u) {
        ctx->pc = 0x312CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CF4u;
        // 0x312cf8: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312CFCu;
        goto label_312cfc;
    }
    ctx->pc = 0x312CF4u;
    {
        const bool branch_taken_0x312cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CF4u;
        // 0x312cf8: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cf4) {
            ctx->pc = 0x312D1Cu;
            goto label_312d1c;
        }
    }
    ctx->pc = 0x312CFCu;
label_312cfc:
    // 0x312cfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_312d00:
    // 0x312d00: 0x24c30037  addiu       $v1, $a2, 0x37
    ctx->pc = 0x312d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 55));
label_312d04:
    // 0x312d04: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x312d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_312d08:
    // 0x312d08: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x312d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_312d0c:
    // 0x312d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_312d10:
    // 0x312d10: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x312d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
label_312d14:
    // 0x312d14: 0x10000002  b           . + 4 + (0x2 << 2)
label_312d18:
    if (ctx->pc == 0x312D18u) {
        ctx->pc = 0x312D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D14u;
        // 0x312d18: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312D1Cu;
        goto label_312d1c;
    }
    ctx->pc = 0x312D14u;
    {
        const bool branch_taken_0x312d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D14u;
        // 0x312d18: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d14) {
            ctx->pc = 0x312D20u;
            goto label_312d20;
        }
    }
    ctx->pc = 0x312D1Cu;
label_312d1c:
    // 0x312d1c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x312d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
label_312d20:
    // 0x312d20: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_312d24:
    if (ctx->pc == 0x312D24u) {
        ctx->pc = 0x312D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D20u;
        // 0x312d24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312D28u;
        goto label_312d28;
    }
    ctx->pc = 0x312D20u;
    {
        const bool branch_taken_0x312d20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D20u;
        // 0x312d24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d20) {
            ctx->pc = 0x312D3Cu;
            goto label_312d3c;
        }
    }
    ctx->pc = 0x312D28u;
label_312d28:
    // 0x312d28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_312d2c:
    // 0x312d2c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x312d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_312d30:
    // 0x312d30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_312d34:
    // 0x312d34: 0x10000002  b           . + 4 + (0x2 << 2)
label_312d38:
    if (ctx->pc == 0x312D38u) {
        ctx->pc = 0x312D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D34u;
        // 0x312d38: 0xacc30024  sw          $v1, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312D3Cu;
        goto label_312d3c;
    }
    ctx->pc = 0x312D34u;
    {
        const bool branch_taken_0x312d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D34u;
        // 0x312d38: 0xacc30024  sw          $v1, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d34) {
            ctx->pc = 0x312D40u;
            goto label_312d40;
        }
    }
    ctx->pc = 0x312D3Cu;
label_312d3c:
    // 0x312d3c: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x312d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
label_312d40:
    // 0x312d40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x312d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312d44:
    // 0x312d44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x312d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_312d48:
    // 0x312d48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x312d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_312d4c:
    // 0x312d4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x312d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_312d50:
    // 0x312d50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x312d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_312d54:
    // 0x312d54: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x312d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_312d58:
    // 0x312d58: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x312d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312d5c:
    // 0x312d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_312d60:
    // 0x312d60: 0x3e00008  jr          $ra
label_312d64:
    if (ctx->pc == 0x312D64u) {
        ctx->pc = 0x312D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D60u;
        // 0x312d64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312D68u;
        goto label_fallthrough_0x312d60;
    }
    ctx->pc = 0x312D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D60u;
        // 0x312d64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x312d60:
    ctx->pc = 0x312D68u;
}
