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

// Function: sub_00340F20
// Address: 0x340f20 - 0x341018
void sub_00340F20_0x340f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340F20_0x340f20");
#endif

    switch (ctx->pc) {
        case 0x340f20u: goto label_340f20;
        case 0x340f24u: goto label_340f24;
        case 0x340f28u: goto label_340f28;
        case 0x340f2cu: goto label_340f2c;
        case 0x340f30u: goto label_340f30;
        case 0x340f34u: goto label_340f34;
        case 0x340f38u: goto label_340f38;
        case 0x340f3cu: goto label_340f3c;
        case 0x340f40u: goto label_340f40;
        case 0x340f44u: goto label_340f44;
        case 0x340f48u: goto label_340f48;
        case 0x340f4cu: goto label_340f4c;
        case 0x340f50u: goto label_340f50;
        case 0x340f54u: goto label_340f54;
        case 0x340f58u: goto label_340f58;
        case 0x340f5cu: goto label_340f5c;
        case 0x340f60u: goto label_340f60;
        case 0x340f64u: goto label_340f64;
        case 0x340f68u: goto label_340f68;
        case 0x340f6cu: goto label_340f6c;
        case 0x340f70u: goto label_340f70;
        case 0x340f74u: goto label_340f74;
        case 0x340f78u: goto label_340f78;
        case 0x340f7cu: goto label_340f7c;
        case 0x340f80u: goto label_340f80;
        case 0x340f84u: goto label_340f84;
        case 0x340f88u: goto label_340f88;
        case 0x340f8cu: goto label_340f8c;
        case 0x340f90u: goto label_340f90;
        case 0x340f94u: goto label_340f94;
        case 0x340f98u: goto label_340f98;
        case 0x340f9cu: goto label_340f9c;
        case 0x340fa0u: goto label_340fa0;
        case 0x340fa4u: goto label_340fa4;
        case 0x340fa8u: goto label_340fa8;
        case 0x340facu: goto label_340fac;
        case 0x340fb0u: goto label_340fb0;
        case 0x340fb4u: goto label_340fb4;
        case 0x340fb8u: goto label_340fb8;
        case 0x340fbcu: goto label_340fbc;
        case 0x340fc0u: goto label_340fc0;
        case 0x340fc4u: goto label_340fc4;
        case 0x340fc8u: goto label_340fc8;
        case 0x340fccu: goto label_340fcc;
        case 0x340fd0u: goto label_340fd0;
        case 0x340fd4u: goto label_340fd4;
        case 0x340fd8u: goto label_340fd8;
        case 0x340fdcu: goto label_340fdc;
        case 0x340fe0u: goto label_340fe0;
        case 0x340fe4u: goto label_340fe4;
        case 0x340fe8u: goto label_340fe8;
        case 0x340fecu: goto label_340fec;
        case 0x340ff0u: goto label_340ff0;
        case 0x340ff4u: goto label_340ff4;
        case 0x340ff8u: goto label_340ff8;
        case 0x340ffcu: goto label_340ffc;
        case 0x341000u: goto label_341000;
        case 0x341004u: goto label_341004;
        case 0x341008u: goto label_341008;
        case 0x34100cu: goto label_34100c;
        case 0x341010u: goto label_341010;
        case 0x341014u: goto label_341014;
        default: break;
    }

    ctx->pc = 0x340f20u;

label_340f20:
    // 0x340f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_340f24:
    // 0x340f24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x340f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_340f28:
    // 0x340f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_340f2c:
    // 0x340f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340f30:
    // 0x340f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_340f34:
    // 0x340f34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x340f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_340f38:
    // 0x340f38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x340f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_340f3c:
    // 0x340f3c: 0x1c400030  bgtz        $v0, . + 4 + (0x30 << 2)
label_340f40:
    if (ctx->pc == 0x340F40u) {
        ctx->pc = 0x340F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F3Cu;
        // 0x340f40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F44u;
        goto label_340f44;
    }
    ctx->pc = 0x340F3Cu;
    {
        const bool branch_taken_0x340f3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x340F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F3Cu;
        // 0x340f40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f3c) {
            ctx->pc = 0x341000u;
            goto label_341000;
        }
    }
    ctx->pc = 0x340F44u;
