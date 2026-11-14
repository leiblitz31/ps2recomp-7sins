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

// Function: sub_004979E8
// Address: 0x4979e8 - 0x497c58
void sub_004979E8_0x4979e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004979E8_0x4979e8");
#endif

    switch (ctx->pc) {
        case 0x4979e8u: goto label_4979e8;
        case 0x4979ecu: goto label_4979ec;
        case 0x4979f0u: goto label_4979f0;
        case 0x4979f4u: goto label_4979f4;
        case 0x4979f8u: goto label_4979f8;
        case 0x4979fcu: goto label_4979fc;
        case 0x497a00u: goto label_497a00;
        case 0x497a04u: goto label_497a04;
        case 0x497a08u: goto label_497a08;
        case 0x497a0cu: goto label_497a0c;
        case 0x497a10u: goto label_497a10;
        case 0x497a14u: goto label_497a14;
        case 0x497a18u: goto label_497a18;
        case 0x497a1cu: goto label_497a1c;
        case 0x497a20u: goto label_497a20;
        case 0x497a24u: goto label_497a24;
        case 0x497a28u: goto label_497a28;
        case 0x497a2cu: goto label_497a2c;
        case 0x497a30u: goto label_497a30;
        case 0x497a34u: goto label_497a34;
        case 0x497a38u: goto label_497a38;
        case 0x497a3cu: goto label_497a3c;
        case 0x497a40u: goto label_497a40;
        case 0x497a44u: goto label_497a44;
        case 0x497a48u: goto label_497a48;
        case 0x497a4cu: goto label_497a4c;
        case 0x497a50u: goto label_497a50;
        case 0x497a54u: goto label_497a54;
        case 0x497a58u: goto label_497a58;
        case 0x497a5cu: goto label_497a5c;
        case 0x497a60u: goto label_497a60;
        case 0x497a64u: goto label_497a64;
        case 0x497a68u: goto label_497a68;
        case 0x497a6cu: goto label_497a6c;
        case 0x497a70u: goto label_497a70;
        case 0x497a74u: goto label_497a74;
        case 0x497a78u: goto label_497a78;
        case 0x497a7cu: goto label_497a7c;
        case 0x497a80u: goto label_497a80;
        case 0x497a84u: goto label_497a84;
        case 0x497a88u: goto label_497a88;
        case 0x497a8cu: goto label_497a8c;
        case 0x497a90u: goto label_497a90;
        case 0x497a94u: goto label_497a94;
        case 0x497a98u: goto label_497a98;
        case 0x497a9cu: goto label_497a9c;
        case 0x497aa0u: goto label_497aa0;
        case 0x497aa4u: goto label_497aa4;
        case 0x497aa8u: goto label_497aa8;
        case 0x497aacu: goto label_497aac;
        case 0x497ab0u: goto label_497ab0;
        case 0x497ab4u: goto label_497ab4;
        case 0x497ab8u: goto label_497ab8;
        case 0x497abcu: goto label_497abc;
        case 0x497ac0u: goto label_497ac0;
        case 0x497ac4u: goto label_497ac4;
        case 0x497ac8u: goto label_497ac8;
        case 0x497accu: goto label_497acc;
        case 0x497ad0u: goto label_497ad0;
        case 0x497ad4u: goto label_497ad4;
        case 0x497ad8u: goto label_497ad8;
        case 0x497adcu: goto label_497adc;
        case 0x497ae0u: goto label_497ae0;
        case 0x497ae4u: goto label_497ae4;
        case 0x497ae8u: goto label_497ae8;
        case 0x497aecu: goto label_497aec;
        case 0x497af0u: goto label_497af0;
        case 0x497af4u: goto label_497af4;
        case 0x497af8u: goto label_497af8;
        case 0x497afcu: goto label_497afc;
        case 0x497b00u: goto label_497b00;
        case 0x497b04u: goto label_497b04;
        case 0x497b08u: goto label_497b08;
        case 0x497b0cu: goto label_497b0c;
        case 0x497b10u: goto label_497b10;
        case 0x497b14u: goto label_497b14;
        case 0x497b18u: goto label_497b18;
        case 0x497b1cu: goto label_497b1c;
        case 0x497b20u: goto label_497b20;
        case 0x497b24u: goto label_497b24;
        case 0x497b28u: goto label_497b28;
        case 0x497b2cu: goto label_497b2c;
        case 0x497b30u: goto label_497b30;
        case 0x497b34u: goto label_497b34;
        case 0x497b38u: goto label_497b38;
        case 0x497b3cu: goto label_497b3c;
        case 0x497b40u: goto label_497b40;
        case 0x497b44u: goto label_497b44;
        case 0x497b48u: goto label_497b48;
        case 0x497b4cu: goto label_497b4c;
        case 0x497b50u: goto label_497b50;
        case 0x497b54u: goto label_497b54;
        case 0x497b58u: goto label_497b58;
        case 0x497b5cu: goto label_497b5c;
        case 0x497b60u: goto label_497b60;
        case 0x497b64u: goto label_497b64;
        case 0x497b68u: goto label_497b68;
        case 0x497b6cu: goto label_497b6c;
        case 0x497b70u: goto label_497b70;
        case 0x497b74u: goto label_497b74;
        case 0x497b78u: goto label_497b78;
        case 0x497b7cu: goto label_497b7c;
        case 0x497b80u: goto label_497b80;
        case 0x497b84u: goto label_497b84;
        case 0x497b88u: goto label_497b88;
        case 0x497b8cu: goto label_497b8c;
        case 0x497b90u: goto label_497b90;
        case 0x497b94u: goto label_497b94;
        case 0x497b98u: goto label_497b98;
        case 0x497b9cu: goto label_497b9c;
        case 0x497ba0u: goto label_497ba0;
        case 0x497ba4u: goto label_497ba4;
        case 0x497ba8u: goto label_497ba8;
        case 0x497bacu: goto label_497bac;
        case 0x497bb0u: goto label_497bb0;
        case 0x497bb4u: goto label_497bb4;
        case 0x497bb8u: goto label_497bb8;
        case 0x497bbcu: goto label_497bbc;
        case 0x497bc0u: goto label_497bc0;
        case 0x497bc4u: goto label_497bc4;
        case 0x497bc8u: goto label_497bc8;
        case 0x497bccu: goto label_497bcc;
        case 0x497bd0u: goto label_497bd0;
        case 0x497bd4u: goto label_497bd4;
        case 0x497bd8u: goto label_497bd8;
        case 0x497bdcu: goto label_497bdc;
        case 0x497be0u: goto label_497be0;
        case 0x497be4u: goto label_497be4;
        case 0x497be8u: goto label_497be8;
        case 0x497becu: goto label_497bec;
        case 0x497bf0u: goto label_497bf0;
        case 0x497bf4u: goto label_497bf4;
        case 0x497bf8u: goto label_497bf8;
        case 0x497bfcu: goto label_497bfc;
        case 0x497c00u: goto label_497c00;
        case 0x497c04u: goto label_497c04;
        case 0x497c08u: goto label_497c08;
        case 0x497c0cu: goto label_497c0c;
        case 0x497c10u: goto label_497c10;
        case 0x497c14u: goto label_497c14;
        case 0x497c18u: goto label_497c18;
        case 0x497c1cu: goto label_497c1c;
        case 0x497c20u: goto label_497c20;
        case 0x497c24u: goto label_497c24;
        case 0x497c28u: goto label_497c28;
        case 0x497c2cu: goto label_497c2c;
        case 0x497c30u: goto label_497c30;
        case 0x497c34u: goto label_497c34;
        case 0x497c38u: goto label_497c38;
        case 0x497c3cu: goto label_497c3c;
        case 0x497c40u: goto label_497c40;
        case 0x497c44u: goto label_497c44;
        case 0x497c48u: goto label_497c48;
        case 0x497c4cu: goto label_497c4c;
        case 0x497c50u: goto label_497c50;
        case 0x497c54u: goto label_497c54;
        default: break;
    }

    ctx->pc = 0x4979e8u;

