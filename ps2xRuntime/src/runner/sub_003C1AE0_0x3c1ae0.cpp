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

// Function: sub_003C1AE0
// Address: 0x3c1ae0 - 0x3c1d60
void sub_003C1AE0_0x3c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1AE0_0x3c1ae0");
#endif

    switch (ctx->pc) {
        case 0x3c1ae0u: goto label_3c1ae0;
        case 0x3c1ae4u: goto label_3c1ae4;
        case 0x3c1ae8u: goto label_3c1ae8;
        case 0x3c1aecu: goto label_3c1aec;
        case 0x3c1af0u: goto label_3c1af0;
        case 0x3c1af4u: goto label_3c1af4;
        case 0x3c1af8u: goto label_3c1af8;
        case 0x3c1afcu: goto label_3c1afc;
        case 0x3c1b00u: goto label_3c1b00;
        case 0x3c1b04u: goto label_3c1b04;
        case 0x3c1b08u: goto label_3c1b08;
        case 0x3c1b0cu: goto label_3c1b0c;
        case 0x3c1b10u: goto label_3c1b10;
        case 0x3c1b14u: goto label_3c1b14;
        case 0x3c1b18u: goto label_3c1b18;
        case 0x3c1b1cu: goto label_3c1b1c;
        case 0x3c1b20u: goto label_3c1b20;
        case 0x3c1b24u: goto label_3c1b24;
        case 0x3c1b28u: goto label_3c1b28;
        case 0x3c1b2cu: goto label_3c1b2c;
        case 0x3c1b30u: goto label_3c1b30;
        case 0x3c1b34u: goto label_3c1b34;
        case 0x3c1b38u: goto label_3c1b38;
        case 0x3c1b3cu: goto label_3c1b3c;
        case 0x3c1b40u: goto label_3c1b40;
        case 0x3c1b44u: goto label_3c1b44;
        case 0x3c1b48u: goto label_3c1b48;
        case 0x3c1b4cu: goto label_3c1b4c;
        case 0x3c1b50u: goto label_3c1b50;
        case 0x3c1b54u: goto label_3c1b54;
        case 0x3c1b58u: goto label_3c1b58;
        case 0x3c1b5cu: goto label_3c1b5c;
        case 0x3c1b60u: goto label_3c1b60;
        case 0x3c1b64u: goto label_3c1b64;
        case 0x3c1b68u: goto label_3c1b68;
        case 0x3c1b6cu: goto label_3c1b6c;
        case 0x3c1b70u: goto label_3c1b70;
        case 0x3c1b74u: goto label_3c1b74;
        case 0x3c1b78u: goto label_3c1b78;
        case 0x3c1b7cu: goto label_3c1b7c;
        case 0x3c1b80u: goto label_3c1b80;
        case 0x3c1b84u: goto label_3c1b84;
        case 0x3c1b88u: goto label_3c1b88;
        case 0x3c1b8cu: goto label_3c1b8c;
        case 0x3c1b90u: goto label_3c1b90;
        case 0x3c1b94u: goto label_3c1b94;
        case 0x3c1b98u: goto label_3c1b98;
        case 0x3c1b9cu: goto label_3c1b9c;
        case 0x3c1ba0u: goto label_3c1ba0;
        case 0x3c1ba4u: goto label_3c1ba4;
        case 0x3c1ba8u: goto label_3c1ba8;
        case 0x3c1bacu: goto label_3c1bac;
        case 0x3c1bb0u: goto label_3c1bb0;
        case 0x3c1bb4u: goto label_3c1bb4;
        case 0x3c1bb8u: goto label_3c1bb8;
        case 0x3c1bbcu: goto label_3c1bbc;
        case 0x3c1bc0u: goto label_3c1bc0;
        case 0x3c1bc4u: goto label_3c1bc4;
        case 0x3c1bc8u: goto label_3c1bc8;
        case 0x3c1bccu: goto label_3c1bcc;
        case 0x3c1bd0u: goto label_3c1bd0;
        case 0x3c1bd4u: goto label_3c1bd4;
        case 0x3c1bd8u: goto label_3c1bd8;
        case 0x3c1bdcu: goto label_3c1bdc;
        case 0x3c1be0u: goto label_3c1be0;
        case 0x3c1be4u: goto label_3c1be4;
        case 0x3c1be8u: goto label_3c1be8;
        case 0x3c1becu: goto label_3c1bec;
        case 0x3c1bf0u: goto label_3c1bf0;
        case 0x3c1bf4u: goto label_3c1bf4;
        case 0x3c1bf8u: goto label_3c1bf8;
        case 0x3c1bfcu: goto label_3c1bfc;
        case 0x3c1c00u: goto label_3c1c00;
        case 0x3c1c04u: goto label_3c1c04;
        case 0x3c1c08u: goto label_3c1c08;
        case 0x3c1c0cu: goto label_3c1c0c;
        case 0x3c1c10u: goto label_3c1c10;
        case 0x3c1c14u: goto label_3c1c14;
        case 0x3c1c18u: goto label_3c1c18;
        case 0x3c1c1cu: goto label_3c1c1c;
        case 0x3c1c20u: goto label_3c1c20;
        case 0x3c1c24u: goto label_3c1c24;
        case 0x3c1c28u: goto label_3c1c28;
        case 0x3c1c2cu: goto label_3c1c2c;
        case 0x3c1c30u: goto label_3c1c30;
        case 0x3c1c34u: goto label_3c1c34;
        case 0x3c1c38u: goto label_3c1c38;
        case 0x3c1c3cu: goto label_3c1c3c;
        case 0x3c1c40u: goto label_3c1c40;
        case 0x3c1c44u: goto label_3c1c44;
        case 0x3c1c48u: goto label_3c1c48;
        case 0x3c1c4cu: goto label_3c1c4c;
        case 0x3c1c50u: goto label_3c1c50;
        case 0x3c1c54u: goto label_3c1c54;
        case 0x3c1c58u: goto label_3c1c58;
        case 0x3c1c5cu: goto label_3c1c5c;
        case 0x3c1c60u: goto label_3c1c60;
        case 0x3c1c64u: goto label_3c1c64;
        case 0x3c1c68u: goto label_3c1c68;
        case 0x3c1c6cu: goto label_3c1c6c;
        case 0x3c1c70u: goto label_3c1c70;
        case 0x3c1c74u: goto label_3c1c74;
        case 0x3c1c78u: goto label_3c1c78;
        case 0x3c1c7cu: goto label_3c1c7c;
        case 0x3c1c80u: goto label_3c1c80;
        case 0x3c1c84u: goto label_3c1c84;
        case 0x3c1c88u: goto label_3c1c88;
        case 0x3c1c8cu: goto label_3c1c8c;
        case 0x3c1c90u: goto label_3c1c90;
        case 0x3c1c94u: goto label_3c1c94;
        case 0x3c1c98u: goto label_3c1c98;
        case 0x3c1c9cu: goto label_3c1c9c;
        case 0x3c1ca0u: goto label_3c1ca0;
        case 0x3c1ca4u: goto label_3c1ca4;
        case 0x3c1ca8u: goto label_3c1ca8;
        case 0x3c1cacu: goto label_3c1cac;
        case 0x3c1cb0u: goto label_3c1cb0;
        case 0x3c1cb4u: goto label_3c1cb4;
        case 0x3c1cb8u: goto label_3c1cb8;
        case 0x3c1cbcu: goto label_3c1cbc;
        case 0x3c1cc0u: goto label_3c1cc0;
        case 0x3c1cc4u: goto label_3c1cc4;
        case 0x3c1cc8u: goto label_3c1cc8;
        case 0x3c1cccu: goto label_3c1ccc;
        case 0x3c1cd0u: goto label_3c1cd0;
        case 0x3c1cd4u: goto label_3c1cd4;
        case 0x3c1cd8u: goto label_3c1cd8;
        case 0x3c1cdcu: goto label_3c1cdc;
        case 0x3c1ce0u: goto label_3c1ce0;
        case 0x3c1ce4u: goto label_3c1ce4;
        case 0x3c1ce8u: goto label_3c1ce8;
        case 0x3c1cecu: goto label_3c1cec;
        case 0x3c1cf0u: goto label_3c1cf0;
        case 0x3c1cf4u: goto label_3c1cf4;
        case 0x3c1cf8u: goto label_3c1cf8;
        case 0x3c1cfcu: goto label_3c1cfc;
        case 0x3c1d00u: goto label_3c1d00;
        case 0x3c1d04u: goto label_3c1d04;
        case 0x3c1d08u: goto label_3c1d08;
        case 0x3c1d0cu: goto label_3c1d0c;
        case 0x3c1d10u: goto label_3c1d10;
        case 0x3c1d14u: goto label_3c1d14;
        case 0x3c1d18u: goto label_3c1d18;
        case 0x3c1d1cu: goto label_3c1d1c;
        case 0x3c1d20u: goto label_3c1d20;
        case 0x3c1d24u: goto label_3c1d24;
        case 0x3c1d28u: goto label_3c1d28;
        case 0x3c1d2cu: goto label_3c1d2c;
        case 0x3c1d30u: goto label_3c1d30;
        case 0x3c1d34u: goto label_3c1d34;
        case 0x3c1d38u: goto label_3c1d38;
        case 0x3c1d3cu: goto label_3c1d3c;
        case 0x3c1d40u: goto label_3c1d40;
        case 0x3c1d44u: goto label_3c1d44;
        case 0x3c1d48u: goto label_3c1d48;
        case 0x3c1d4cu: goto label_3c1d4c;
        case 0x3c1d50u: goto label_3c1d50;
        case 0x3c1d54u: goto label_3c1d54;
        case 0x3c1d58u: goto label_3c1d58;
        case 0x3c1d5cu: goto label_3c1d5c;
        default: break;
    }

    ctx->pc = 0x3c1ae0u;

