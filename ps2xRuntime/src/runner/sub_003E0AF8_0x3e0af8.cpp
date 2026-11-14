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

// Function: sub_003E0AF8
// Address: 0x3e0af8 - 0x3e0e38
void sub_003E0AF8_0x3e0af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0AF8_0x3e0af8");
#endif

    switch (ctx->pc) {
        case 0x3e0b30u: goto label_3e0b30;
        case 0x3e0d68u: goto label_3e0d68;
        default: break;
    }

    ctx->pc = 0x3e0af8u;

    // 0x3e0af8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3e0af8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0afc: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0AFCu;
    {
        const bool branch_taken_0x3e0afc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AFCu;
        // 0x3e0b00: 0xc0682d  daddu       $t5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0afc) {
            ctx->pc = 0x3E0B0Cu;
            goto label_3e0b0c;
        }
    }
    ctx->pc = 0x3E0B04u;
    // 0x3e0b04: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B04u;
        // 0x3e0b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0B0Cu;
label_3e0b0c:
    // 0x3e0b0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e0b10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e0b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3e0b14: 0x2da30008  sltiu       $v1, $t5, 0x8
    ctx->pc = 0x3e0b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e0b18: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x3E0B18u;
    {
        const bool branch_taken_0x3e0b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B18u;
        // 0x3e0b1c: 0x822026  xor         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b18) {
            ctx->pc = 0x3E0CA0u;
            goto label_3e0ca0;
        }
    }
    ctx->pc = 0x3E0B20u;
    // 0x3e0b20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e0b24: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x3e0b24u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0b28: 0x244ed8a0  addiu       $t6, $v0, -0x2760
    ctx->pc = 0x3e0b28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x3e0b2c: 0x0  nop
    ctx->pc = 0x3e0b2cu;
    // NOP
label_3e0b30:
    // 0x3e0b30: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3e0b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0b34: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0b38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0b38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0b3c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0b3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0b40: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0b44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3e0b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3e0b48: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x3e0b48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0b4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0b50: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0b50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0b54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0b58: 0x91860000  lbu         $a2, 0x0($t4)
    ctx->pc = 0x3e0b58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0b5c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0b60: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0b64: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0b64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0b68: 0x25adfff8  addiu       $t5, $t5, -0x8
    ctx->pc = 0x3e0b68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
    // 0x3e0b6c: 0x91870000  lbu         $a3, 0x0($t4)
    ctx->pc = 0x3e0b6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0b70: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x3e0b70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x3e0b74: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0b78: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0b7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0b80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0b80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0b84: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x3e0b84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0b88: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3e0b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x3e0b8c: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0b94: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0b94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0b98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0b9c: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x3e0b9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0ba0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0ba4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0ba4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0ba8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0bac: 0x2dab0008  sltiu       $t3, $t5, 0x8
    ctx->pc = 0x3e0bacu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e0bb0: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x3e0bb0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0bb4: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0bb8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0bbc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0bc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0bc4: 0x918a0000  lbu         $t2, 0x0($t4)
    ctx->pc = 0x3e0bc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3e0bc8: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3e0bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3e0bcc: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0bd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0bd4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e0bd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3e0bd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0bdc: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0be0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0be0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0be4: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0be8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0bec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0bf0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x3e0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x3e0bf4: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0bf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0bfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0c00: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0c04: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0c04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0c08: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0c0c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0c10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0c10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0c14: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x3e0c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x3e0c18: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0c20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0c24: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0c28: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0c28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0c2c: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0c30: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0c34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0c38: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3e0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x3e0c3c: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0c40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0c44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0c48: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0c4c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0c4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0c50: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0c54: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0c58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0c5c: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x3e0c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x3e0c60: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0c6c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0c70: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0c70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0c74: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0c78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0c80: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x3e0c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x3e0c84: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0c88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0c8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0c90: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3e0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3e0c94: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0c94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0c98: 0x1160ffa5  beqz        $t3, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3E0C98u;
    {
        const bool branch_taken_0x3e0c98 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C98u;
        // 0x3e0c9c: 0x642026  xor         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c98) {
            ctx->pc = 0x3E0B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0b30;
        }
    }
    ctx->pc = 0x3E0CA0u;