label_4979e8:
    // 0x4979e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4979e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4979ec:
    // 0x4979ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4979ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4979f0:
    // 0x4979f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4979f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4979f4:
    // 0x4979f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4979f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4979f8:
    // 0x4979f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4979f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4979fc:
    // 0x4979fc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4979fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_497a00:
    // 0x497a00: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x497a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_497a04:
    // 0x497a04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x497a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_497a08:
    // 0x497a08: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x497a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_497a0c:
    // 0x497a0c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x497a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_497a10:
    // 0x497a10: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x497a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_497a14:
    // 0x497a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_497a18:
    // 0x497a18: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x497a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_497a1c:
    // 0x497a1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_497a20:
    if (ctx->pc == 0x497A20u) {
        ctx->pc = 0x497A24u;
        goto label_497a24;
    }
    ctx->pc = 0x497A1Cu;
    {
        const bool branch_taken_0x497a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x497a1c) {
            ctx->pc = 0x497A2Cu;
            goto label_497a2c;
        }
    }
    ctx->pc = 0x497A24u;
label_497a24:
    // 0x497a24: 0x10000080  b           . + 4 + (0x80 << 2)
label_497a28:
    if (ctx->pc == 0x497A28u) {
        ctx->pc = 0x497A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A24u;
        // 0x497a28: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A2Cu;
        goto label_497a2c;
    }
    ctx->pc = 0x497A24u;
    {
        const bool branch_taken_0x497a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A24u;
        // 0x497a28: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a24) {
            ctx->pc = 0x497C28u;
            goto label_497c28;
        }
    }
    ctx->pc = 0x497A2Cu;
