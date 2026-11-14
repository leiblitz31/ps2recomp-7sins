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

// Function: sub_003F1B60
// Address: 0x3f1b60 - 0x3f1de8
void sub_003F1B60_0x3f1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1B60_0x3f1b60");
#endif

    switch (ctx->pc) {
        case 0x3f1c2cu: goto label_3f1c2c;
        case 0x3f1c40u: goto label_3f1c40;
        case 0x3f1c58u: goto label_3f1c58;
        case 0x3f1d88u: goto label_3f1d88;
        default: break;
    }

    ctx->pc = 0x3f1b60u;

    // 0x3f1b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f1b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1b68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f1b6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3f1b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f1b78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3f1b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1b7c: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F1B7Cu;
    {
        const bool branch_taken_0x3f1b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B7Cu;
        // 0x3f1b80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b7c) {
            ctx->pc = 0x3F1BBCu;
            goto label_3f1bbc;
        }
    }
    ctx->pc = 0x3F1B84u;
    // 0x3f1b84: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3f1b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f1b88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1B88u;
    {
        const bool branch_taken_0x3f1b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B88u;
        // 0x3f1b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b88) {
            ctx->pc = 0x3F1BA0u;
            goto label_3f1ba0;
        }
    }
    ctx->pc = 0x3F1B90u;
    // 0x3f1b90: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1B90u;
    {
        const bool branch_taken_0x3f1b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f1b90) {
            ctx->pc = 0x3F1B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1B90u;
            // 0x3f1b94: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1BB4u;
            goto label_3f1bb4;
        }
    }
    ctx->pc = 0x3F1B98u;
    // 0x3f1b98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3F1B98u;
    {
        const bool branch_taken_0x3f1b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B98u;
        // 0x3f1b9c: 0x9203020a  lbu         $v1, 0x20A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b98) {
            ctx->pc = 0x3F1BD8u;
            goto label_3f1bd8;
        }
    }
    ctx->pc = 0x3F1BA0u;
label_3f1ba0:
    // 0x3f1ba0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f1ba4: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1BA4u;
    {
        const bool branch_taken_0x3f1ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f1ba4) {
            ctx->pc = 0x3F1BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1BA4u;
            // 0x3f1ba8: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1BC8u;
            goto label_3f1bc8;
        }
    }
    ctx->pc = 0x3F1BACu;
    // 0x3f1bac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F1BACu;
    {
        const bool branch_taken_0x3f1bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BACu;
        // 0x3f1bb0: 0x9203020a  lbu         $v1, 0x20A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bac) {
            ctx->pc = 0x3F1BDCu;
            goto label_3f1bdc;
        }
    }
    ctx->pc = 0x3F1BB4u;
label_3f1bb4:
    // 0x3f1bb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1BB4u;
    {
        const bool branch_taken_0x3f1bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BB4u;
        // 0x3f1bb8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bb4) {
            ctx->pc = 0x3F1BCCu;
            goto label_3f1bcc;
        }
    }
    ctx->pc = 0x3F1BBCu;
label_3f1bbc:
    // 0x3f1bbc: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3f1bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x3f1bc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F1BC0u;
    {
        const bool branch_taken_0x3f1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BC0u;
        // 0x3f1bc4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bc0) {
            ctx->pc = 0x3F1BCCu;
            goto label_3f1bcc;
        }
    }
    ctx->pc = 0x3F1BC8u;
label_3f1bc8:
    // 0x3f1bc8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3f1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3f1bcc:
    // 0x3f1bcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1bd0: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x3f1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x3f1bd4: 0x9203020a  lbu         $v1, 0x20A($s0)
    ctx->pc = 0x3f1bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3f1bd8:
    // 0x3f1bd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f1bdc:
    // 0x3f1bdc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1BDCu;
    {
        const bool branch_taken_0x3f1bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BDCu;
        // 0x3f1be0: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bdc) {
            ctx->pc = 0x3F1BF0u;
            goto label_3f1bf0;
        }
    }
    ctx->pc = 0x3F1BE4u;
    // 0x3f1be4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3f1be4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x3f1be8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1bec: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x3f1becu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
label_3f1bf0:
    // 0x3f1bf0: 0x4c00019  bltz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F1BF0u;
    {
        const bool branch_taken_0x3f1bf0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3F1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BF0u;
        // 0x3f1bf4: 0x24111b38  addiu       $s1, $zero, 0x1B38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bf0) {
            ctx->pc = 0x3F1C58u;
            goto label_3f1c58;
        }
    }
    ctx->pc = 0x3F1BF8u;
    // 0x3f1bf8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1BF8u;
    {
        const bool branch_taken_0x3f1bf8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BF8u;
        // 0x3f1bfc: 0xd2182d  daddu       $v1, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bf8) {
            ctx->pc = 0x3F1C08u;
            goto label_3f1c08;
        }
    }
    ctx->pc = 0x3F1C00u;
    // 0x3f1c00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3F1C00u;
    {
        const bool branch_taken_0x3f1c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C00u;
        // 0x3f1c04: 0x24035b8a  addiu       $v1, $zero, 0x5B8A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c00) {
            ctx->pc = 0x3F1C5Cu;
            goto label_3f1c5c;
        }
    }
    ctx->pc = 0x3F1C08u;