label_3c1ae0:
    // 0x3c1ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c1ae4:
    // 0x3c1ae4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c1ae8:
    // 0x3c1ae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c1aec:
    // 0x3c1aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1af0:
    // 0x3c1af0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c1af4:
    // 0x3c1af4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c1af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1af8:
    // 0x3c1af8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c1afc:
    // 0x3c1afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1b00:
    // 0x3c1b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1b04:
    // 0x3c1b04: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x3c1b04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3c1b08:
    // 0x3c1b08: 0xc103790  jal         func_40DE40
label_3c1b0c:
    if (ctx->pc == 0x3C1B0Cu) {
        ctx->pc = 0x3C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B08u;
        // 0x3c1b0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B10u;
        goto label_3c1b10;
    }
    ctx->pc = 0x3C1B08u;
    SET_GPR_U32(ctx, 31, 0x3C1B10u);
    ctx->pc = 0x3C1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B08u;
    // 0x3c1b0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1B08u, 0x3C1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B10u;
label_3c1b10:
    // 0x3c1b10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1b14:
    // 0x3c1b14: 0xc10378e  jal         func_40DE38
label_3c1b18:
    if (ctx->pc == 0x3C1B18u) {
        ctx->pc = 0x3C1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B14u;
        // 0x3c1b18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B1Cu;
        goto label_3c1b1c;
    }
    ctx->pc = 0x3C1B14u;
    SET_GPR_U32(ctx, 31, 0x3C1B1Cu);
    ctx->pc = 0x3C1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B14u;
    // 0x3c1b18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1B14u, 0x3C1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B1Cu;