label_497a2c:
    // 0x497a2c: 0xc12606a  jal         func_4981A8
label_497a30:
    if (ctx->pc == 0x497A30u) {
        ctx->pc = 0x497A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A2Cu;
        // 0x497a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A34u;
        goto label_497a34;
    }
    ctx->pc = 0x497A2Cu;
    SET_GPR_U32(ctx, 31, 0x497A34u);
    ctx->pc = 0x497A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A2Cu;
    // 0x497a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4981A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4981A8u, 0x497A2Cu, 0x497A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497A34u;
label_497a34:
    // 0x497a34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x497a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_497a38:
    // 0x497a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497a3c:
    // 0x497a3c: 0xc127ca4  jal         func_49F290
label_497a40:
    if (ctx->pc == 0x497A40u) {
        ctx->pc = 0x497A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A3Cu;
        // 0x497a40: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A44u;
        goto label_497a44;
    }
    ctx->pc = 0x497A3Cu;
    SET_GPR_U32(ctx, 31, 0x497A44u);
    ctx->pc = 0x497A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A3Cu;
    // 0x497a40: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x497A3Cu, 0x497A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497A44u;
label_497a44:
    // 0x497a44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x497a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497a48:
    // 0x497a48: 0x12400077  beqz        $s2, . + 4 + (0x77 << 2)
label_497a4c:
    if (ctx->pc == 0x497A4Cu) {
        ctx->pc = 0x497A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A48u;
        // 0x497a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A50u;
        goto label_497a50;
    }
    ctx->pc = 0x497A48u;
    {
        const bool branch_taken_0x497a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x497A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A48u;
        // 0x497a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a48) {
            ctx->pc = 0x497C28u;
            goto label_497c28;
        }
    }
    ctx->pc = 0x497A50u;
