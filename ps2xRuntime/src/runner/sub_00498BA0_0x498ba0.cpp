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

// Function: sub_00498BA0
// Address: 0x498ba0 - 0x498da0
void sub_00498BA0_0x498ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498BA0_0x498ba0");
#endif

    switch (ctx->pc) {
        case 0x498ba0u: goto label_498ba0;
        case 0x498ba4u: goto label_498ba4;
        case 0x498ba8u: goto label_498ba8;
        case 0x498bacu: goto label_498bac;
        case 0x498bb0u: goto label_498bb0;
        case 0x498bb4u: goto label_498bb4;
        case 0x498bb8u: goto label_498bb8;
        case 0x498bbcu: goto label_498bbc;
        case 0x498bc0u: goto label_498bc0;
        case 0x498bc4u: goto label_498bc4;
        case 0x498bc8u: goto label_498bc8;
        case 0x498bccu: goto label_498bcc;
        case 0x498bd0u: goto label_498bd0;
        case 0x498bd4u: goto label_498bd4;
        case 0x498bd8u: goto label_498bd8;
        case 0x498bdcu: goto label_498bdc;
        case 0x498be0u: goto label_498be0;
        case 0x498be4u: goto label_498be4;
        case 0x498be8u: goto label_498be8;
        case 0x498becu: goto label_498bec;
        case 0x498bf0u: goto label_498bf0;
        case 0x498bf4u: goto label_498bf4;
        case 0x498bf8u: goto label_498bf8;
        case 0x498bfcu: goto label_498bfc;
        case 0x498c00u: goto label_498c00;
        case 0x498c04u: goto label_498c04;
        case 0x498c08u: goto label_498c08;
        case 0x498c0cu: goto label_498c0c;
        case 0x498c10u: goto label_498c10;
        case 0x498c14u: goto label_498c14;
        case 0x498c18u: goto label_498c18;
        case 0x498c1cu: goto label_498c1c;
        case 0x498c20u: goto label_498c20;
        case 0x498c24u: goto label_498c24;
        case 0x498c28u: goto label_498c28;
        case 0x498c2cu: goto label_498c2c;
        case 0x498c30u: goto label_498c30;
        case 0x498c34u: goto label_498c34;
        case 0x498c38u: goto label_498c38;
        case 0x498c3cu: goto label_498c3c;
        case 0x498c40u: goto label_498c40;
        case 0x498c44u: goto label_498c44;
        case 0x498c48u: goto label_498c48;
        case 0x498c4cu: goto label_498c4c;
        case 0x498c50u: goto label_498c50;
        case 0x498c54u: goto label_498c54;
        case 0x498c58u: goto label_498c58;
        case 0x498c5cu: goto label_498c5c;
        case 0x498c60u: goto label_498c60;
        case 0x498c64u: goto label_498c64;
        case 0x498c68u: goto label_498c68;
        case 0x498c6cu: goto label_498c6c;
        case 0x498c70u: goto label_498c70;
        case 0x498c74u: goto label_498c74;
        case 0x498c78u: goto label_498c78;
        case 0x498c7cu: goto label_498c7c;
        case 0x498c80u: goto label_498c80;
        case 0x498c84u: goto label_498c84;
        case 0x498c88u: goto label_498c88;
        case 0x498c8cu: goto label_498c8c;
        case 0x498c90u: goto label_498c90;
        case 0x498c94u: goto label_498c94;
        case 0x498c98u: goto label_498c98;
        case 0x498c9cu: goto label_498c9c;
        case 0x498ca0u: goto label_498ca0;
        case 0x498ca4u: goto label_498ca4;
        case 0x498ca8u: goto label_498ca8;
        case 0x498cacu: goto label_498cac;
        case 0x498cb0u: goto label_498cb0;
        case 0x498cb4u: goto label_498cb4;
        case 0x498cb8u: goto label_498cb8;
        case 0x498cbcu: goto label_498cbc;
        case 0x498cc0u: goto label_498cc0;
        case 0x498cc4u: goto label_498cc4;
        case 0x498cc8u: goto label_498cc8;
        case 0x498cccu: goto label_498ccc;
        case 0x498cd0u: goto label_498cd0;
        case 0x498cd4u: goto label_498cd4;
        case 0x498cd8u: goto label_498cd8;
        case 0x498cdcu: goto label_498cdc;
        case 0x498ce0u: goto label_498ce0;
        case 0x498ce4u: goto label_498ce4;
        case 0x498ce8u: goto label_498ce8;
        case 0x498cecu: goto label_498cec;
        case 0x498cf0u: goto label_498cf0;
        case 0x498cf4u: goto label_498cf4;
        case 0x498cf8u: goto label_498cf8;
        case 0x498cfcu: goto label_498cfc;
        case 0x498d00u: goto label_498d00;
        case 0x498d04u: goto label_498d04;
        case 0x498d08u: goto label_498d08;
        case 0x498d0cu: goto label_498d0c;
        case 0x498d10u: goto label_498d10;
        case 0x498d14u: goto label_498d14;
        case 0x498d18u: goto label_498d18;
        case 0x498d1cu: goto label_498d1c;
        case 0x498d20u: goto label_498d20;
        case 0x498d24u: goto label_498d24;
        case 0x498d28u: goto label_498d28;
        case 0x498d2cu: goto label_498d2c;
        case 0x498d30u: goto label_498d30;
        case 0x498d34u: goto label_498d34;
        case 0x498d38u: goto label_498d38;
        case 0x498d3cu: goto label_498d3c;
        case 0x498d40u: goto label_498d40;
        case 0x498d44u: goto label_498d44;
        case 0x498d48u: goto label_498d48;
        case 0x498d4cu: goto label_498d4c;
        case 0x498d50u: goto label_498d50;
        case 0x498d54u: goto label_498d54;
        case 0x498d58u: goto label_498d58;
        case 0x498d5cu: goto label_498d5c;
        case 0x498d60u: goto label_498d60;
        case 0x498d64u: goto label_498d64;
        case 0x498d68u: goto label_498d68;
        case 0x498d6cu: goto label_498d6c;
        case 0x498d70u: goto label_498d70;
        case 0x498d74u: goto label_498d74;
        case 0x498d78u: goto label_498d78;
        case 0x498d7cu: goto label_498d7c;
        case 0x498d80u: goto label_498d80;
        case 0x498d84u: goto label_498d84;
        case 0x498d88u: goto label_498d88;
        case 0x498d8cu: goto label_498d8c;
        case 0x498d90u: goto label_498d90;
        case 0x498d94u: goto label_498d94;
        case 0x498d98u: goto label_498d98;
        case 0x498d9cu: goto label_498d9c;
        default: break;
    }

    ctx->pc = 0x498ba0u;

