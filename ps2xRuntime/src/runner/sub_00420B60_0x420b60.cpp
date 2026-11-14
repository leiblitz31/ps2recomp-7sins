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

// Function: sub_00420B60
// Address: 0x420b60 - 0x420c48
void sub_00420B60_0x420b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420B60_0x420b60");
#endif

    switch (ctx->pc) {
        case 0x420b60u: goto label_420b60;
        case 0x420b64u: goto label_420b64;
        case 0x420b68u: goto label_420b68;
        case 0x420b6cu: goto label_420b6c;
        case 0x420b70u: goto label_420b70;
        case 0x420b74u: goto label_420b74;
        case 0x420b78u: goto label_420b78;
        case 0x420b7cu: goto label_420b7c;
        case 0x420b80u: goto label_420b80;
        case 0x420b84u: goto label_420b84;
        case 0x420b88u: goto label_420b88;
        case 0x420b8cu: goto label_420b8c;
        case 0x420b90u: goto label_420b90;
        case 0x420b94u: goto label_420b94;
        case 0x420b98u: goto label_420b98;
        case 0x420b9cu: goto label_420b9c;
        case 0x420ba0u: goto label_420ba0;
        case 0x420ba4u: goto label_420ba4;
        case 0x420ba8u: goto label_420ba8;
        case 0x420bacu: goto label_420bac;
        case 0x420bb0u: goto label_420bb0;
        case 0x420bb4u: goto label_420bb4;
        case 0x420bb8u: goto label_420bb8;
        case 0x420bbcu: goto label_420bbc;
        case 0x420bc0u: goto label_420bc0;
        case 0x420bc4u: goto label_420bc4;
        case 0x420bc8u: goto label_420bc8;
        case 0x420bccu: goto label_420bcc;
        case 0x420bd0u: goto label_420bd0;
        case 0x420bd4u: goto label_420bd4;
        case 0x420bd8u: goto label_420bd8;
        case 0x420bdcu: goto label_420bdc;
        case 0x420be0u: goto label_420be0;
        case 0x420be4u: goto label_420be4;
        case 0x420be8u: goto label_420be8;
        case 0x420becu: goto label_420bec;
        case 0x420bf0u: goto label_420bf0;
        case 0x420bf4u: goto label_420bf4;
        case 0x420bf8u: goto label_420bf8;
        case 0x420bfcu: goto label_420bfc;
        case 0x420c00u: goto label_420c00;
        case 0x420c04u: goto label_420c04;
        case 0x420c08u: goto label_420c08;
        case 0x420c0cu: goto label_420c0c;
        case 0x420c10u: goto label_420c10;
        case 0x420c14u: goto label_420c14;
        case 0x420c18u: goto label_420c18;
        case 0x420c1cu: goto label_420c1c;
        case 0x420c20u: goto label_420c20;
        case 0x420c24u: goto label_420c24;
        case 0x420c28u: goto label_420c28;
        case 0x420c2cu: goto label_420c2c;
        case 0x420c30u: goto label_420c30;
        case 0x420c34u: goto label_420c34;
        case 0x420c38u: goto label_420c38;
        case 0x420c3cu: goto label_420c3c;
        case 0x420c40u: goto label_420c40;
        case 0x420c44u: goto label_420c44;
        default: break;
    }

    ctx->pc = 0x420b60u;

label_420b60:
    // 0x420b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x420b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_420b64:
    // 0x420b64: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x420b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_420b68:
    // 0x420b68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x420b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_420b6c:
    // 0x420b6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x420b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420b70:
    // 0x420b70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x420b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_420b74:
    // 0x420b74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x420b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_420b78:
    // 0x420b78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x420b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_420b7c:
    // 0x420b7c: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x420b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_420b80:
    // 0x420b80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x420b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_420b84:
    // 0x420b84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x420b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_420b88:
    // 0x420b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420b8c:
    // 0x420b8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x420b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_420b90:
    // 0x420b90: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_420b94:
    if (ctx->pc == 0x420B94u) {
        ctx->pc = 0x420B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B90u;
        // 0x420b94: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420B98u;
        goto label_420b98;
    }
    ctx->pc = 0x420B90u;
    {
        const bool branch_taken_0x420b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x420B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B90u;
        // 0x420b94: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b90) {
            ctx->pc = 0x420BACu;
            goto label_420bac;
        }
    }
    ctx->pc = 0x420B98u;
label_420b98:
    // 0x420b98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x420b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_420b9c:
    // 0x420b9c: 0x280f809  jalr        $s4