label_497a50:
    // 0x497a50: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x497a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_497a54:
    // 0x497a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x497a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497a58:
    // 0x497a58: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x497a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_497a5c:
    // 0x497a5c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x497a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_497a60:
    // 0x497a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x497a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_497a64:
    // 0x497a64: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x497a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_497a68:
    // 0x497a68: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x497a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_497a6c:
    // 0x497a6c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x497a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_497a70:
    // 0x497a70: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x497a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_497a74:
    // 0x497a74: 0xb2430033  sdl         $v1, 0x33($s2)
    ctx->pc = 0x497a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497a78:
    // 0x497a78: 0xb643002c  sdr         $v1, 0x2C($s2)
    ctx->pc = 0x497a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497a7c:
    // 0x497a7c: 0xb245003b  sdl         $a1, 0x3B($s2)
    ctx->pc = 0x497a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497a80:
    // 0x497a80: 0xb6450034  sdr         $a1, 0x34($s2)
    ctx->pc = 0x497a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497a84:
    // 0x497a84: 0xc12a4ce  jal         func_4A9338
label_497a88:
    if (ctx->pc == 0x497A88u) {
        ctx->pc = 0x497A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A84u;
        // 0x497a88: 0x2653003c  addiu       $s3, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A8Cu;
        goto label_497a8c;
    }
    ctx->pc = 0x497A84u;
    SET_GPR_U32(ctx, 31, 0x497A8Cu);
    ctx->pc = 0x497A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A84u;
    // 0x497a88: 0x2653003c  addiu       $s3, $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x497A84u, 0x497A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497A8Cu;
label_497a8c:
    // 0x497a8c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x497a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_497a90:
    // 0x497a90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_497a94:
    if (ctx->pc == 0x497A94u) {
        ctx->pc = 0x497A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A90u;
        // 0x497a94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497A98u;
        goto label_497a98;
    }
    ctx->pc = 0x497A90u;
    {
        const bool branch_taken_0x497a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A90u;
        // 0x497a94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a90) {
            ctx->pc = 0x497ACCu;
            goto label_497acc;
        }
    }
    ctx->pc = 0x497A98u;
label_497a98:
    // 0x497a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x497a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497a9c:
    // 0x497a9c: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x497a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_497aa0:
    // 0x497aa0: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x497aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_497aa4:
    // 0x497aa4: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x497aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_497aa8:
    // 0x497aa8: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x497aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_497aac:
    // 0x497aac: 0xb2480043  sdl         $t0, 0x43($s2)
    ctx->pc = 0x497aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497ab0:
    // 0x497ab0: 0xb648003c  sdr         $t0, 0x3C($s2)
    ctx->pc = 0x497ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497ab4:
    // 0x497ab4: 0xb243004b  sdl         $v1, 0x4B($s2)
    ctx->pc = 0x497ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497ab8:
    // 0x497ab8: 0xb6430044  sdr         $v1, 0x44($s2)
    ctx->pc = 0x497ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497abc:
    // 0x497abc: 0xc12a47e  jal         func_4A91F8
label_497ac0:
    if (ctx->pc == 0x497AC0u) {
        ctx->pc = 0x497AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ABCu;
        // 0x497ac0: 0x2653004c  addiu       $s3, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497AC4u;
        goto label_497ac4;
    }
    ctx->pc = 0x497ABCu;
    SET_GPR_U32(ctx, 31, 0x497AC4u);
    ctx->pc = 0x497AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497ABCu;
    // 0x497ac0: 0x2653004c  addiu       $s3, $s2, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x497ABCu, 0x497AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497AC4u;
label_497ac4:
    // 0x497ac4: 0x10000005  b           . + 4 + (0x5 << 2)
label_497ac8:
    if (ctx->pc == 0x497AC8u) {
        ctx->pc = 0x497AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AC4u;
        // 0x497ac8: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497ACCu;
        goto label_497acc;
    }
    ctx->pc = 0x497AC4u;
    {
        const bool branch_taken_0x497ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AC4u;
        // 0x497ac8: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ac4) {
            ctx->pc = 0x497ADCu;
            goto label_497adc;
        }
    }
    ctx->pc = 0x497ACCu;