label_3c1b1c:
    // 0x3c1b1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1b20:
    // 0x3c1b20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1b24:
    // 0x3c1b24: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_3c1b28:
    if (ctx->pc == 0x3C1B28u) {
        ctx->pc = 0x3C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B24u;
        // 0x3c1b28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B2Cu;
        goto label_3c1b2c;
    }
    ctx->pc = 0x3C1B24u;
    {
        const bool branch_taken_0x3c1b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B24u;
        // 0x3c1b28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b24) {
            ctx->pc = 0x3C1B70u;
            goto label_3c1b70;
        }
    }
    ctx->pc = 0x3C1B2Cu;
label_3c1b2c:
    // 0x3c1b2c: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x3c1b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c1b30:
    // 0x3c1b30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1b34:
    // 0x3c1b34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3c1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1b38:
    // 0x3c1b38: 0x220f809  jalr        $s1
label_3c1b3c:
    if (ctx->pc == 0x3C1B3Cu) {
        ctx->pc = 0x3C1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B38u;
        // 0x3c1b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B40u;
        goto label_3c1b40;
    }
    ctx->pc = 0x3C1B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x3C1B40u);
        ctx->pc = 0x3C1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B38u;
        // 0x3c1b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B38u, 0x3C1B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1B40u;
label_3c1b40:
    // 0x3c1b40: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x3c1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_3c1b44:
    // 0x3c1b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c1b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b48:
    // 0x3c1b48: 0x60f809  jalr        $v1
