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

// Function: sub_003F8CD8
// Address: 0x3f8cd8 - 0x3f94d0
void sub_003F8CD8_0x3f8cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8CD8_0x3f8cd8");
#endif

    switch (ctx->pc) {
        case 0x3f8dd0u: goto label_3f8dd0;
        case 0x3f8ec8u: goto label_3f8ec8;
        case 0x3f9000u: goto label_3f9000;
        case 0x3f9138u: goto label_3f9138;
        case 0x3f92a0u: goto label_3f92a0;
        case 0x3f93b0u: goto label_3f93b0;
        case 0x3f94b8u: goto label_3f94b8;
        default: break;
    }

    ctx->pc = 0x3f8cd8u;

    // 0x3f8cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f8cdc: 0x2d020005  sltiu       $v0, $t0, 0x5
    ctx->pc = 0x3f8cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3f8ce0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f8ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f8ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f8ce8: 0x104001f0  beqz        $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x3F8CE8u;
    {
        const bool branch_taken_0x3f8ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8CE8u;
        // 0x3f8cec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ce8) {
            ctx->pc = 0x3F94ACu;
            goto label_3f94ac;
        }
    }
    ctx->pc = 0x3F8CF0u;
    // 0x3f8cf0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f8cf4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3f8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3f8cf8: 0x2442f690  addiu       $v0, $v0, -0x970
    ctx->pc = 0x3f8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964880));
    // 0x3f8cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8d00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f8d04: 0x800008  jr          $a0
    ctx->pc = 0x3F8D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F8D0Cu: goto label_3f8d0c;
            case 0x3F8E2Cu: goto label_3f8e2c;
            case 0x3F8F24u: goto label_3f8f24;
            case 0x3F91C8u: goto label_3f91c8;
            case 0x3F94BCu: goto label_3f94bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F8D04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F8D0Cu;
label_3f8d0c:
    // 0x3f8d0c: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x3f8d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x3f8d10: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x3f8d10u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3f8d14: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x3f8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3f8d18: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f8d1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3f8d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f8d24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f8d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f8d28: 0x10a182b  sltu        $v1, $t0, $t2
    ctx->pc = 0x3f8d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3f8d2c: 0x106001e3  beqz        $v1, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x3F8D2Cu;
    {
        const bool branch_taken_0x3f8d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D2Cu;
        // 0x3f8d30: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d2c) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F8D34u;
    // 0x3f8d34: 0x148102f  dsubu       $v0, $t2, $t0
    ctx->pc = 0x3f8d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 8));
    // 0x3f8d38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3f8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8d3c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3f8d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3f8d40: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x3f8d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3f8d44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F8D44u;
    {
        const bool branch_taken_0x3f8d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D44u;
        // 0x3f8d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d44) {
            ctx->pc = 0x3F8DA0u;
            goto label_3f8da0;
        }
    }
    ctx->pc = 0x3F8D4Cu;
    // 0x3f8d4c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F8D4Cu;
    {
        const bool branch_taken_0x3f8d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8D4Cu;
        // 0x3f8d50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8d4c) {
            ctx->pc = 0x3F8DC4u;
            goto label_3f8dc4;
        }
    }
    ctx->pc = 0x3F8D54u;
    // 0x3f8d54: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F8D54u;
    {
        const bool branch_taken_0x3f8d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8d54) {
            ctx->pc = 0x3F8D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8D54u;
            // 0x3f8d58: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8DA4u;
            goto label_3f8da4;
        }
    }
    ctx->pc = 0x3F8D5Cu;
    // 0x3f8d5c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f8d60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F8D60u;
    {
        const bool branch_taken_0x3f8d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8d60) {
            ctx->pc = 0x3F8D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8D60u;
            // 0x3f8d64: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8D88u;
            goto label_3f8d88;
        }
    }
    ctx->pc = 0x3F8D68u;
    // 0x3f8d68: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f8d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f8d6c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3f8d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f8d70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3f8d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f8d74: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3f8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f8d78: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3f8d78u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3f8d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8d80: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8d84: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f8d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8d88:
    // 0x3f8d88: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3f8d88u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3f8d8c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8d90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f8d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8d98: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f8d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8d9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f8d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f8da0:
    // 0x3f8da0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f8da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8da4:
    // 0x3f8da4: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3f8da4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3f8da8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8dac: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3f8dacu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3f8db0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f8db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f8db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8db8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3f8db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8dbc: 0x112001bf  beqz        $t1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x3F8DBCu;
    {
        const bool branch_taken_0x3f8dbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8DBCu;
        // 0x3f8dc0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8dbc) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F8DC4u;
label_3f8dc4:
    // 0x3f8dc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3f8dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8dc8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3f8dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8dcc: 0x0  nop
    ctx->pc = 0x3f8dccu;
    // NOP
label_3f8dd0:
    // 0x3f8dd0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3f8dd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8dd4: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3f8dd4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3f8dd8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f8dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f8ddc: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3f8ddcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3f8de0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3f8de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3f8de4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f8de8: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3f8de8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f8dec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f8decu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8df0: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x3f8df0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3f8df4: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3f8df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3f8df8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8dfc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3f8dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f8e00: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3f8e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3f8e04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f8e08: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3f8e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f8e0c: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3f8e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3f8e10: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3f8e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3f8e14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3f8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3f8e18: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x3f8e18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f8e1c: 0x1520ffec  bnez        $t1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3F8E1Cu;
    {
        const bool branch_taken_0x3f8e1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E1Cu;
        // 0x3f8e20: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e1c) {
            ctx->pc = 0x3F8DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8dd0;
        }
    }
    ctx->pc = 0x3F8E24u;
    // 0x3f8e24: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x3F8E24u;
    {
        const bool branch_taken_0x3f8e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E24u;
        // 0x3f8e28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e24) {
            ctx->pc = 0x3F94C0u;
            goto label_3f94c0;
        }
    }
    ctx->pc = 0x3F8E2Cu;