label_340f44:
    // 0x340f44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x340f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_340f48:
    // 0x340f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x340f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340f4c:
    // 0x340f4c: 0x2443c2c8  addiu       $v1, $v0, -0x3D38
    ctx->pc = 0x340f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_340f50:
    // 0x340f50: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x340f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_340f54:
    // 0x340f54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_340f58:
    if (ctx->pc == 0x340F58u) {
        ctx->pc = 0x340F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F54u;
        // 0x340f58: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F5Cu;
        goto label_340f5c;
    }
    ctx->pc = 0x340F54u;
    {
        const bool branch_taken_0x340f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F54u;
        // 0x340f58: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f54) {
            ctx->pc = 0x340FC0u;
            goto label_340fc0;
        }
    }
    ctx->pc = 0x340F5Cu;
label_340f5c:
    // 0x340f5c: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_340f60:
    if (ctx->pc == 0x340F60u) {
        ctx->pc = 0x340F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F5Cu;
        // 0x340f60: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F64u;
        goto label_340f64;
    }
    ctx->pc = 0x340F5Cu;
    {
        const bool branch_taken_0x340f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x340f5c) {
            ctx->pc = 0x340F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340F5Cu;
            // 0x340f60: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340F84u;
            goto label_340f84;
        }
    }
    ctx->pc = 0x340F64u;
label_340f64:
    // 0x340f64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x340f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340f68:
    // 0x340f68: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
label_340f6c:
    if (ctx->pc == 0x340F6Cu) {
        ctx->pc = 0x340F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F68u;
        // 0x340f6c: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F70u;
        goto label_340f70;
    }
    ctx->pc = 0x340F68u;
    {
        const bool branch_taken_0x340f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x340f68) {
            ctx->pc = 0x340F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340F68u;
            // 0x340f6c: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340F84u;
            goto label_340f84;
        }
    }
    ctx->pc = 0x340F70u;
label_340f70:
    // 0x340f70: 0x10000013  b           . + 4 + (0x13 << 2)
label_340f74:
    if (ctx->pc == 0x340F74u) {
        ctx->pc = 0x340F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F70u;
        // 0x340f74: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F78u;
        goto label_340f78;
    }
    ctx->pc = 0x340F70u;
    {
        const bool branch_taken_0x340f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F70u;
        // 0x340f74: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f70) {
            ctx->pc = 0x340FC0u;
            goto label_340fc0;
        }
    }
    ctx->pc = 0x340F78u;
label_340f78:
    // 0x340f78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x340f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_340f7c:
    // 0x340f7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_340f80:
    if (ctx->pc == 0x340F80u) {
        ctx->pc = 0x340F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F7Cu;
        // 0x340f80: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340F84u;
        goto label_340f84;
    }
    ctx->pc = 0x340F7Cu;
    {
        const bool branch_taken_0x340f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F7Cu;
        // 0x340f80: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f7c) {
            ctx->pc = 0x340FB0u;
            goto label_340fb0;
        }
    }
    ctx->pc = 0x340F84u;
label_340f84:
    // 0x340f84: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x340f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_340f88:
    // 0x340f88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x340f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_340f8c:
    // 0x340f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340f90:
    // 0x340f90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x340f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_340f94:
    // 0x340f94: 0x0  nop
    ctx->pc = 0x340f94u;
    // NOP
label_340f98:
    // 0x340f98: 0x5050fff7  beql        $v0, $s0, . + 4 + (-0x9 << 2)
label_340f9c:
    if (ctx->pc == 0x340F9Cu) {
        ctx->pc = 0x340F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F98u;
        // 0x340f9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FA0u;
        goto label_340fa0;
    }
    ctx->pc = 0x340F98u;
    {
        const bool branch_taken_0x340f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x340f98) {
            ctx->pc = 0x340F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340F98u;
            // 0x340f9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340f78;
        }
    }
    ctx->pc = 0x340FA0u;