label_498ba0:
    // 0x498ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_498ba4:
    // 0x498ba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_498ba8:
    // 0x498ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_498bac:
    // 0x498bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498bb0:
    // 0x498bb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498bb4:
    // 0x498bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498bb8:
    // 0x498bb8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498bbc:
    // 0x498bbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498bc0:
    // 0x498bc0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x498bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_498bc4:
    // 0x498bc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498bc8:
    // 0x498bc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498bcc:
    // 0x498bcc: 0x40f809  jalr        $v0
label_498bd0:
    if (ctx->pc == 0x498BD0u) {
        ctx->pc = 0x498BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BCCu;
        // 0x498bd0: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498BD4u;
        goto label_498bd4;
    }
    ctx->pc = 0x498BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498BD4u);
        ctx->pc = 0x498BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BCCu;
        // 0x498bd0: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498BCCu, 0x498BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498BD4u;
label_498bd4:
    // 0x498bd4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498bd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498bd8:
    // 0x498bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498bdc:
    // 0x498bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498be0:
    // 0x498be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498be4:
    // 0x498be4: 0x3e00008  jr          $ra
label_498be8:
    if (ctx->pc == 0x498BE8u) {
        ctx->pc = 0x498BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BE4u;
        // 0x498be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498BECu;
        goto label_498bec;
    }
    ctx->pc = 0x498BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BE4u;
        // 0x498be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498BECu;
label_498bec:
    // 0x498bec: 0x0  nop
    ctx->pc = 0x498becu;
    // NOP
label_498bf0:
    // 0x498bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_498bf4:
    // 0x498bf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_498bf8:
    // 0x498bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_498bfc:
    // 0x498bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498c00:
    // 0x498c00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498c04:
    // 0x498c04: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x498c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_498c08:
    // 0x498c08: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498c0c:
    // 0x498c0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498c10:
    // 0x498c10: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x498c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_498c14:
    // 0x498c14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498c18:
    // 0x498c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498c1c:
    // 0x498c1c: 0x40f809  jalr        $v0