label_3f8e2c:
    // 0x3f8e2c: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x3f8e2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3f8e30: 0x114001a2  beqz        $t2, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x3F8E30u;
    {
        const bool branch_taken_0x3f8e30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E30u;
        // 0x3f8e34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e30) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F8E38u;
    // 0x3f8e38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f8e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e3c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3f8e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8e40: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F8E40u;
    {
        const bool branch_taken_0x3f8e40 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3F8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E40u;
        // 0x3f8e44: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e40) {
            ctx->pc = 0x3F8E9Cu;
            goto label_3f8e9c;
        }
    }
    ctx->pc = 0x3F8E48u;
    // 0x3f8e48: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F8E48u;
    {
        const bool branch_taken_0x3f8e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8E48u;
        // 0x3f8e4c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8e48) {
            ctx->pc = 0x3F8EC0u;
            goto label_3f8ec0;
        }
    }
    ctx->pc = 0x3F8E50u;
    // 0x3f8e50: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F8E50u;
    {
        const bool branch_taken_0x3f8e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8e50) {
            ctx->pc = 0x3F8E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8E50u;
            // 0x3f8e54: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8EA0u;
            goto label_3f8ea0;
        }
    }
    ctx->pc = 0x3F8E58u;
    // 0x3f8e58: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f8e5c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F8E5Cu;
    {
        const bool branch_taken_0x3f8e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8e5c) {
            ctx->pc = 0x3F8E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8E5Cu;
            // 0x3f8e60: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8E84u;
            goto label_3f8e84;
        }
    }
    ctx->pc = 0x3F8E64u;
    // 0x3f8e64: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3f8e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f8e68: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x3f8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3f8e6c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3f8e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8e70: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x3f8e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f8e74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f8e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8e7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3f8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8e80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f8e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f8e84:
    // 0x3f8e84: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3f8e84u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3f8e88: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8e8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f8e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f8e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8e94: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f8e94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8e98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f8e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f8e9c:
    // 0x3f8e9c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f8e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f8ea0:
    // 0x3f8ea0: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3f8ea0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3f8ea4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8ea8: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3f8ea8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3f8eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f8eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f8eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f8eb4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f8eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8eb8: 0x11200180  beqz        $t1, . + 4 + (0x180 << 2)
    ctx->pc = 0x3F8EB8u;
    {
        const bool branch_taken_0x3f8eb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8EB8u;
        // 0x3f8ebc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8eb8) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F8EC0u;
label_3f8ec0:
    // 0x3f8ec0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3f8ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ec4: 0x0  nop
    ctx->pc = 0x3f8ec4u;
    // NOP
label_3f8ec8:
    // 0x3f8ec8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3f8ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8ecc: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3f8eccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3f8ed0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f8ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f8ed4: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3f8ed4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3f8ed8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3f8ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3f8edc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f8ee0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3f8ee0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f8ee4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f8ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f8ee8: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x3f8ee8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3f8eec: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3f8eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3f8ef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8ef4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3f8ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f8ef8: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3f8ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3f8efc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f8efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f8f00: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3f8f00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f8f04: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3f8f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3f8f08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3f8f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3f8f0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3f8f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3f8f10: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x3f8f10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f8f14: 0x1520ffec  bnez        $t1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3F8F14u;
    {
        const bool branch_taken_0x3f8f14 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F14u;
        // 0x3f8f18: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f14) {
            ctx->pc = 0x3F8EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f8ec8;
        }
    }
    ctx->pc = 0x3F8F1Cu;
    // 0x3f8f1c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x3F8F1Cu;
    {
        const bool branch_taken_0x3f8f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F1Cu;
        // 0x3f8f20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f1c) {
            ctx->pc = 0x3F94C0u;
            goto label_3f94c0;
        }
    }
    ctx->pc = 0x3F8F24u;