label_3c1b4c:
    if (ctx->pc == 0x3C1B4Cu) {
        ctx->pc = 0x3C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B48u;
        // 0x3c1b4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B50u;
        goto label_3c1b50;
    }
    ctx->pc = 0x3C1B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1B50u);
        ctx->pc = 0x3C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B48u;
        // 0x3c1b4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B48u, 0x3C1B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1B50u;
label_3c1b50:
    // 0x3c1b50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c1b54:
    if (ctx->pc == 0x3C1B54u) {
        ctx->pc = 0x3C1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B50u;
        // 0x3c1b54: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B58u;
        goto label_3c1b58;
    }
    ctx->pc = 0x3C1B50u;
    {
        const bool branch_taken_0x3c1b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B50u;
        // 0x3c1b54: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b50) {
            ctx->pc = 0x3C1B60u;
            goto label_3c1b60;
        }
    }
    ctx->pc = 0x3C1B58u;
label_3c1b58:
    // 0x3c1b58: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c1b5c:
    if (ctx->pc == 0x3C1B5Cu) {
        ctx->pc = 0x3C1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B58u;
        // 0x3c1b5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B60u;
        goto label_3c1b60;
    }
    ctx->pc = 0x3C1B58u;
    {
        const bool branch_taken_0x3c1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B58u;
        // 0x3c1b5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b58) {
            ctx->pc = 0x3C1B74u;
            goto label_3c1b74;
        }
    }
    ctx->pc = 0x3C1B60u;
label_3c1b60:
    // 0x3c1b60: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1b64:
    // 0x3c1b64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c1b68:
    // 0x3c1b68: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
label_3c1b6c:
    if (ctx->pc == 0x3C1B6Cu) {
        ctx->pc = 0x3C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B68u;
        // 0x3c1b6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B70u;
        goto label_3c1b70;
    }
    ctx->pc = 0x3C1B68u;
    {
        const bool branch_taken_0x3c1b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B68u;
        // 0x3c1b6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b68) {
            ctx->pc = 0x3C1B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1b30;
        }
    }
    ctx->pc = 0x3C1B70u;
label_3c1b70:
    // 0x3c1b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c1b74:
    // 0x3c1b74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c1b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c1b78:
    // 0x3c1b78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c1b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1b7c:
    // 0x3c1b7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c1b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1b80:
    // 0x3c1b80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c1b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1b84:
    // 0x3c1b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1b88:
    // 0x3c1b88: 0x3e00008  jr          $ra
label_3c1b8c:
    if (ctx->pc == 0x3C1B8Cu) {
        ctx->pc = 0x3C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B88u;
        // 0x3c1b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1B90u;
        goto label_3c1b90;
    }
    ctx->pc = 0x3C1B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B88u;
        // 0x3c1b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1B90u;