label_498c20:
    if (ctx->pc == 0x498C20u) {
        ctx->pc = 0x498C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C1Cu;
        // 0x498c20: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498C24u;
        goto label_498c24;
    }
    ctx->pc = 0x498C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498C24u);
        ctx->pc = 0x498C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C1Cu;
        // 0x498c20: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498C1Cu, 0x498C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498C24u;
label_498c24:
    // 0x498c24: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498c24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498c28:
    // 0x498c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498c2c:
    // 0x498c2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498c30:
    // 0x498c30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498c34:
    // 0x498c34: 0x3e00008  jr          $ra
label_498c38:
    if (ctx->pc == 0x498C38u) {
        ctx->pc = 0x498C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C34u;
        // 0x498c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498C3Cu;
        goto label_498c3c;
    }
    ctx->pc = 0x498C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C34u;
        // 0x498c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498C3Cu;
label_498c3c:
    // 0x498c3c: 0x0  nop
    ctx->pc = 0x498c3cu;
    // NOP
label_498c40:
    // 0x498c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498c44:
    // 0x498c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498c48:
    // 0x498c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498c4c:
    // 0x498c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498c50:
    // 0x498c50: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x498c50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_498c54:
    // 0x498c54: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498c58:
    if (ctx->pc == 0x498C58u) {
        ctx->pc = 0x498C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C54u;
        // 0x498c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498C5Cu;
        goto label_498c5c;
    }
    ctx->pc = 0x498C54u;
    {
        const bool branch_taken_0x498c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C54u;
        // 0x498c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c54) {
            ctx->pc = 0x498C88u;
            goto label_498c88;
        }
    }
    ctx->pc = 0x498C5Cu;
label_498c5c:
    // 0x498c5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498c60:
    // 0x498c60: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498c64:
    // 0x498c64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498c68:
    // 0x498c68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498c6c:
    // 0x498c6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498c70:
    // 0x498c70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498c74:
    // 0x498c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498c78:
    // 0x498c78: 0x40f809  jalr        $v0
label_498c7c:
    if (ctx->pc == 0x498C7Cu) {
        ctx->pc = 0x498C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C78u;
        // 0x498c7c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498C80u;
        goto label_498c80;
    }
    ctx->pc = 0x498C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498C80u);
        ctx->pc = 0x498C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C78u;
        // 0x498c7c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498C78u, 0x498C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498C80u;
label_498c80:
    // 0x498c80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498c84:
    // 0x498c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498c88:
    // 0x498c88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498c8c:
    // 0x498c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498c90:
    // 0x498c90: 0x3e00008  jr          $ra
label_498c94:
    if (ctx->pc == 0x498C94u) {
        ctx->pc = 0x498C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C90u;
        // 0x498c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498C98u;
        goto label_498c98;
    }
    ctx->pc = 0x498C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C90u;
        // 0x498c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498C98u;
label_498c98:
    // 0x498c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498c9c:
    // 0x498c9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498ca0:
    // 0x498ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498ca4:
    // 0x498ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498ca8:
    // 0x498ca8: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x498ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_498cac:
    // 0x498cac: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498cb0:
    if (ctx->pc == 0x498CB0u) {
        ctx->pc = 0x498CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CACu;
        // 0x498cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498CB4u;
        goto label_498cb4;
    }
    ctx->pc = 0x498CACu;
    {
        const bool branch_taken_0x498cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CACu;
        // 0x498cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498cac) {
            ctx->pc = 0x498CE0u;
            goto label_498ce0;
        }
    }
    ctx->pc = 0x498CB4u;
label_498cb4:
    // 0x498cb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498cb8:
    // 0x498cb8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498cbc:
    // 0x498cbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498cc0:
    // 0x498cc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498cc4:
    // 0x498cc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498cc8:
    // 0x498cc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498ccc:
    // 0x498ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498cd0:
    // 0x498cd0: 0x40f809  jalr        $v0
label_498cd4:
    if (ctx->pc == 0x498CD4u) {
        ctx->pc = 0x498CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CD0u;
        // 0x498cd4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498CD8u;
        goto label_498cd8;
    }
    ctx->pc = 0x498CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498CD8u);
        ctx->pc = 0x498CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CD0u;
        // 0x498cd4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498CD0u, 0x498CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498CD8u;