label_3f8f24:
    // 0x3f8f24: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x3f8f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x3f8f28: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3f8f28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f2c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x3f8f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3f8f30: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3f8f30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f34: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x3f8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3f8f38: 0x200702d  daddu       $t6, $s0, $zero
    ctx->pc = 0x3f8f38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f3c: 0x260fa  dsrl        $t4, $v0, 3
    ctx->pc = 0x3f8f3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> 3);
    // 0x3f8f40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f8f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f44: 0x11800049  beqz        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x3F8F44u;
    {
        const bool branch_taken_0x3f8f44 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F44u;
        // 0x3f8f48: 0x6c682f  dsubu       $t5, $v1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f44) {
            ctx->pc = 0x3F906Cu;
            goto label_3f906c;
        }
    }
    ctx->pc = 0x3F8F4Cu;
    // 0x3f8f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f8f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f50: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3f8f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f54: 0x1980001c  blez        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x3F8F54u;
    {
        const bool branch_taken_0x3f8f54 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F54u;
        // 0x3f8f58: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f54) {
            ctx->pc = 0x3F8FC8u;
            goto label_3f8fc8;
        }
    }
    ctx->pc = 0x3F8F5Cu;
    // 0x3f8f5c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3F8F5Cu;
    {
        const bool branch_taken_0x3f8f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F5Cu;
        // 0x3f8f60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f5c) {
            ctx->pc = 0x3F8FF8u;
            goto label_3f8ff8;
        }
    }
    ctx->pc = 0x3F8F64u;
    // 0x3f8f64: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F8F64u;
    {
        const bool branch_taken_0x3f8f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8f64) {
            ctx->pc = 0x3F8F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8F64u;
            // 0x3f8f68: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8FCCu;
            goto label_3f8fcc;
        }
    }
    ctx->pc = 0x3F8F6Cu;
    // 0x3f8f6c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f8f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f8f70: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3F8F70u;
    {
        const bool branch_taken_0x3f8f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8f70) {
            ctx->pc = 0x3F8F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F8F70u;
            // 0x3f8f74: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F8FA4u;
            goto label_3f8fa4;
        }
    }
    ctx->pc = 0x3F8F78u;
    // 0x3f8f78: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f8f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f8f7c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3f8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3f8f80: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3f8f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f8f84: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3f8f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f8f88: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f8f8c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3f8f8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8f94: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3f8f94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f98: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3f8f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f8f9c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3f8f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8fa0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f8fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8fa4:
    // 0x3f8fa4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f8fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f8fa8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8fac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f8facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f8fb0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f8fb4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3f8fb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3f8fb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8fbc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f8fbcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f8fc0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f8fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f8fc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f8fc8:
    // 0x3f8fc8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f8fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8fcc:
    // 0x3f8fcc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f8fccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f8fd0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f8fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f8fd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f8fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f8fd8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f8fdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3f8fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f8fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f8fe4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3f8fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3f8fe8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f8fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f8fec: 0x14c402b  sltu        $t0, $t2, $t4
    ctx->pc = 0x3f8fecu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3f8ff0: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3F8FF0u;
    {
        const bool branch_taken_0x3f8ff0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8FF0u;
        // 0x3f8ff4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8ff0) {
            ctx->pc = 0x3F906Cu;
            goto label_3f906c;
        }
    }
    ctx->pc = 0x3F8FF8u;