label_3f1c08:
    // 0x3f1c08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f1c0c: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x3f1c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x3f1c10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3f1c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f1c14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F1C14u;
    {
        const bool branch_taken_0x3f1c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C14u;
        // 0x3f1c18: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c14) {
            ctx->pc = 0x3F1C48u;
            goto label_3f1c48;
        }
    }
    ctx->pc = 0x3F1C1Cu;
    // 0x3f1c1c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3f1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x3f1c20: 0x34a586a0  ori         $a1, $a1, 0x86A0
    ctx->pc = 0x3f1c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34464);
    // 0x3f1c24: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F1C24u;
    SET_GPR_U32(ctx, 31, 0x3F1C2Cu);
    ctx->pc = 0x3F1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C24u;
    // 0x3f1c28: 0x623f8  dsll        $a0, $a2, 15 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F1C24u, 0x3F1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C2Cu;
label_3f1c2c:
    // 0x3f1c2c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3f1c2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3f1c30: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3f1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x3f1c34: 0x34a586a0  ori         $a1, $a1, 0x86A0
    ctx->pc = 0x3f1c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34464);
    // 0x3f1c38: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F1C38u;
    SET_GPR_U32(ctx, 31, 0x3F1C40u);
    ctx->pc = 0x3F1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C38u;
    // 0x3f1c3c: 0x1223f8  dsll        $a0, $s2, 15 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << 15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F1C38u, 0x3F1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C40u;
label_3f1c40:
    // 0x3f1c40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1C40u;
    {
        const bool branch_taken_0x3f1c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C40u;
        // 0x3f1c44: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c40) {
            ctx->pc = 0x3F1C5Cu;
            goto label_3f1c5c;
        }
    }
    ctx->pc = 0x3F1C48u;
label_3f1c48:
    // 0x3f1c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1c4c: 0x24a5e7c8  addiu       $a1, $a1, -0x1838
    ctx->pc = 0x3f1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961096));
    // 0x3f1c50: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F1C50u;
    SET_GPR_U32(ctx, 31, 0x3F1C58u);
    ctx->pc = 0x3F1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1C50u;
    // 0x3f1c54: 0x24111b38  addiu       $s1, $zero, 0x1B38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F1C50u, 0x3F1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C58u;
label_3f1c58:
    // 0x3f1c58: 0x24035b8a  addiu       $v1, $zero, 0x5B8A
    ctx->pc = 0x3f1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23434));
label_3f1c5c:
    // 0x3f1c5c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3f1c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3f1c60: 0xa61102d2  sh          $s1, 0x2D2($s0)
    ctx->pc = 0x3f1c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 722), (uint16_t)GPR_U32(ctx, 17));
    // 0x3f1c64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f1c68: 0xa60302d4  sh          $v1, 0x2D4($s0)
    ctx->pc = 0x3f1c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 724), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f1c6c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3f1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3f1c70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f1c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1c74: 0xa60202d6  sh          $v0, 0x2D6($s0)
    ctx->pc = 0x3f1c74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 726), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f1c78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f1c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1c7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f1c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1c84: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C84u;
        // 0x3f1c88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1C8Cu;
    // 0x3f1c8c: 0x0  nop
    ctx->pc = 0x3f1c8cu;
    // NOP
    // 0x3f1c90: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3F1C90u;
    {
        const bool branch_taken_0x3f1c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C90u;
        // 0x3f1c94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c90) {
            ctx->pc = 0x3F1DDCu;
            goto label_3f1ddc;
        }
    }
    ctx->pc = 0x3F1C98u;
    // 0x3f1c98: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F1C98u;
    {
        const bool branch_taken_0x3f1c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C98u;
        // 0x3f1c9c: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c98) {
            ctx->pc = 0x3F1CE0u;
            goto label_3f1ce0;
        }
    }
    ctx->pc = 0x3F1CA0u;
    // 0x3f1ca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1CA0u;
    {
        const bool branch_taken_0x3f1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CA0u;
        // 0x3f1ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ca0) {
            ctx->pc = 0x3F1CB8u;
            goto label_3f1cb8;
        }
    }
    ctx->pc = 0x3F1CA8u;
    // 0x3f1ca8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F1CA8u;
    {
        const bool branch_taken_0x3f1ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CA8u;
        // 0x3f1cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ca8) {
            ctx->pc = 0x3F1CD4u;
            goto label_3f1cd4;
        }
    }
    ctx->pc = 0x3F1CB0u;
    // 0x3f1cb0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3F1CB0u;
    {
        const bool branch_taken_0x3f1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CB0u;
        // 0x3f1cb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cb0) {
            ctx->pc = 0x3F1D00u;
            goto label_3f1d00;
        }
    }
    ctx->pc = 0x3F1CB8u;