label_498cd8:
    // 0x498cd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498cd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498cdc:
    // 0x498cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498ce0:
    // 0x498ce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498ce4:
    // 0x498ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498ce8:
    // 0x498ce8: 0x3e00008  jr          $ra
label_498cec:
    if (ctx->pc == 0x498CECu) {
        ctx->pc = 0x498CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CE8u;
        // 0x498cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498CF0u;
        goto label_498cf0;
    }
    ctx->pc = 0x498CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CE8u;
        // 0x498cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498CF0u;
label_498cf0:
    // 0x498cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498cf4:
    // 0x498cf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498cf8:
    // 0x498cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498cfc:
    // 0x498cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498d00:
    // 0x498d00: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x498d00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
label_498d04:
    // 0x498d04: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498d08:
    if (ctx->pc == 0x498D08u) {
        ctx->pc = 0x498D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D04u;
        // 0x498d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498D0Cu;
        goto label_498d0c;
    }
    ctx->pc = 0x498D04u;
    {
        const bool branch_taken_0x498d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D04u;
        // 0x498d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d04) {
            ctx->pc = 0x498D38u;
            goto label_498d38;
        }
    }
    ctx->pc = 0x498D0Cu;
label_498d0c:
    // 0x498d0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498d10:
    // 0x498d10: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498d14:
    // 0x498d14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498d18:
    // 0x498d18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498d1c:
    // 0x498d1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498d20:
    // 0x498d20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498d24:
    // 0x498d24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498d28:
    // 0x498d28: 0x40f809  jalr        $v0
label_498d2c:
    if (ctx->pc == 0x498D2Cu) {
        ctx->pc = 0x498D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D28u;
        // 0x498d2c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498D30u;
        goto label_498d30;
    }
    ctx->pc = 0x498D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498D30u);
        ctx->pc = 0x498D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D28u;
        // 0x498d2c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498D28u, 0x498D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498D30u;
label_498d30:
    // 0x498d30: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498d30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498d34:
    // 0x498d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498d38:
    // 0x498d38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498d3c:
    // 0x498d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498d40:
    // 0x498d40: 0x3e00008  jr          $ra
label_498d44:
    if (ctx->pc == 0x498D44u) {
        ctx->pc = 0x498D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D40u;
        // 0x498d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498D48u;
        goto label_498d48;
    }
    ctx->pc = 0x498D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D40u;
        // 0x498d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498D48u;
label_498d48:
    // 0x498d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498d4c:
    // 0x498d4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498d50:
    // 0x498d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498d54:
    // 0x498d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498d58:
    // 0x498d58: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x498d58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
label_498d5c:
    // 0x498d5c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498d60:
    if (ctx->pc == 0x498D60u) {
        ctx->pc = 0x498D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D5Cu;
        // 0x498d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498D64u;
        goto label_498d64;
    }
    ctx->pc = 0x498D5Cu;
    {
        const bool branch_taken_0x498d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D5Cu;
        // 0x498d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d5c) {
            ctx->pc = 0x498D90u;
            goto label_498d90;
        }
    }
    ctx->pc = 0x498D64u;
label_498d64:
    // 0x498d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498d68:
    // 0x498d68: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498d6c:
    // 0x498d6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498d70:
    // 0x498d70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498d74:
    // 0x498d74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498d78:
    // 0x498d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498d7c:
    // 0x498d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498d80:
    // 0x498d80: 0x40f809  jalr        $v0
label_498d84:
    if (ctx->pc == 0x498D84u) {
        ctx->pc = 0x498D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D80u;
        // 0x498d84: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498D88u;
        goto label_498d88;
    }
    ctx->pc = 0x498D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498D88u);
        ctx->pc = 0x498D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D80u;
        // 0x498d84: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498D80u, 0x498D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498D88u;
label_498d88:
    // 0x498d88: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498d88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498d8c:
    // 0x498d8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498d90:
    // 0x498d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498d94:
    // 0x498d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498d98:
    // 0x498d98: 0x3e00008  jr          $ra
label_498d9c:
    if (ctx->pc == 0x498D9Cu) {
        ctx->pc = 0x498D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D98u;
        // 0x498d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498DA0u;
        goto label_fallthrough_0x498d98;
    }
    ctx->pc = 0x498D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D98u;
        // 0x498d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498d98:
    ctx->pc = 0x498DA0u;
}