label_3f8ff8:
    // 0x3f8ff8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3f8ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8ffc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3f8ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9000:
    // 0x3f9000: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3f9000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f9004: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3f9004u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3f9008: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3f9008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f900c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3f900cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3f9010: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f9010u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f9014: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3f9014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3f9018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f9018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f901c: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x3f901cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f9020: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3f9020u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f9024: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3f9024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3f9028: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x3f9028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3f902c: 0x14c402b  sltu        $t0, $t2, $t4
    ctx->pc = 0x3f902cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3f9030: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3f9030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3f9034: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f9034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f9038: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f9038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f903c: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3f903cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f9040: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3f9040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3f9044: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f9044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f9048: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3f9048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3f904c: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x3f904cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f9050: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3f9050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3f9054: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3f9054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3f9058: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3f9058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3f905c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f9060: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x3f9060u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f9064: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3F9064u;
    {
        const bool branch_taken_0x3f9064 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9064u;
        // 0x3f9068: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9064) {
            ctx->pc = 0x3F9000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9000;
        }
    }
    ctx->pc = 0x3F906Cu;
label_3f906c:
    // 0x3f906c: 0x11a00113  beqz        $t5, . + 4 + (0x113 << 2)
    ctx->pc = 0x3F906Cu;
    {
        const bool branch_taken_0x3f906c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F906Cu;
        // 0x3f9070: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f906c) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F9074u;
    // 0x3f9074: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3f9074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9078: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3f9078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f907c: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x3f907cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9080: 0x19a0001e  blez        $t5, . + 4 + (0x1E << 2)
    ctx->pc = 0x3F9080u;
    {
        const bool branch_taken_0x3f9080 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9080u;
        // 0x3f9084: 0x31a30003  andi        $v1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9080) {
            ctx->pc = 0x3F90FCu;
            goto label_3f90fc;
        }
    }
    ctx->pc = 0x3F9088u;
    // 0x3f9088: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3F9088u;
    {
        const bool branch_taken_0x3f9088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9088u;
        // 0x3f908c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9088) {
            ctx->pc = 0x3F9130u;
            goto label_3f9130;
        }
    }
    ctx->pc = 0x3F9090u;
    // 0x3f9090: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F9090u;
    {
        const bool branch_taken_0x3f9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9090) {
            ctx->pc = 0x3F9094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9090u;
            // 0x3f9094: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9100u;
            goto label_3f9100;
        }
    }
    ctx->pc = 0x3F9098u;
    // 0x3f9098: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f9098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f909c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3F909Cu;
    {
        const bool branch_taken_0x3f909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f909c) {
            ctx->pc = 0x3F90A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F909Cu;
            // 0x3f90a0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F90D4u;
            goto label_3f90d4;
        }
    }
    ctx->pc = 0x3F90A4u;
    // 0x3f90a4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f90a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f90a8: 0x25c80001  addiu       $t0, $t6, 0x1
    ctx->pc = 0x3f90a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3f90ac: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x3f90acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3f90b0: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x3f90b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3f90b4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3f90b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3f90b8: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x3f90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3f90bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3f90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f90c0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3f90c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f90c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f90c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f90c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f90cc: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3f90ccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f90d0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f90d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f90d4:
    // 0x3f90d4: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f90d4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f90d8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f90d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f90dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f90e0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f90e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f90e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f90e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f90e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f90ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f90ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f90f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f90f4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f90f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f90f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3f90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3f90fc:
    // 0x3f90fc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f90fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f9100:
    // 0x3f9100: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3f9100u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3f9104: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f9104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f9108: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f9108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f910c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3f910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f9110: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f9110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f9114: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3f9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f9118: 0x14d582b  sltu        $t3, $t2, $t5
    ctx->pc = 0x3f9118u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3f911c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f911cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f9120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f9124: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3f9124u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f9128: 0x116000e4  beqz        $t3, . + 4 + (0xE4 << 2)
    ctx->pc = 0x3F9128u;
    {
        const bool branch_taken_0x3f9128 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9128u;
        // 0x3f912c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9128) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F9130u;
label_3f9130:
    // 0x3f9130: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3f9130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9134: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3f9134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9138:
    // 0x3f9138: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f9138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f913c: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x3f913cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3f9140: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3f9140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3f9144: 0x14d582b  sltu        $t3, $t2, $t5
    ctx->pc = 0x3f9144u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3f9148: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3f9148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f914c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3f914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f9150: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x3f9150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3f9154: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f9154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f9158: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x3f9158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3f915c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f9160: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x3f9160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3f9164: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3f9164u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f9168: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3f9168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3f916c: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x3f916cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3f9170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9174: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f9174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f9178: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3f9178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3f917c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x3f917cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f9180: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x3f9180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3f9184: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x3f9184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3f9188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f918c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f918cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f9190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f9190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f9194: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x3f9194u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f9198: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x3f9198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3f919c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x3f919cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3f91a0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3f91a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3f91a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3f91a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3f91a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f91ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f91acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3f91b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3f91b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3f91b4: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x3f91b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f91b8: 0x1560ffdf  bnez        $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3F91B8u;
    {
        const bool branch_taken_0x3f91b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91B8u;
        // 0x3f91bc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f91b8) {
            ctx->pc = 0x3F9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9138;
        }
    }
    ctx->pc = 0x3F91C0u;
    // 0x3f91c0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3F91C0u;
    {
        const bool branch_taken_0x3f91c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91C0u;
        // 0x3f91c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f91c0) {
            ctx->pc = 0x3F94C0u;
            goto label_3f94c0;
        }
    }
    ctx->pc = 0x3F91C8u;
