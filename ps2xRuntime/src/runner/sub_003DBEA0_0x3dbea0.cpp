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

// Function: sub_003DBEA0
// Address: 0x3dbea0 - 0x3dbf70
void sub_003DBEA0_0x3dbea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBEA0_0x3dbea0");
#endif

    switch (ctx->pc) {
        case 0x3dbf60u: goto label_3dbf60;
        default: break;
    }

    ctx->pc = 0x3dbea0u;

    // 0x3dbea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbea4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3dbea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbeac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3dbeb0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3dbeb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbeb4: 0x8d0416d4  lw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbeb8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3dbeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3dbebc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DBEBCu;
    {
        const bool branch_taken_0x3dbebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBEBCu;
        // 0x3dbec0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbebc) {
            ctx->pc = 0x3DBF30u;
            goto label_3dbf30;
        }
    }
    ctx->pc = 0x3DBEC4u;
    // 0x3dbec4: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbec8: 0x872804  sllv        $a1, $a3, $a0
    ctx->pc = 0x3dbec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dbecc: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3dbed0: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x3dbed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3dbed4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3dbed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3dbed8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3dbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbedc: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbedcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dbee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dbee4: 0x910216d0  lbu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dbee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbeec: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dbef0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3dbef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dbef4: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x3dbef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x3dbef8: 0x950316d0  lhu         $v1, 0x16D0($t0)
    ctx->pc = 0x3dbef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbefc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3dbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3dbf00: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dbf04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dbf08: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dbf08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dbf0c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dbf10: 0xad05001c  sw          $a1, 0x1C($t0)
    ctx->pc = 0x3dbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
    // 0x3dbf14: 0x8d0316d4  lw          $v1, 0x16D4($t0)
    ctx->pc = 0x3dbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5844)));
    // 0x3dbf18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3dbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dbf1c: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x3dbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x3dbf20: 0x463007  srav        $a2, $a2, $v0
    ctx->pc = 0x3dbf20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3dbf24: 0xad0316d4  sw          $v1, 0x16D4($t0)
    ctx->pc = 0x3dbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 3));
    // 0x3dbf28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBF28u;
    {
        const bool branch_taken_0x3dbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF28u;
        // 0x3dbf2c: 0xa50616d0  sh          $a2, 0x16D0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf28) {
            ctx->pc = 0x3DBF48u;
            goto label_3dbf48;
        }
    }
    ctx->pc = 0x3DBF30u;
label_3dbf30:
    // 0x3dbf30: 0x950216d0  lhu         $v0, 0x16D0($t0)
    ctx->pc = 0x3dbf30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5840)));
    // 0x3dbf34: 0x871804  sllv        $v1, $a3, $a0
    ctx->pc = 0x3dbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x3dbf38: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3dbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3dbf3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3dbf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3dbf40: 0xad0416d4  sw          $a0, 0x16D4($t0)
    ctx->pc = 0x3dbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5844), GPR_U32(ctx, 4));
    // 0x3dbf44: 0xa50216d0  sh          $v0, 0x16D0($t0)
    ctx->pc = 0x3dbf44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5840), (uint16_t)GPR_U32(ctx, 2));
label_3dbf48:
    // 0x3dbf48: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3dbf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbf4c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3dbf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbf50: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x3dbf50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3dbf54: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3dbf54u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3dbf58: 0xc0f70dc  jal         func_3DC370
    ctx->pc = 0x3DBF58u;
    SET_GPR_U32(ctx, 31, 0x3DBF60u);
    ctx->pc = 0x3DBF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBF58u;
    // 0x3dbf5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC370u, 0x3DBF58u, 0x3DBF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF60u;
label_3dbf60:
    // 0x3dbf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbf64: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF64u;
        // 0x3dbf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBF6Cu;
    // 0x3dbf6c: 0x0  nop
    ctx->pc = 0x3dbf6cu;
    // NOP
    ctx->pc = 0x3dbf70u;
}