label_497acc:
    // 0x497acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x497accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497ad0:
    // 0x497ad0: 0xc12a47e  jal         func_4A91F8
label_497ad4:
    if (ctx->pc == 0x497AD4u) {
        ctx->pc = 0x497AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AD0u;
        // 0x497ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497AD8u;
        goto label_497ad8;
    }
    ctx->pc = 0x497AD0u;
    SET_GPR_U32(ctx, 31, 0x497AD8u);
    ctx->pc = 0x497AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497AD0u;
    // 0x497ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x497AD0u, 0x497AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497AD8u;
label_497ad8:
    // 0x497ad8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x497ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_497adc:
    // 0x497adc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_497ae0:
    if (ctx->pc == 0x497AE0u) {
        ctx->pc = 0x497AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ADCu;
        // 0x497ae0: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497AE4u;
        goto label_497ae4;
    }
    ctx->pc = 0x497ADCu;
    {
        const bool branch_taken_0x497adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ADCu;
        // 0x497ae0: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497adc) {
            ctx->pc = 0x497B18u;
            goto label_497b18;
        }
    }
    ctx->pc = 0x497AE4u;
label_497ae4:
    // 0x497ae4: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x497ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_497ae8:
    // 0x497ae8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x497ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_497aec:
    // 0x497aec: 0x40f809  jalr        $v0
label_497af0:
    if (ctx->pc == 0x497AF0u) {
        ctx->pc = 0x497AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AECu;
        // 0x497af0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497AF4u;
        goto label_497af4;
    }
    ctx->pc = 0x497AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497AF4u);
        ctx->pc = 0x497AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AECu;
        // 0x497af0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497AECu, 0x497AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497AF4u;
label_497af4:
    // 0x497af4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x497af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_497af8:
    // 0x497af8: 0xc12a448  jal         func_4A9120
label_497afc:
    if (ctx->pc == 0x497AFCu) {
        ctx->pc = 0x497AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AF8u;
        // 0x497afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B00u;
        goto label_497b00;
    }
    ctx->pc = 0x497AF8u;
    SET_GPR_U32(ctx, 31, 0x497B00u);
    ctx->pc = 0x497AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497AF8u;
    // 0x497afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x497AF8u, 0x497B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497B00u;
label_497b00:
    // 0x497b00: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x497b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_497b04:
    // 0x497b04: 0x40f809  jalr        $v0
label_497b08:
    if (ctx->pc == 0x497B08u) {
        ctx->pc = 0x497B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B04u;
        // 0x497b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B0Cu;
        goto label_497b0c;
    }
    ctx->pc = 0x497B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497B0Cu);
        ctx->pc = 0x497B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B04u;
        // 0x497b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497B04u, 0x497B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497B0Cu;
label_497b0c:
    // 0x497b0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x497b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_497b10:
    // 0x497b10: 0x10000004  b           . + 4 + (0x4 << 2)
label_497b14:
    if (ctx->pc == 0x497B14u) {
        ctx->pc = 0x497B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B10u;
        // 0x497b14: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B18u;
        goto label_497b18;
    }
    ctx->pc = 0x497B10u;
    {
        const bool branch_taken_0x497b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B10u;
        // 0x497b14: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b10) {
            ctx->pc = 0x497B24u;
            goto label_497b24;
        }
    }
    ctx->pc = 0x497B18u;
label_497b18:
    // 0x497b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x497b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497b1c:
    // 0x497b1c: 0xc12a448  jal         func_4A9120
label_497b20:
    if (ctx->pc == 0x497B20u) {
        ctx->pc = 0x497B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B1Cu;
        // 0x497b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B24u;
        goto label_497b24;
    }
    ctx->pc = 0x497B1Cu;
    SET_GPR_U32(ctx, 31, 0x497B24u);
    ctx->pc = 0x497B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497B1Cu;
    // 0x497b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x497B1Cu, 0x497B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497B24u;