label_3f91c8:
    // 0x3f91c8: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x3f91c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x3f91cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3f91ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91d0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x3f91d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3f91d4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x3f91d4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91d8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x3f91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3f91dc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3f91dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91e0: 0x260fa  dsrl        $t4, $v0, 3
    ctx->pc = 0x3f91e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> 3);
    // 0x3f91e4: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x3f91e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91e8: 0x6cc02f  dsubu       $t8, $v1, $t4
    ctx->pc = 0x3f91e8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
    // 0x3f91ec: 0x11800043  beqz        $t4, . + 4 + (0x43 << 2)
    ctx->pc = 0x3F91ECu;
    {
        const bool branch_taken_0x3f91ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91ECu;
        // 0x3f91f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f91ec) {
            ctx->pc = 0x3F92FCu;
            goto label_3f92fc;
        }
    }
    ctx->pc = 0x3F91F4u;
    // 0x3f91f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f91f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91f8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3f91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91fc: 0x1980001b  blez        $t4, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F91FCu;
    {
        const bool branch_taken_0x3f91fc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3F9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91FCu;
        // 0x3f9200: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f91fc) {
            ctx->pc = 0x3F926Cu;
            goto label_3f926c;
        }
    }
    ctx->pc = 0x3F9204u;
    // 0x3f9204: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3F9204u;
    {
        const bool branch_taken_0x3f9204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9204u;
        // 0x3f9208: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9204) {
            ctx->pc = 0x3F9298u;
            goto label_3f9298;
        }
    }
    ctx->pc = 0x3F920Cu;
    // 0x3f920c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F920Cu;
    {
        const bool branch_taken_0x3f920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f920c) {
            ctx->pc = 0x3F9210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F920Cu;
            // 0x3f9210: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9270u;
            goto label_3f9270;
        }
    }
    ctx->pc = 0x3F9214u;
    // 0x3f9214: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f9214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f9218: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3F9218u;
    {
        const bool branch_taken_0x3f9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9218) {
            ctx->pc = 0x3F921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9218u;
            // 0x3f921c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F924Cu;
            goto label_3f924c;
        }
    }
    ctx->pc = 0x3F9220u;
    // 0x3f9220: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x3f9220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f9224: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3f9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f9228: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3f9228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f922c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x3f922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f9230: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3f9230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9234: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3f9234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f923c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3f923cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9240: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3f9240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f9244: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3f9244u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f9248: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f9248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f924c:
    // 0x3f924c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f924cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f9250: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3f9250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f9254: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3f9254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3f9258: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f9258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f925c: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3f925cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3f9260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9264: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f9264u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f9268: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f9268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f926c:
    // 0x3f926c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f926cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3f9270:
    // 0x3f9270: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3f9270u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3f9274: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3f9274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f9278: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f9278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f927c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f9280: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3f9280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3f9284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9288: 0x16c482b  sltu        $t1, $t3, $t4
    ctx->pc = 0x3f9288u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3f928c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f928cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f9290: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F9290u;
    {
        const bool branch_taken_0x3f9290 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9290u;
        // 0x3f9294: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9290) {
            ctx->pc = 0x3F92FCu;
            goto label_3f92fc;
        }
    }
    ctx->pc = 0x3F9298u;