label_3e0ca0:
    // 0x3e0ca0: 0x11a0005c  beqz        $t5, . + 4 + (0x5C << 2)
    ctx->pc = 0x3E0CA0u;
    {
        const bool branch_taken_0x3e0ca0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CA0u;
        // 0x3e0ca4: 0xd1823  negu        $v1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ca0) {
            ctx->pc = 0x3E0E14u;
            goto label_3e0e14;
        }
    }
    ctx->pc = 0x3E0CA8u;
    // 0x3e0ca8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e0cac: 0x2449d8a0  addiu       $t1, $v0, -0x2760
    ctx->pc = 0x3e0cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x3e0cb0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3e0cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3e0cb4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3E0CB4u;
    {
        const bool branch_taken_0x3e0cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CB4u;
        // 0x3e0cb8: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cb4) {
            ctx->pc = 0x3E0D64u;
            goto label_3e0d64;
        }
    }
    ctx->pc = 0x3E0CBCu;
    // 0x3e0cbc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e0cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e0cc0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E0CC0u;
    {
        const bool branch_taken_0x3e0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CC0u;
        // 0x3e0cc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cc0) {
            ctx->pc = 0x3E0D30u;
            goto label_3e0d30;
        }
    }
    ctx->pc = 0x3E0CC8u;
    // 0x3e0cc8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E0CC8u;
    {
        const bool branch_taken_0x3e0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0cc8) {
            ctx->pc = 0x3E0CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0CC8u;
            // 0x3e0ccc: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0D04u;
            goto label_3e0d04;
        }
    }
    ctx->pc = 0x3E0CD0u;
    // 0x3e0cd0: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3e0cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3e0cd4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0cd8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0cdc: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0ce0: 0x25e50001  addiu       $a1, $t7, 0x1
    ctx->pc = 0x3e0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3e0ce4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3e0ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3e0ce8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3e0ce8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3e0cec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0cf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0cf4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0cf8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0cf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0cfc: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0d00: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e0d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e0d04:
    // 0x3e0d04: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0d08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0d08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0d0c: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0d10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e0d14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3e0d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3e0d18: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3e0d18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3e0d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0d20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0d24: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0d28: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0d28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0d2c: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_3e0d30:
    // 0x3e0d30: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e0d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e0d34: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0d38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0d38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0d3c: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0d40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e0d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e0d44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3e0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3e0d48: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3e0d48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3e0d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0d50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0d54: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0d58: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0d5c: 0x11a0002d  beqz        $t5, . + 4 + (0x2D << 2)
    ctx->pc = 0x3E0D5Cu;
    {
        const bool branch_taken_0x3e0d5c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D5Cu;
        // 0x3e0d60: 0x642026  xor         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d5c) {
            ctx->pc = 0x3E0E14u;
            goto label_3e0e14;
        }
    }
    ctx->pc = 0x3E0D64u;
label_3e0d64:
    // 0x3e0d64: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3e0d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d68:
    // 0x3e0d68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e0d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e0d6c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0d70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0d74: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0d78: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x3e0d78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3e0d7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3e0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3e0d80: 0x91060002  lbu         $a2, 0x2($t0)
    ctx->pc = 0x3e0d80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3e0d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0d88: 0x91070003  lbu         $a3, 0x3($t0)
    ctx->pc = 0x3e0d88u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3e0d8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0d90: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3e0d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3e0d94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0d98: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x3e0d98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x3e0d9c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0d9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0da0: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0da4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0da8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0dac: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3e0dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x3e0db0: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0db4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0dbc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0dc0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0dc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0dc4: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0dc8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0dcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0dccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0dd0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3e0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3e0dd4: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0ddc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0de0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0de4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0de4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0de8: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x3e0de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3e0dec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3e0decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e0df0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e0df0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e0df4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x3e0df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x3e0df8: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x3e0df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x3e0dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e0e00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0e04: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3e0e08: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3e0e08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e0e0c: 0x15a0ffd6  bnez        $t5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3E0E0Cu;
    {
        const bool branch_taken_0x3e0e0c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E0Cu;
        // 0x3e0e10: 0x642026  xor         $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e0c) {
            ctx->pc = 0x3E0D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0d68;
        }
    }
    ctx->pc = 0x3E0E14u;
label_3e0e14:
    // 0x3e0e14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e0e18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3e0e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E1Cu;
        // 0x3e0e20: 0x821026  xor         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0E24u;
    // 0x3e0e24: 0x0  nop
    ctx->pc = 0x3e0e24u;
    // NOP
    // 0x3e0e28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3e0e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E2Cu;
        // 0x3e0e30: 0x2442d8a0  addiu       $v0, $v0, -0x2760 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0E34u;
    // 0x3e0e34: 0x0  nop
    ctx->pc = 0x3e0e34u;
    // NOP
    ctx->pc = 0x3e0e38u;
}
