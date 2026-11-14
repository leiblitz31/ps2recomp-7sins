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

// Function: sub_00228C80
// Address: 0x228c80 - 0x228e40
void sub_00228C80_0x228c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228C80_0x228c80");
#endif

    switch (ctx->pc) {
        case 0x228cb8u: goto label_228cb8;
        case 0x228cc8u: goto label_228cc8;
        case 0x228cd8u: goto label_228cd8;
        case 0x228d00u: goto label_228d00;
        case 0x228d2cu: goto label_228d2c;
        case 0x228d40u: goto label_228d40;
        case 0x228d60u: goto label_228d60;
        case 0x228da8u: goto label_228da8;
        case 0x228dc4u: goto label_228dc4;
        case 0x228dfcu: goto label_228dfc;
        case 0x228e18u: goto label_228e18;
        default: break;
    }

    ctx->pc = 0x228c80u;

    // 0x228c80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x228c84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x228c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x228c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228c98: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x228c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x228c9c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x228c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x228ca0: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x228ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x228ca4: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x228ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x228ca8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x228ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x228cac: 0x2484b720  addiu       $a0, $a0, -0x48E0
    ctx->pc = 0x228cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948640));
    // 0x228cb0: 0xc107156  jal         func_41C558
    ctx->pc = 0x228CB0u;
    SET_GPR_U32(ctx, 31, 0x228CB8u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x228CB0u, 0x228CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CB8u;
label_228cb8:
    // 0x228cb8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x228cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228cbc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228cc0: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x228CC0u;
    SET_GPR_U32(ctx, 31, 0x228CC8u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x228CC0u, 0x228CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CC8u;
label_228cc8:
    // 0x228cc8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x228cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228ccc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x228cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x228cd0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x228CD0u;
    {
        const bool branch_taken_0x228cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228cd0) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228CD8u;
label_228cd8:
    // 0x228cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cdc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x228cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228ce0: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x228ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x228ce4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x228ce8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x228CE8u;
    {
        const bool branch_taken_0x228ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228ce8) {
            ctx->pc = 0x228D80u;
            goto label_228d80;
        }
    }
    ctx->pc = 0x228CF0u;
    // 0x228cf0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x228cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228cf4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x228cf8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x228CF8u;
    SET_GPR_U32(ctx, 31, 0x228D00u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x228CF8u, 0x228D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D00u;
label_228d00:
    // 0x228d00: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x228D00u;
    {
        const bool branch_taken_0x228d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228d00) {
            ctx->pc = 0x228D80u;
            goto label_228d80;
        }
    }
    ctx->pc = 0x228D08u;
    // 0x228d08: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x228d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x228d0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228d14: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x228D14u;
    {
        const bool branch_taken_0x228d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228d14) {
            ctx->pc = 0x228D6Cu;
            goto label_228d6c;
        }
    }
    ctx->pc = 0x228D1Cu;
    // 0x228d1c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x228d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x228d20: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228d24: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x228D24u;
    SET_GPR_U32(ctx, 31, 0x228D2Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x228D24u, 0x228D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D2Cu;
label_228d2c:
    // 0x228d2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x228d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228d30: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x228d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x228d34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x228d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228d38: 0xc0e2772  jal         func_389DC8
    ctx->pc = 0x228D38u;
    SET_GPR_U32(ctx, 31, 0x228D40u);
    ctx->pc = 0x389DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389DC8u, 0x228D38u, 0x228D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D40u;
label_228d40:
    // 0x228d40: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x228d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x228d44: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x228d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x228d48: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x228d48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x228d4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228d50: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228d54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x228d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x228d58: 0xc08a390  jal         func_228E40
    ctx->pc = 0x228D58u;
    SET_GPR_U32(ctx, 31, 0x228D60u);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x228D58u, 0x228D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D60u;
label_228d60:
    // 0x228d60: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x228d64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x228D64u;
    {
        const bool branch_taken_0x228d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d64) {
            ctx->pc = 0x228E1Cu;
            goto label_228e1c;
        }
    }
    ctx->pc = 0x228D6Cu;
label_228d6c:
    // 0x228d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228d70: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x228d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228d74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x228d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228d78: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x228D78u;
    {
        const bool branch_taken_0x228d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d78) {
            ctx->pc = 0x228E1Cu;
            goto label_228e1c;
        }
    }
    ctx->pc = 0x228D80u;
label_228d80:
    // 0x228d80: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x228d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228d84: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x228d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x228d88: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x228d8c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x228d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_228d90:
    // 0x228d90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x228d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228d94: 0x8c530028  lw          $s3, 0x28($v0)
    ctx->pc = 0x228d94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x228d98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228d9c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x228d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x228da0: 0xc08a118  jal         func_228460
    ctx->pc = 0x228DA0u;
    SET_GPR_U32(ctx, 31, 0x228DA8u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x228DA0u, 0x228DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DA8u;
label_228da8:
    // 0x228da8: 0x1662ffcb  bne         $s3, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x228DA8u;
    {
        const bool branch_taken_0x228da8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x228da8) {
            ctx->pc = 0x228CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228cd8;
        }
    }
    ctx->pc = 0x228DB0u;
    // 0x228db0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x228db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x228db4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x228db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x228db8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x228DB8u;
    {
        const bool branch_taken_0x228db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x228db8) {
            ctx->pc = 0x228DE0u;
            goto label_228de0;
        }
    }
    ctx->pc = 0x228DC0u;
    // 0x228dc0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x228dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_228dc4:
    // 0x228dc4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x228dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x228dc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x228dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x228dcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228dd0: 0x0  nop
    ctx->pc = 0x228dd0u;
    // NOP
    // 0x228dd4: 0x0  nop
    ctx->pc = 0x228dd4u;
    // NOP
    // 0x228dd8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228DD8u;
    {
        const bool branch_taken_0x228dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228dd8) {
            ctx->pc = 0x228DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228dc4;
        }
    }
    ctx->pc = 0x228DE0u;
label_228de0:
    // 0x228de0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228de4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x228de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228de8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x228de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228dec: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x228decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x228df0: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x228df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x228df4: 0xc08a4ac  jal         func_2292B0
    ctx->pc = 0x228DF4u;
    SET_GPR_U32(ctx, 31, 0x228DFCu);
    ctx->pc = 0x2292B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2292B0u, 0x228DF4u, 0x228DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DFCu;
label_228dfc:
    // 0x228dfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x228dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e00: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x228E00u;
    {
        const bool branch_taken_0x228e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x228e00) {
            ctx->pc = 0x228E18u;
            goto label_228e18;
        }
    }
    ctx->pc = 0x228E08u;
    // 0x228e08: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x228e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228e0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x228e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e10: 0xc08a604  jal         func_229810
    ctx->pc = 0x228E10u;
    SET_GPR_U32(ctx, 31, 0x228E18u);
    ctx->pc = 0x229810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229810u, 0x228E10u, 0x228E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E18u;
label_228e18:
    // 0x228e18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x228e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228e1c:
    // 0x228e1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e30: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x228e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x228e34: 0x3e00008  jr          $ra
    ctx->pc = 0x228E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E3Cu;
    // 0x228e3c: 0x0  nop
    ctx->pc = 0x228e3cu;
    // NOP
    ctx->pc = 0x228e40u;
}