label_3f9298:
    // 0x3f9298: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3f9298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f929c: 0x0  nop
    ctx->pc = 0x3f929cu;
    // NOP
label_3f92a0:
    // 0x3f92a0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3f92a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f92a4: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3f92a4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3f92a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3f92a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f92ac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3f92acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3f92b0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3f92b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3f92b4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3f92b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3f92b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3f92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3f92bc: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3f92bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3f92c0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f92c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f92c4: 0x16c482b  sltu        $t1, $t3, $t4
    ctx->pc = 0x3f92c4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3f92c8: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x3f92c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3f92cc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x3f92ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3f92d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f92d4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3f92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f92d8: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3f92d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3f92dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3f92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3f92e0: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3f92e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f92e4: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x3f92e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3f92e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3f92e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3f92ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3f92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3f92f0: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x3f92f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f92f4: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3F92F4u;
    {
        const bool branch_taken_0x3f92f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92F4u;
        // 0x3f92f8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92f4) {
            ctx->pc = 0x3F92A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f92a0;
        }
    }
    ctx->pc = 0x3F92FCu;
label_3f92fc:
    // 0x3f92fc: 0x1300006f  beqz        $t8, . + 4 + (0x6F << 2)
    ctx->pc = 0x3F92FCu;
    {
        const bool branch_taken_0x3f92fc = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92FCu;
        // 0x3f9300: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92fc) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F9304u;
    // 0x3f9304: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x3f9304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9308: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x3f9308u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f930c: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x3f930cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9310: 0x1b000003  blez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F9310u;
    {
        const bool branch_taken_0x3f9310 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x3F9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9310u;
        // 0x3f9314: 0x33020001  andi        $v0, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9310) {
            ctx->pc = 0x3F9320u;
            goto label_3f9320;
        }
    }
    ctx->pc = 0x3F9318u;
    // 0x3f9318: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3F9318u;
    {
        const bool branch_taken_0x3f9318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9318) {
            ctx->pc = 0x3F931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9318u;
            // 0x3f931c: 0xe0702d  daddu       $t6, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F93A8u;
            goto label_3f93a8;
        }
    }
    ctx->pc = 0x3F9320u;
label_3f9320:
    // 0x3f9320: 0x91c90000  lbu         $t1, 0x0($t6)
    ctx->pc = 0x3f9320u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3f9324: 0x250f0001  addiu       $t7, $t0, 0x1
    ctx->pc = 0x3f9324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f9328: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3f9328u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f932c: 0x25b00001  addiu       $s0, $t5, 0x1
    ctx->pc = 0x3f932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3f9330: 0x91a50000  lbu         $a1, 0x0($t5)
    ctx->pc = 0x3f9330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3f9334: 0x891823  subu        $v1, $a0, $t1
    ctx->pc = 0x3f9334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3f9338: 0xa93023  subu        $a2, $a1, $t1
    ctx->pc = 0x3f9338u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3f933c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F933Cu;
    {
        const bool branch_taken_0x3f933c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3F9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F933Cu;
        // 0x3f9340: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f933c) {
            ctx->pc = 0x3F9348u;
            goto label_3f9348;
        }
    }
    ctx->pc = 0x3F9344u;
    // 0x3f9344: 0x84023  negu        $t0, $t0
    ctx->pc = 0x3f9344u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_3f9348:
    // 0x3f9348: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F9348u;
    {
        const bool branch_taken_0x3f9348 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x3F934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9348u;
        // 0x3f934c: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9348) {
            ctx->pc = 0x3F9354u;
            goto label_3f9354;
        }
    }
    ctx->pc = 0x3F9350u;
    // 0x3f9350: 0xc6023  negu        $t4, $t4
    ctx->pc = 0x3f9350u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_3f9354:
    // 0x3f9354: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3f9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f9358: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F9358u;
    {
        const bool branch_taken_0x3f9358 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3F935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9358u;
        // 0x3f935c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9358) {
            ctx->pc = 0x3F9364u;
            goto label_3f9364;
        }
    }
    ctx->pc = 0x3F9360u;
    // 0x3f9360: 0x63023  negu        $a2, $a2
    ctx->pc = 0x3f9360u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_3f9364:
    // 0x3f9364: 0x188182a  slt         $v1, $t4, $t0
    ctx->pc = 0x3f9364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3f9368: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9368u;
    {
        const bool branch_taken_0x3f9368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9368u;
        // 0x3f936c: 0x25c70001  addiu       $a3, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9368) {
            ctx->pc = 0x3F937Cu;
            goto label_3f937c;
        }
    }
    ctx->pc = 0x3F9370u;
    // 0x3f9370: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x3f9370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3f9374: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9374u;
    {
        const bool branch_taken_0x3f9374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9374) {
            ctx->pc = 0x3F9378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9374u;
            // 0x3f9378: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9388u;
            goto label_3f9388;
        }
    }
    ctx->pc = 0x3F937Cu;