label_497b24:
    // 0x497b24: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x497b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_497b28:
    // 0x497b28: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_497b2c:
    if (ctx->pc == 0x497B2Cu) {
        ctx->pc = 0x497B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B28u;
        // 0x497b2c: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B30u;
        goto label_497b30;
    }
    ctx->pc = 0x497B28u;
    {
        const bool branch_taken_0x497b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x497b28) {
            ctx->pc = 0x497B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497B28u;
            // 0x497b2c: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497B54u;
            goto label_497b54;
        }
    }
    ctx->pc = 0x497B30u;
label_497b30:
    // 0x497b30: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x497b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_497b34:
    // 0x497b34: 0xc0bb778  jal         func_2EDDE0
label_497b38:
    if (ctx->pc == 0x497B38u) {
        ctx->pc = 0x497B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B34u;
        // 0x497b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B3Cu;
        goto label_497b3c;
    }
    ctx->pc = 0x497B34u;
    SET_GPR_U32(ctx, 31, 0x497B3Cu);
    ctx->pc = 0x497B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497B34u;
    // 0x497b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x497B34u, 0x497B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497B3Cu;
label_497b3c:
    // 0x497b3c: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x497b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
label_497b40:
    // 0x497b40: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x497b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_497b44:
    // 0x497b44: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x497b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_497b48:
    // 0x497b48: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x497b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_497b4c:
    // 0x497b4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_497b50:
    if (ctx->pc == 0x497B50u) {
        ctx->pc = 0x497B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B4Cu;
        // 0x497b50: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B54u;
        goto label_497b54;
    }
    ctx->pc = 0x497B4Cu;
    {
        const bool branch_taken_0x497b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B4Cu;
        // 0x497b50: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b4c) {
            ctx->pc = 0x497B58u;
            goto label_497b58;
        }
    }
    ctx->pc = 0x497B54u;
label_497b54:
    // 0x497b54: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x497b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_497b58:
    // 0x497b58: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x497b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
label_497b5c:
    // 0x497b5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x497b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497b60:
    // 0x497b60: 0x26570020  addiu       $s7, $s2, 0x20
    ctx->pc = 0x497b60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_497b64:
    // 0x497b64: 0x8e96000c  lw          $s6, 0xC($s4)
    ctx->pc = 0x497b64u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_497b68:
    // 0x497b68: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x497b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_497b6c:
    // 0x497b6c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x497b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_497b70:
    // 0x497b70: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
label_497b74:
    if (ctx->pc == 0x497B74u) {
        ctx->pc = 0x497B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B70u;
        // 0x497b74: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B78u;
        goto label_497b78;
    }
    ctx->pc = 0x497B70u;
    {
        const bool branch_taken_0x497b70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B70u;
        // 0x497b74: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b70) {
            ctx->pc = 0x497BE4u;
            goto label_497be4;
        }
    }
    ctx->pc = 0x497B78u;
label_497b78:
    // 0x497b78: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x497b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_497b7c:
    // 0x497b7c: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x497b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_497b80:
    // 0x497b80: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x497b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_497b84:
    // 0x497b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497b88:
    // 0x497b88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x497b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_497b8c:
    // 0x497b8c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x497b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_497b90:
    // 0x497b90: 0xc126736  jal         func_499CD8
label_497b94:
    if (ctx->pc == 0x497B94u) {
        ctx->pc = 0x497B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B90u;
        // 0x497b94: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497B98u;
        goto label_497b98;
    }
    ctx->pc = 0x497B90u;
    SET_GPR_U32(ctx, 31, 0x497B98u);
    ctx->pc = 0x497B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497B90u;
    // 0x497b94: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499CD8u, 0x497B90u, 0x497B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497B98u;
label_497b98:
    // 0x497b98: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x497b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_497b9c:
    // 0x497b9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x497b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497ba0:
    // 0x497ba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x497ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_497ba4:
    // 0x497ba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x497ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497ba8:
    // 0x497ba8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x497ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_497bac:
    // 0x497bac: 0xc0bb778  jal         func_2EDDE0