label_3c1b90:
    // 0x3c1b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c1b94:
    // 0x3c1b94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c1b98:
    // 0x3c1b98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c1b9c:
    // 0x3c1b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ba0:
    // 0x3c1ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c1ba4:
    // 0x3c1ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c1ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ba8:
    // 0x3c1ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1bac:
    // 0x3c1bac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c1bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bb0:
    // 0x3c1bb0: 0xc103790  jal         func_40DE40
label_3c1bb4:
    if (ctx->pc == 0x3C1BB4u) {
        ctx->pc = 0x3C1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BB0u;
        // 0x3c1bb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BB8u;
        goto label_3c1bb8;
    }
    ctx->pc = 0x3C1BB0u;
    SET_GPR_U32(ctx, 31, 0x3C1BB8u);
    ctx->pc = 0x3C1BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1BB0u;
    // 0x3c1bb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1BB0u, 0x3C1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1BB8u;
label_3c1bb8:
    // 0x3c1bb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1bbc:
    // 0x3c1bbc: 0xc10378e  jal         func_40DE38
label_3c1bc0:
    if (ctx->pc == 0x3C1BC0u) {
        ctx->pc = 0x3C1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BBCu;
        // 0x3c1bc0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BC4u;
        goto label_3c1bc4;
    }
    ctx->pc = 0x3C1BBCu;
    SET_GPR_U32(ctx, 31, 0x3C1BC4u);
    ctx->pc = 0x3C1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1BBCu;
    // 0x3c1bc0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1BBCu, 0x3C1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1BC4u;
label_3c1bc4:
    // 0x3c1bc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1bc8:
    // 0x3c1bc8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1bcc:
    // 0x3c1bcc: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_3c1bd0:
    if (ctx->pc == 0x3C1BD0u) {
        ctx->pc = 0x3C1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BCCu;
        // 0x3c1bd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BD4u;
        goto label_3c1bd4;
    }
    ctx->pc = 0x3C1BCCu;
    {
        const bool branch_taken_0x3c1bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BCCu;
        // 0x3c1bd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bcc) {
            ctx->pc = 0x3C1C04u;
            goto label_3c1c04;
        }
    }
    ctx->pc = 0x3C1BD4u;
label_3c1bd4:
    // 0x3c1bd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1bd8:
    // 0x3c1bd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1bdc:
    // 0x3c1bdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1be0:
    // 0x3c1be0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c1be4:
    // 0x3c1be4: 0x240f809  jalr        $s2
label_3c1be8:
    if (ctx->pc == 0x3C1BE8u) {
        ctx->pc = 0x3C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BE4u;
        // 0x3c1be8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BECu;
        goto label_3c1bec;
    }
    ctx->pc = 0x3C1BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x3C1BECu);
        ctx->pc = 0x3C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BE4u;
        // 0x3c1be8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1BE4u, 0x3C1BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1BECu;
label_3c1bec:
    // 0x3c1bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c1bf0:
    if (ctx->pc == 0x3C1BF0u) {
        ctx->pc = 0x3C1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BECu;
        // 0x3c1bf0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1BF4u;
        goto label_3c1bf4;
    }
    ctx->pc = 0x3C1BECu;
    {
        const bool branch_taken_0x3c1bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BECu;
        // 0x3c1bf0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bec) {
            ctx->pc = 0x3C1C00u;
            goto label_3c1c00;
        }
    }
    ctx->pc = 0x3C1BF4u;
label_3c1bf4:
    // 0x3c1bf4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1bf8:
    // 0x3c1bf8: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
label_3c1bfc:
    if (ctx->pc == 0x3C1BFCu) {
        ctx->pc = 0x3C1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BF8u;
        // 0x3c1bfc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C00u;
        goto label_3c1c00;
    }
    ctx->pc = 0x3C1BF8u;
    {
        const bool branch_taken_0x3c1bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BF8u;
        // 0x3c1bfc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bf8) {
            ctx->pc = 0x3C1BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1bd8;
        }
    }
    ctx->pc = 0x3C1C00u;