label_420ba0:
    if (ctx->pc == 0x420BA0u) {
        ctx->pc = 0x420BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B9Cu;
        // 0x420ba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420BA4u;
        goto label_420ba4;
    }
    ctx->pc = 0x420B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x420BA4u);
        ctx->pc = 0x420BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B9Cu;
        // 0x420ba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B9Cu, 0x420BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420BA4u;
label_420ba4:
    // 0x420ba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_420ba8:
    if (ctx->pc == 0x420BA8u) {
        ctx->pc = 0x420BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BA4u;
        // 0x420ba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420BACu;
        goto label_420bac;
    }
    ctx->pc = 0x420BA4u;
    {
        const bool branch_taken_0x420ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BA4u;
        // 0x420ba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ba4) {
            ctx->pc = 0x420B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420b90;
        }
    }
    ctx->pc = 0x420BACu;
label_420bac:
    // 0x420bac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x420bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420bb0:
    // 0x420bb0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x420bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_420bb4:
    // 0x420bb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x420bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420bb8:
    // 0x420bb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x420bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420bbc:
    // 0x420bbc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x420bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420bc0:
    // 0x420bc0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x420bc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420bc4:
    // 0x420bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420bc8:
    // 0x420bc8: 0x3e00008  jr          $ra
label_420bcc:
    if (ctx->pc == 0x420BCCu) {
        ctx->pc = 0x420BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BC8u;
        // 0x420bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420BD0u;
        goto label_420bd0;
    }
    ctx->pc = 0x420BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BC8u;
        // 0x420bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420BD0u;
label_420bd0:
    // 0x420bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420bd4:
    // 0x420bd4: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420bd8:
    // 0x420bd8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_420bdc:
    // 0x420bdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_420be0:
    // 0x420be0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_420be4:
    // 0x420be4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_420be8:
    // 0x420be8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x420be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_420bec:
    // 0x420bec: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x420becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420bf0:
    // 0x420bf0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_420bf4:
    // 0x420bf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x420bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420bf8:
    // 0x420bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420bfc:
    // 0x420bfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x420bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_420c00:
    // 0x420c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x420c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_420c04:
    // 0x420c04: 0x0  nop
    ctx->pc = 0x420c04u;
    // NOP
label_420c08:
    // 0x420c08: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_420c0c:
    if (ctx->pc == 0x420C0Cu) {
        ctx->pc = 0x420C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C08u;
        // 0x420c0c: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420C10u;
        goto label_420c10;
    }
    ctx->pc = 0x420C08u;
    {
        const bool branch_taken_0x420c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x420C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C08u;
        // 0x420c0c: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420c08) {
            ctx->pc = 0x420C24u;
            goto label_420c24;
        }
    }
    ctx->pc = 0x420C10u;
label_420c10:
    // 0x420c10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x420c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_420c14:
    // 0x420c14: 0x260f809  jalr        $s3
label_420c18:
    if (ctx->pc == 0x420C18u) {
        ctx->pc = 0x420C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C14u;
        // 0x420c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420C1Cu;
        goto label_420c1c;
    }
    ctx->pc = 0x420C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x420C1Cu);
        ctx->pc = 0x420C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C14u;
        // 0x420c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C14u, 0x420C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420C1Cu;
label_420c1c:
    // 0x420c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_420c20:
    if (ctx->pc == 0x420C20u) {
        ctx->pc = 0x420C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C1Cu;
        // 0x420c20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420C24u;
        goto label_420c24;
    }
    ctx->pc = 0x420C1Cu;
    {
        const bool branch_taken_0x420c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C1Cu;
        // 0x420c20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420c1c) {
            ctx->pc = 0x420C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420c08;
        }
    }
    ctx->pc = 0x420C24u;
label_420c24:
    // 0x420c24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420c28:
    // 0x420c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420c2c:
    // 0x420c2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420c30:
    // 0x420c30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420c34:
    // 0x420c34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x420c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420c38:
    // 0x420c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420c3c:
    // 0x420c3c: 0x3e00008  jr          $ra
label_420c40:
    if (ctx->pc == 0x420C40u) {
        ctx->pc = 0x420C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C3Cu;
        // 0x420c40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420C44u;
        goto label_420c44;
    }
    ctx->pc = 0x420C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C3Cu;
        // 0x420c40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420C44u;
label_420c44:
    // 0x420c44: 0x0  nop
    ctx->pc = 0x420c44u;
    // NOP
    ctx->pc = 0x420c48u;
}