label_340fa0:
    // 0x340fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340fa4:
    // 0x340fa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x340fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_340fa8:
    // 0x340fa8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_340fac:
    if (ctx->pc == 0x340FACu) {
        ctx->pc = 0x340FB0u;
        goto label_340fb0;
    }
    ctx->pc = 0x340FA8u;
    {
        const bool branch_taken_0x340fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x340fa8) {
            ctx->pc = 0x340F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340f98;
        }
    }
    ctx->pc = 0x340FB0u;
label_340fb0:
    // 0x340fb0: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38
    ctx->pc = 0x340fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_340fb4:
    // 0x340fb4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x340fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_340fb8:
    // 0x340fb8: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_340fbc:
    if (ctx->pc == 0x340FBCu) {
        ctx->pc = 0x340FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FB8u;
        // 0x340fbc: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FC0u;
        goto label_340fc0;
    }
    ctx->pc = 0x340FB8u;
    {
        const bool branch_taken_0x340fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x340fb8) {
            ctx->pc = 0x340FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340FB8u;
            // 0x340fbc: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340FC0u;
            goto label_340fc0;
        }
    }
    ctx->pc = 0x340FC0u;
label_340fc0:
    // 0x340fc0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x340fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_340fc4:
    // 0x340fc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_340fc8:
    if (ctx->pc == 0x340FC8u) {
        ctx->pc = 0x340FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FC4u;
        // 0x340fc8: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FCCu;
        goto label_340fcc;
    }
    ctx->pc = 0x340FC4u;
    {
        const bool branch_taken_0x340fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x340FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FC4u;
        // 0x340fc8: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fc4) {
            ctx->pc = 0x340FD8u;
            goto label_340fd8;
        }
    }
    ctx->pc = 0x340FCCu;
label_340fcc:
    // 0x340fcc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x340fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_340fd0:
    // 0x340fd0: 0x40f809  jalr        $v0
label_340fd4:
    if (ctx->pc == 0x340FD4u) {
        ctx->pc = 0x340FD8u;
        goto label_340fd8;
    }
    ctx->pc = 0x340FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340FD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340FD0u, 0x340FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340FD8u;
label_340fd8:
    // 0x340fd8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x340fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340fdc:
    // 0x340fdc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_340fe0:
    if (ctx->pc == 0x340FE0u) {
        ctx->pc = 0x340FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FDCu;
        // 0x340fe0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340FE4u;
        goto label_340fe4;
    }
    ctx->pc = 0x340FDCu;
    {
        const bool branch_taken_0x340fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fdc) {
            ctx->pc = 0x340FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340FDCu;
            // 0x340fe0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340FF0u;
            goto label_340ff0;
        }
    }
    ctx->pc = 0x340FE4u;
label_340fe4:
    // 0x340fe4: 0xc0d1054  jal         func_344150
label_340fe8:
    if (ctx->pc == 0x340FE8u) {
        ctx->pc = 0x340FECu;
        goto label_340fec;
    }
    ctx->pc = 0x340FE4u;
    SET_GPR_U32(ctx, 31, 0x340FECu);
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x340FE4u, 0x340FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340FECu;
label_340fec:
    // 0x340fec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x340fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_340ff0:
    // 0x340ff0: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x340ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_340ff4:
    // 0x340ff4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x340ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_340ff8:
    // 0x340ff8: 0x40f809  jalr        $v0
label_340ffc:
    if (ctx->pc == 0x340FFCu) {
        ctx->pc = 0x340FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FF8u;
        // 0x340ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341000u;
        goto label_341000;
    }
    ctx->pc = 0x340FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341000u);
        ctx->pc = 0x340FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FF8u;
        // 0x340ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340FF8u, 0x341000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341000u;
label_341000:
    // 0x341000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341004:
    // 0x341004: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x341004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_341008:
    // 0x341008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34100c:
    // 0x34100c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341010:
    // 0x341010: 0x3e00008  jr          $ra
label_341014:
    if (ctx->pc == 0x341014u) {
        ctx->pc = 0x341014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341010u;
        // 0x341014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341018u;
        goto label_fallthrough_0x341010;
    }
    ctx->pc = 0x341010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341010u;
        // 0x341014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341010:
    ctx->pc = 0x341018u;
}