label_3c1c00:
    // 0x3c1c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c04:
    // 0x3c1c04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c1c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1c08:
    // 0x3c1c08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c1c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1c0c:
    // 0x3c1c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c1c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1c10:
    // 0x3c1c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1c14:
    // 0x3c1c14: 0x3e00008  jr          $ra
label_3c1c18:
    if (ctx->pc == 0x3C1C18u) {
        ctx->pc = 0x3C1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C14u;
        // 0x3c1c18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C1Cu;
        goto label_3c1c1c;
    }
    ctx->pc = 0x3C1C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C14u;
        // 0x3c1c18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1C1Cu;
label_3c1c1c:
    // 0x3c1c1c: 0x0  nop
    ctx->pc = 0x3c1c1cu;
    // NOP
label_3c1c20:
    // 0x3c1c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c1c24:
    // 0x3c1c24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c1c28:
    // 0x3c1c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c1c2c:
    // 0x3c1c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c30:
    // 0x3c1c30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c1c34:
    // 0x3c1c34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c1c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1c38:
    // 0x3c1c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1c3c:
    // 0x3c1c3c: 0xc103790  jal         func_40DE40
label_3c1c40:
    if (ctx->pc == 0x3C1C40u) {
        ctx->pc = 0x3C1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C3Cu;
        // 0x3c1c40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C44u;
        goto label_3c1c44;
    }
    ctx->pc = 0x3C1C3Cu;
    SET_GPR_U32(ctx, 31, 0x3C1C44u);
    ctx->pc = 0x3C1C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C3Cu;
    // 0x3c1c40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1C3Cu, 0x3C1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C44u;
label_3c1c44:
    // 0x3c1c44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1c48:
    // 0x3c1c48: 0xc10378e  jal         func_40DE38
label_3c1c4c:
    if (ctx->pc == 0x3C1C4Cu) {
        ctx->pc = 0x3C1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C48u;
        // 0x3c1c4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C50u;
        goto label_3c1c50;
    }
    ctx->pc = 0x3C1C48u;
    SET_GPR_U32(ctx, 31, 0x3C1C50u);
    ctx->pc = 0x3C1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C48u;
    // 0x3c1c4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1C48u, 0x3C1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C50u;
label_3c1c50:
    // 0x3c1c50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1c54:
    // 0x3c1c54: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c1c58:
    if (ctx->pc == 0x3C1C58u) {
        ctx->pc = 0x3C1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C54u;
        // 0x3c1c58: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C5Cu;
        goto label_3c1c5c;
    }
    ctx->pc = 0x3C1C54u;
    {
        const bool branch_taken_0x3c1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C54u;
        // 0x3c1c58: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c54) {
            ctx->pc = 0x3C1C68u;
            goto label_3c1c68;
        }
    }
    ctx->pc = 0x3C1C5Cu;
label_3c1c5c:
    // 0x3c1c5c: 0x0  nop
    ctx->pc = 0x3c1c5cu;
    // NOP
label_3c1c60:
    // 0x3c1c60: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1c64:
    // 0x3c1c64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1c68:
    // 0x3c1c68: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_3c1c6c:
    if (ctx->pc == 0x3C1C6Cu) {
        ctx->pc = 0x3C1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C68u;
        // 0x3c1c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C70u;
        goto label_3c1c70;
    }
    ctx->pc = 0x3C1C68u;
    {
        const bool branch_taken_0x3c1c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C68u;
        // 0x3c1c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c68) {
            ctx->pc = 0x3C1CB8u;
            goto label_3c1cb8;
        }
    }
    ctx->pc = 0x3C1C70u;
label_3c1c70:
    // 0x3c1c70: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x3c1c70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1c74:
    // 0x3c1c74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c1c78:
    // 0x3c1c78: 0x1492fff9  bne         $a0, $s2, . + 4 + (-0x7 << 2)