label_497bb0:
    if (ctx->pc == 0x497BB0u) {
        ctx->pc = 0x497BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BACu;
        // 0x497bb0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497BB4u;
        goto label_497bb4;
    }
    ctx->pc = 0x497BACu;
    SET_GPR_U32(ctx, 31, 0x497BB4u);
    ctx->pc = 0x497BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497BACu;
    // 0x497bb0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x497BACu, 0x497BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497BB4u;
label_497bb4:
    // 0x497bb4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x497bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_497bb8:
    // 0x497bb8: 0x2b6282b  sltu        $a1, $s5, $s6
    ctx->pc = 0x497bb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_497bbc:
    // 0x497bbc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x497bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_497bc0:
    // 0x497bc0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x497bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_497bc4:
    // 0x497bc4: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x497bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_497bc8:
    // 0x497bc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x497bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_497bcc:
    // 0x497bcc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x497bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_497bd0:
    // 0x497bd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x497bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_497bd4:
    // 0x497bd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x497bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_497bd8:
    // 0x497bd8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x497bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_497bdc:
    // 0x497bdc: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
label_497be0:
    if (ctx->pc == 0x497BE0u) {
        ctx->pc = 0x497BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BDCu;
        // 0x497be0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497BE4u;
        goto label_497be4;
    }
    ctx->pc = 0x497BDCu;
    {
        const bool branch_taken_0x497bdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x497BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BDCu;
        // 0x497be0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497bdc) {
            ctx->pc = 0x497B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497b78;
        }
    }
    ctx->pc = 0x497BE4u;
label_497be4:
    // 0x497be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497be8:
    // 0x497be8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x497be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_497bec:
    // 0x497bec: 0xc12600c  jal         func_498030
label_497bf0:
    if (ctx->pc == 0x497BF0u) {
        ctx->pc = 0x497BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BECu;
        // 0x497bf0: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497BF4u;
        goto label_497bf4;
    }
    ctx->pc = 0x497BECu;
    SET_GPR_U32(ctx, 31, 0x497BF4u);
    ctx->pc = 0x497BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497BECu;
    // 0x497bf0: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498030u, 0x497BECu, 0x497BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497BF4u;
label_497bf4:
    // 0x497bf4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x497bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_497bf8:
    // 0x497bf8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x497bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497bfc:
    // 0x497bfc: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x497bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_497c00:
    // 0x497c00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x497c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_497c04:
    // 0x497c04: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x497c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_497c08:
    // 0x497c08: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x497c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_497c0c:
    // 0x497c0c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x497c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_497c10:
    // 0x497c10: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x497c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_497c14:
    // 0x497c14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_497c18:
    // 0x497c18: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x497c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 23));
label_497c1c:
    // 0x497c1c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x497c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_497c20:
    // 0x497c20: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x497c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_497c24:
    // 0x497c24: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x497c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_497c28:
    // 0x497c28: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x497c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_497c2c:
    // 0x497c2c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x497c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_497c30:
    // 0x497c30: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x497c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_497c34:
    // 0x497c34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x497c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_497c38:
    // 0x497c38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x497c38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_497c3c:
    // 0x497c3c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x497c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_497c40:
    // 0x497c40: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x497c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_497c44:
    // 0x497c44: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x497c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_497c48:
    // 0x497c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_497c4c:
    // 0x497c4c: 0x3e00008  jr          $ra
label_497c50:
    if (ctx->pc == 0x497C50u) {
        ctx->pc = 0x497C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C4Cu;
        // 0x497c50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497C54u;
        goto label_497c54;
    }
    ctx->pc = 0x497C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C4Cu;
        // 0x497c50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497C54u;
label_497c54:
    // 0x497c54: 0x0  nop
    ctx->pc = 0x497c54u;
    // NOP
    ctx->pc = 0x497c58u;
}