label_3f937c:
    // 0x3f937c: 0xcc102a  slt         $v0, $a2, $t4
    ctx->pc = 0x3f937cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3f9380: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3f9380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9384: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x3f9384u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_3f9388:
    // 0x3f9388: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3f9388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3f938c: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3f938cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3f9390: 0x178202b  sltu        $a0, $t3, $t8
    ctx->pc = 0x3f9390u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3f9394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9398: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x3f9398u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f939c: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3F939Cu;
    {
        const bool branch_taken_0x3f939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F939Cu;
        // 0x3f93a0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f939c) {
            ctx->pc = 0x3F94BCu;
            goto label_3f94bc;
        }
    }
    ctx->pc = 0x3F93A4u;
    // 0x3f93a4: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x3f93a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f93a8:
    // 0x3f93a8: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x3f93a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f93ac: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x3f93acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f93b0:
    // 0x3f93b0: 0x91c60000  lbu         $a2, 0x0($t6)
    ctx->pc = 0x3f93b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3f93b4: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x3f93b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3f93b8: 0x91a90000  lbu         $t1, 0x0($t5)
    ctx->pc = 0x3f93b8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3f93bc: 0x1062023  subu        $a0, $t0, $a2
    ctx->pc = 0x3f93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3f93c0: 0x1261823  subu        $v1, $t1, $a2
    ctx->pc = 0x3f93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3f93c4: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F93C4u;
    {
        const bool branch_taken_0x3f93c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3F93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93C4u;
        // 0x3f93c8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f93c4) {
            ctx->pc = 0x3F93D0u;
            goto label_3f93d0;
        }
    }
    ctx->pc = 0x3F93CCu;
    // 0x3f93cc: 0x73823  negu        $a3, $a3
    ctx->pc = 0x3f93ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_3f93d0:
    // 0x3f93d0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3f93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f93d4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F93D4u;
    {
        const bool branch_taken_0x3f93d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3F93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93D4u;
        // 0x3f93d8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f93d4) {
            ctx->pc = 0x3F93E0u;
            goto label_3f93e0;
        }
    }
    ctx->pc = 0x3F93DCu;
    // 0x3f93dc: 0x52823  negu        $a1, $a1
    ctx->pc = 0x3f93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_3f93e0:
    // 0x3f93e0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F93E0u;
    {
        const bool branch_taken_0x3f93e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3F93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93E0u;
        // 0x3f93e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f93e0) {
            ctx->pc = 0x3F93ECu;
            goto label_3f93ec;
        }
    }
    ctx->pc = 0x3F93E8u;
    // 0x3f93e8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3f93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3f93ec:
    // 0x3f93ec: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3f93ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f93f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F93F0u;
    {
        const bool branch_taken_0x3f93f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93F0u;
        // 0x3f93f4: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f93f0) {
            ctx->pc = 0x3F9404u;
            goto label_3f9404;
        }
    }
    ctx->pc = 0x3F93F8u;
    // 0x3f93f8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x3f93f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f93fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F93FCu;
    {
        const bool branch_taken_0x3f93fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F93FCu;
        // 0x3f9400: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f93fc) {
            ctx->pc = 0x3F9410u;
            goto label_3f9410;
        }
    }
    ctx->pc = 0x3F9404u;
label_3f9404:
    // 0x3f9404: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x3f9404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F9408u;
    {
        const bool branch_taken_0x3f9408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9408u;
        // 0x3f940c: 0xc2180b  movn        $v1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9408) {
            ctx->pc = 0x3F9414u;
            goto label_3f9414;
        }
    }
    ctx->pc = 0x3F9410u;