label_3c1c7c:
    if (ctx->pc == 0x3C1C7Cu) {
        ctx->pc = 0x3C1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C78u;
        // 0x3c1c7c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C80u;
        goto label_3c1c80;
    }
    ctx->pc = 0x3C1C78u;
    {
        const bool branch_taken_0x3c1c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x3C1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C78u;
        // 0x3c1c7c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c78) {
            ctx->pc = 0x3C1C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1c60;
        }
    }
    ctx->pc = 0x3C1C80u;
label_3c1c80:
    // 0x3c1c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1c84:
    // 0x3c1c84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3c1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3c1c88:
    // 0x3c1c88: 0x40f809  jalr        $v0
label_3c1c8c:
    if (ctx->pc == 0x3C1C8Cu) {
        ctx->pc = 0x3C1C90u;
        goto label_3c1c90;
    }
    ctx->pc = 0x3C1C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1C90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1C88u, 0x3C1C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1C90u;
label_3c1c90:
    // 0x3c1c90: 0xc10376a  jal         func_40DDA8
label_3c1c94:
    if (ctx->pc == 0x3C1C94u) {
        ctx->pc = 0x3C1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C90u;
        // 0x3c1c94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1C98u;
        goto label_3c1c98;
    }
    ctx->pc = 0x3C1C90u;
    SET_GPR_U32(ctx, 31, 0x3C1C98u);
    ctx->pc = 0x3C1C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C90u;
    // 0x3c1c94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1C90u, 0x3C1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C98u;
label_3c1c98:
    // 0x3c1c98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1c9c:
    // 0x3c1c9c: 0xc1036da  jal         func_40DB68
label_3c1ca0:
    if (ctx->pc == 0x3C1CA0u) {
        ctx->pc = 0x3C1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C9Cu;
        // 0x3c1ca0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CA4u;
        goto label_3c1ca4;
    }
    ctx->pc = 0x3C1C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C1CA4u);
    ctx->pc = 0x3C1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C9Cu;
    // 0x3c1ca0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1C9Cu, 0x3C1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CA4u;
label_3c1ca4:
    // 0x3c1ca4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1ca8:
    // 0x3c1ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1cac:
    // 0x3c1cac: 0xc1036a8  jal         func_40DAA0
label_3c1cb0:
    if (ctx->pc == 0x3C1CB0u) {
        ctx->pc = 0x3C1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CACu;
        // 0x3c1cb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CB4u;
        goto label_3c1cb4;
    }
    ctx->pc = 0x3C1CACu;
    SET_GPR_U32(ctx, 31, 0x3C1CB4u);
    ctx->pc = 0x3C1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CACu;
    // 0x3c1cb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C1CACu, 0x3C1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CB4u;
label_3c1cb4:
    // 0x3c1cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1cb8:
    // 0x3c1cb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c1cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1cbc:
    // 0x3c1cbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c1cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1cc0:
    // 0x3c1cc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c1cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1cc4:
    // 0x3c1cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1cc8:
    // 0x3c1cc8: 0x3e00008  jr          $ra
label_3c1ccc:
    if (ctx->pc == 0x3C1CCCu) {
        ctx->pc = 0x3C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CC8u;
        // 0x3c1ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CD0u;
        goto label_3c1cd0;
    }
    ctx->pc = 0x3C1CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CC8u;
        // 0x3c1ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1CD0u;
label_3c1cd0:
    // 0x3c1cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c1cd4:
    // 0x3c1cd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c1cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c1cd8:
    // 0x3c1cd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c1cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c1cdc:
    // 0x3c1cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ce0:
    // 0x3c1ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1ce4:
    // 0x3c1ce4: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3c1ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c1ce8:
    // 0x3c1ce8: 0xc103790  jal         func_40DE40