label_3f1cb8:
    // 0x3f1cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f1cbc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F1CBCu;
    {
        const bool branch_taken_0x3f1cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CBCu;
        // 0x3f1cc0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cbc) {
            ctx->pc = 0x3F1CECu;
            goto label_3f1cec;
        }
    }
    ctx->pc = 0x3F1CC4u;
    // 0x3f1cc4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F1CC4u;
    {
        const bool branch_taken_0x3f1cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CC4u;
        // 0x3f1cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cc4) {
            ctx->pc = 0x3F1CF8u;
            goto label_3f1cf8;
        }
    }
    ctx->pc = 0x3F1CCCu;
    // 0x3f1ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F1CCCu;
    {
        const bool branch_taken_0x3f1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CCCu;
        // 0x3f1cd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ccc) {
            ctx->pc = 0x3F1D00u;
            goto label_3f1d00;
        }
    }
    ctx->pc = 0x3F1CD4u;
label_3f1cd4:
    // 0x3f1cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1cd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F1CD8u;
    {
        const bool branch_taken_0x3f1cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CD8u;
        // 0x3f1cdc: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cd8) {
            ctx->pc = 0x3F1D00u;
            goto label_3f1d00;
        }
    }
    ctx->pc = 0x3F1CE0u;
label_3f1ce0:
    // 0x3f1ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f1ce4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1CE4u;
    {
        const bool branch_taken_0x3f1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CE4u;
        // 0x3f1ce8: 0x24080055  addiu       $t0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ce4) {
            ctx->pc = 0x3F1D00u;
            goto label_3f1d00;
        }
    }
    ctx->pc = 0x3F1CECu;
label_3f1cec:
    // 0x3f1cec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3f1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3f1cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1CF0u;
    {
        const bool branch_taken_0x3f1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1CF0u;
        // 0x3f1cf4: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1cf0) {
            ctx->pc = 0x3F1D00u;
            goto label_3f1d00;
        }
    }
    ctx->pc = 0x3F1CF8u;
label_3f1cf8:
    // 0x3f1cf8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3f1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f1cfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f1cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1d00:
    // 0x3f1d00: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3F1D00u;
    {
        const bool branch_taken_0x3f1d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D00u;
        // 0x3f1d04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d00) {
            ctx->pc = 0x3F1DDCu;
            goto label_3f1ddc;
        }
    }
    ctx->pc = 0x3F1D08u;
    // 0x3f1d08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f1d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1d0c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3f1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x3f1d10: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3f1d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f1d14: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F1D14u;
    {
        const bool branch_taken_0x3f1d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D14u;
        // 0x3f1d18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d14) {
            ctx->pc = 0x3F1D7Cu;
            goto label_3f1d7c;
        }
    }
    ctx->pc = 0x3F1D1Cu;
    // 0x3f1d1c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3f1d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f1d20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F1D20u;
    {
        const bool branch_taken_0x3f1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D20u;
        // 0x3f1d24: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d20) {
            ctx->pc = 0x3F1D60u;
            goto label_3f1d60;
        }
    }
    ctx->pc = 0x3F1D28u;
    // 0x3f1d28: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1D28u;
    {
        const bool branch_taken_0x3f1d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1d28) {
            ctx->pc = 0x3F1D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1D28u;
            // 0x3f1d2c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1D4Cu;
            goto label_3f1d4c;
        }
    }
    ctx->pc = 0x3F1D30u;
    // 0x3f1d30: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3f1d30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1d34: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x3f1d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3f1d38: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3f1d38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1d3c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f1d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f1d40: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x3f1d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1d44: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3f1d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1d48: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3f1d48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_3f1d4c:
    // 0x3f1d4c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f1d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f1d50: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3f1d50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d54: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3f1d54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d58: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x3f1d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3f1d5c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3f1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3f1d60:
    // 0x3f1d60: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3f1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d64: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f1d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f1d68: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3f1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d6c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3f1d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d70: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x3f1d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3f1d74: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F1D74u;
    {
        const bool branch_taken_0x3f1d74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1D74u;
        // 0x3f1d78: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1d74) {
            ctx->pc = 0x3F1DDCu;
            goto label_3f1ddc;
        }
    }
    ctx->pc = 0x3F1D7Cu;
label_3f1d7c:
    // 0x3f1d7c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3f1d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1d88:
    // 0x3f1d88: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3f1d88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d8c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3f1d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3f1d90: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3f1d90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d94: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3f1d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1d98: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3f1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3f1d9c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x3f1d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1da0: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x3f1da0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1da4: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x3f1da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1da8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3f1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3f1dac: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x3f1dacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1db0: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x3f1db0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1db4: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x3f1db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1db8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3f1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3f1dbc: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x3f1dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1dc0: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x3f1dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1dc4: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x3f1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3f1dc8: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x3f1dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f1dcc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3f1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3f1dd0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3f1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3f1dd4: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3F1DD4u;
    {
        const bool branch_taken_0x3f1dd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1DD4u;
        // 0x3f1dd8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1dd4) {
            ctx->pc = 0x3F1D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1d88;
        }
    }
    ctx->pc = 0x3F1DDCu;
label_3f1ddc:
    // 0x3f1ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1DE4u;
    // 0x3f1de4: 0x0  nop
    ctx->pc = 0x3f1de4u;
    // NOP
    ctx->pc = 0x3f1de8u;
}