label_3f9410:
    // 0x3f9410: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3f9410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f9414:
    // 0x3f9414: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3f9414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3f9418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f941c: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x3f941cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f9420: 0x91c60001  lbu         $a2, 0x1($t6)
    ctx->pc = 0x3f9420u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x3f9424: 0x91890001  lbu         $t1, 0x1($t4)
    ctx->pc = 0x3f9424u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3f9428: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x3f9428u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x3f942c: 0x91a80001  lbu         $t0, 0x1($t5)
    ctx->pc = 0x3f942cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3f9430: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x3f9430u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x3f9434: 0x1262023  subu        $a0, $t1, $a2
    ctx->pc = 0x3f9434u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3f9438: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x3f9438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3f943c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F943Cu;
    {
        const bool branch_taken_0x3f943c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3F9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F943Cu;
        // 0x3f9440: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f943c) {
            ctx->pc = 0x3F9448u;
            goto label_3f9448;
        }
    }
    ctx->pc = 0x3F9444u;
    // 0x3f9444: 0x73823  negu        $a3, $a3
    ctx->pc = 0x3f9444u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_3f9448:
    // 0x3f9448: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3f9448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f944c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F944Cu;
    {
        const bool branch_taken_0x3f944c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3F9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F944Cu;
        // 0x3f9450: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f944c) {
            ctx->pc = 0x3F9458u;
            goto label_3f9458;
        }
    }
    ctx->pc = 0x3F9454u;
    // 0x3f9454: 0x52823  negu        $a1, $a1
    ctx->pc = 0x3f9454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_3f9458:
    // 0x3f9458: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F9458u;
    {
        const bool branch_taken_0x3f9458 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3F945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9458u;
        // 0x3f945c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9458) {
            ctx->pc = 0x3F9464u;
            goto label_3f9464;
        }
    }
    ctx->pc = 0x3F9460u;
    // 0x3f9460: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3f9460u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3f9464:
    // 0x3f9464: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3f9464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f9468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9468u;
    {
        const bool branch_taken_0x3f9468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9468u;
        // 0x3f946c: 0x25ad0002  addiu       $t5, $t5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9468) {
            ctx->pc = 0x3F947Cu;
            goto label_3f947c;
        }
    }
    ctx->pc = 0x3F9470u;
    // 0x3f9470: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x3f9470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f9474: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9474u;
    {
        const bool branch_taken_0x3f9474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9474) {
            ctx->pc = 0x3F9478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9474u;
            // 0x3f9478: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9488u;
            goto label_3f9488;
        }
    }
    ctx->pc = 0x3F947Cu;
label_3f947c:
    // 0x3f947c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3f947cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3f9480: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3f9480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9484: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x3f9484u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_3f9488:
    // 0x3f9488: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x3f9488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3f948c: 0x656b0002  daddiu      $t3, $t3, 0x2
    ctx->pc = 0x3f948cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)2);
    // 0x3f9490: 0x178202b  sltu        $a0, $t3, $t8
    ctx->pc = 0x3f9490u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3f9494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9498: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x3f9498u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f949c: 0x1480ffc4  bnez        $a0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3F949Cu;
    {
        const bool branch_taken_0x3f949c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F949Cu;
        // 0x3f94a0: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f949c) {
            ctx->pc = 0x3F93B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f93b0;
        }
    }
    ctx->pc = 0x3F94A4u;
    // 0x3f94a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3F94A4u;
    {
        const bool branch_taken_0x3f94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94A4u;
        // 0x3f94a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94a4) {
            ctx->pc = 0x3F94C0u;
            goto label_3f94c0;
        }
    }
    ctx->pc = 0x3F94ACu;
label_3f94ac:
    // 0x3f94ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f94acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f94b0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F94B0u;
    SET_GPR_U32(ctx, 31, 0x3F94B8u);
    ctx->pc = 0x3F94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F94B0u;
    // 0x3f94b4: 0x24a5f660  addiu       $a1, $a1, -0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F94B0u, 0x3F94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F94B8u;
label_3f94b8:
    // 0x3f94b8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3f94b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f94bc:
    // 0x3f94bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f94bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f94c0:
    // 0x3f94c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f94c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f94c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F94C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F94C4u;
        // 0x3f94c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F94C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F94CCu;
    // 0x3f94cc: 0x0  nop
    ctx->pc = 0x3f94ccu;
    // NOP
    ctx->pc = 0x3f94d0u;
}