label_3c1cec:
    if (ctx->pc == 0x3C1CECu) {
        ctx->pc = 0x3C1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CE8u;
        // 0x3c1cec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CF0u;
        goto label_3c1cf0;
    }
    ctx->pc = 0x3C1CE8u;
    SET_GPR_U32(ctx, 31, 0x3C1CF0u);
    ctx->pc = 0x3C1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CE8u;
    // 0x3c1cec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1CE8u, 0x3C1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CF0u;
label_3c1cf0:
    // 0x3c1cf0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1cf4:
    // 0x3c1cf4: 0xc10378e  jal         func_40DE38
label_3c1cf8:
    if (ctx->pc == 0x3C1CF8u) {
        ctx->pc = 0x3C1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CF4u;
        // 0x3c1cf8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1CFCu;
        goto label_3c1cfc;
    }
    ctx->pc = 0x3C1CF4u;
    SET_GPR_U32(ctx, 31, 0x3C1CFCu);
    ctx->pc = 0x3C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CF4u;
    // 0x3c1cf8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1CF4u, 0x3C1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CFCu;
label_3c1cfc:
    // 0x3c1cfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1d00:
    // 0x3c1d00: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1d04:
    // 0x3c1d04: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_3c1d08:
    if (ctx->pc == 0x3C1D08u) {
        ctx->pc = 0x3C1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D04u;
        // 0x3c1d08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D0Cu;
        goto label_3c1d0c;
    }
    ctx->pc = 0x3C1D04u;
    {
        const bool branch_taken_0x3c1d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D04u;
        // 0x3c1d08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d04) {
            ctx->pc = 0x3C1D48u;
            goto label_3c1d48;
        }
    }
    ctx->pc = 0x3C1D0Cu;
label_3c1d0c:
    // 0x3c1d0c: 0x0  nop
    ctx->pc = 0x3c1d0cu;
    // NOP
label_3c1d10:
    // 0x3c1d10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1d14:
    // 0x3c1d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1d18:
    // 0x3c1d18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1d1c:
    // 0x3c1d1c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3c1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3c1d20:
    // 0x3c1d20: 0x40f809  jalr        $v0
label_3c1d24:
    if (ctx->pc == 0x3C1D24u) {
        ctx->pc = 0x3C1D28u;
        goto label_3c1d28;
    }
    ctx->pc = 0x3C1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1D28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1D20u, 0x3C1D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1D28u;
label_3c1d28:
    // 0x3c1d28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1d2c:
    // 0x3c1d2c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3c1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3c1d30:
    // 0x3c1d30: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3c1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1d34:
    // 0x3c1d34: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x3c1d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3c1d38:
    // 0x3c1d38: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c1d3c:
    // 0x3c1d3c: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
label_3c1d40:
    if (ctx->pc == 0x3C1D40u) {
        ctx->pc = 0x3C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D3Cu;
        // 0x3c1d40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D44u;
        goto label_3c1d44;
    }
    ctx->pc = 0x3C1D3Cu;
    {
        const bool branch_taken_0x3c1d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D3Cu;
        // 0x3c1d40: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d3c) {
            ctx->pc = 0x3C1D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1d10;
        }
    }
    ctx->pc = 0x3C1D44u;
label_3c1d44:
    // 0x3c1d44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c1d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1d48:
    // 0x3c1d48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c1d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1d4c:
    // 0x3c1d4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c1d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1d50:
    // 0x3c1d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1d54:
    // 0x3c1d54: 0x3e00008  jr          $ra
label_3c1d58:
    if (ctx->pc == 0x3C1D58u) {
        ctx->pc = 0x3C1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D54u;
        // 0x3c1d58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1D5Cu;
        goto label_3c1d5c;
    }
    ctx->pc = 0x3C1D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D54u;
        // 0x3c1d58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1D5Cu;
label_3c1d5c:
    // 0x3c1d5c: 0x0  nop
    ctx->pc = 0x3c1d5cu;
    // NOP
    ctx->pc = 0x3c1d60u;
}
