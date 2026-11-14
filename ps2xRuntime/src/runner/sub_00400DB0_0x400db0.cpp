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

// Function: sub_00400DB0
// Address: 0x400db0 - 0x401158
void sub_00400DB0_0x400db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400DB0_0x400db0");
#endif

    switch (ctx->pc) {
        case 0x400e18u: goto label_400e18;
        case 0x400e2cu: goto label_400e2c;
        case 0x400e4cu: goto label_400e4c;
        case 0x400eacu: goto label_400eac;
        case 0x400ec0u: goto label_400ec0;
        case 0x400ec8u: goto label_400ec8;
        case 0x400ed8u: goto label_400ed8;
        case 0x400f34u: goto label_400f34;
        case 0x400f44u: goto label_400f44;
        case 0x400f74u: goto label_400f74;
        case 0x400f84u: goto label_400f84;
        case 0x400fb4u: goto label_400fb4;
        case 0x400fc4u: goto label_400fc4;
        case 0x400fe0u: goto label_400fe0;
        case 0x401008u: goto label_401008;
        case 0x401018u: goto label_401018;
        case 0x401040u: goto label_401040;
        case 0x401050u: goto label_401050;
        case 0x401078u: goto label_401078;
        case 0x401088u: goto label_401088;
        case 0x4010bcu: goto label_4010bc;
        case 0x4010ccu: goto label_4010cc;
        case 0x401124u: goto label_401124;
        default: break;
    }

    ctx->pc = 0x400db0u;

    // 0x400db0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x400db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x400db4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x400db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x400db8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x400db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x400dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x400dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400dc0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x400dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x400dc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x400dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400dc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x400dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x400dcc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x400dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x400dd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x400dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x400dd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x400dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x400dd8: 0x920202d8  lbu         $v0, 0x2D8($s0)
    ctx->pc = 0x400dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x400ddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x400ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x400de0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400DE0u;
    {
        const bool branch_taken_0x400de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400DE0u;
        // 0x400de4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400de0) {
            ctx->pc = 0x400DF0u;
            goto label_400df0;
        }
    }
    ctx->pc = 0x400DE8u;
    // 0x400de8: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x400DE8u;
    {
        const bool branch_taken_0x400de8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x400de8) {
            ctx->pc = 0x400DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400DE8u;
            // 0x400dec: 0x9203020a  lbu         $v1, 0x20A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400E00u;
            goto label_400e00;
        }
    }
    ctx->pc = 0x400DF0u;
label_400df0:
    // 0x400df0: 0x2ea20101  sltiu       $v0, $s5, 0x101
    ctx->pc = 0x400df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x400df4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x400DF4u;
    {
        const bool branch_taken_0x400df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400df4) {
            ctx->pc = 0x400DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400DF4u;
            // 0x400df8: 0x9202020a  lbu         $v0, 0x20A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400E30u;
            goto label_400e30;
        }
    }
    ctx->pc = 0x400DFCu;
    // 0x400dfc: 0x9203020a  lbu         $v1, 0x20A($s0)
    ctx->pc = 0x400dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_400e00:
    // 0x400e00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x400e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400e04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400E04u;
    {
        const bool branch_taken_0x400e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x400E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E04u;
        // 0x400e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e04) {
            ctx->pc = 0x400E20u;
            goto label_400e20;
        }
    }
    ctx->pc = 0x400E0Cu;
    // 0x400e0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400e10: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x400E10u;
    SET_GPR_U32(ctx, 31, 0x400E18u);
    ctx->pc = 0x400E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400E10u;
    // 0x400e14: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x400E10u, 0x400E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400E18u;
label_400e18:
    // 0x400e18: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x400E18u;
    {
        const bool branch_taken_0x400e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E18u;
        // 0x400e1c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e18) {
            ctx->pc = 0x401138u;
            goto label_401138;
        }
    }
    ctx->pc = 0x400E20u;
label_400e20:
    // 0x400e20: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400e24: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x400E24u;
    SET_GPR_U32(ctx, 31, 0x400E2Cu);
    ctx->pc = 0x400E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400E24u;
    // 0x400e28: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x400E24u, 0x400E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400E2Cu;
label_400e2c:
    // 0x400e2c: 0x9202020a  lbu         $v0, 0x20A($s0)
    ctx->pc = 0x400e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_400e30:
    // 0x400e30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x400e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x400e34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x400E34u;
    {
        const bool branch_taken_0x400e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x400E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E34u;
        // 0x400e38: 0x32a4ffff  andi        $a0, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e34) {
            ctx->pc = 0x400E54u;
            goto label_400e54;
        }
    }
    ctx->pc = 0x400E3Cu;
    // 0x400e3c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x400e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x400e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400e44: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x400E44u;
    SET_GPR_U32(ctx, 31, 0x400E4Cu);
    ctx->pc = 0x400E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400E44u;
    // 0x400e48: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x400E44u, 0x400E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400E4Cu;
label_400e4c:
    // 0x400e4c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x400E4Cu;
    {
        const bool branch_taken_0x400e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x400E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400E4Cu;
        // 0x400e50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400e4c) {
            ctx->pc = 0x401138u;
            goto label_401138;
        }
    }
    ctx->pc = 0x400E54u;
label_400e54:
    // 0x400e54: 0x151078  dsll        $v0, $s5, 1
    ctx->pc = 0x400e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << 1);
    // 0x400e58: 0xa60401fc  sh          $a0, 0x1FC($s0)
    ctx->pc = 0x400e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 508), (uint16_t)GPR_U32(ctx, 4));
    // 0x400e5c: 0x55102d  daddu       $v0, $v0, $s5
    ctx->pc = 0x400e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 21));
    // 0x400e60: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x400e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x400e64: 0x2323a  dsrl        $a2, $v0, 8
    ctx->pc = 0x400e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 8);
    // 0x400e68: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x400e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x400e6c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x400e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x400e70: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x400e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x400e74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x400e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x400e78: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x400e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x400e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x400e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x400e80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x400e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x400e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x400e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x400e88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x400e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x400e8c: 0xa3a40011  sb          $a0, 0x11($sp)
    ctx->pc = 0x400e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x400e90: 0xa3a60012  sb          $a2, 0x12($sp)
    ctx->pc = 0x400e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 6));
    // 0x400e94: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x400e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x400e98: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x400e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x400e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ea0: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x400ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x400ea4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x400EA4u;
    SET_GPR_U32(ctx, 31, 0x400EACu);
    ctx->pc = 0x400EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400EA4u;
    // 0x400ea8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x400EA4u, 0x400EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400EACu;
label_400eac:
    // 0x400eac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x400eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400eb0: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x400eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x400eb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x400eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x400eb8: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x400EB8u;
    SET_GPR_U32(ctx, 31, 0x400EC0u);
    ctx->pc = 0x400EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400EB8u;
    // 0x400ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x400EB8u, 0x400EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400EC0u;
label_400ec0:
    // 0x400ec0: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x400EC0u;
    SET_GPR_U32(ctx, 31, 0x400EC8u);
    ctx->pc = 0x400EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400EC0u;
    // 0x400ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x400EC0u, 0x400EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400EC8u;
label_400ec8:
    // 0x400ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400ecc: 0x2785ac50  addiu       $a1, $gp, -0x53B0
    ctx->pc = 0x400eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945872));
    // 0x400ed0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x400ED0u;
    SET_GPR_U32(ctx, 31, 0x400ED8u);
    ctx->pc = 0x400ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400ED0u;
    // 0x400ed4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x400ED0u, 0x400ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400ED8u;
label_400ed8:
    // 0x400ed8: 0x12a0007f  beqz        $s5, . + 4 + (0x7F << 2)
    ctx->pc = 0x400ED8u;
    {
        const bool branch_taken_0x400ed8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x400EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400ED8u;
        // 0x400edc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ed8) {
            ctx->pc = 0x4010D8u;
            goto label_4010d8;
        }
    }
    ctx->pc = 0x400EE0u;
    // 0x400ee0: 0x1aa00028  blez        $s5, . + 4 + (0x28 << 2)
    ctx->pc = 0x400EE0u;
    {
        const bool branch_taken_0x400ee0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x400EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EE0u;
        // 0x400ee4: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ee0) {
            ctx->pc = 0x400F84u;
            goto label_400f84;
        }
    }
    ctx->pc = 0x400EE8u;
    // 0x400ee8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x400EE8u;
    {
        const bool branch_taken_0x400ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x400EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400EE8u;
        // 0x400eec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400ee8) {
            ctx->pc = 0x400FD0u;
            goto label_400fd0;
        }
    }
    ctx->pc = 0x400EF0u;
    // 0x400ef0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x400EF0u;
    {
        const bool branch_taken_0x400ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400ef0) {
            ctx->pc = 0x400EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400EF0u;
            // 0x400ef4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400F88u;
            goto label_400f88;
        }
    }
    ctx->pc = 0x400EF8u;
    // 0x400ef8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x400ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x400efc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x400EFCu;
    {
        const bool branch_taken_0x400efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x400efc) {
            ctx->pc = 0x400F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400EFCu;
            // 0x400f00: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400F48u;
            goto label_400f48;
        }
    }
    ctx->pc = 0x400F04u;
    // 0x400f04: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x400f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x400f08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f0c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x400f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x400f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f14: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x400f14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x400f18: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x400f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400f1c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x400f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400f20: 0x26510003  addiu       $s1, $s2, 0x3
    ctx->pc = 0x400f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x400f24: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x400f24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x400f28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x400f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400f2c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x400F2Cu;
    SET_GPR_U32(ctx, 31, 0x400F34u);
    ctx->pc = 0x400F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400F2Cu;
    // 0x400f30: 0xa3a70002  sb          $a3, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x400F2Cu, 0x400F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400F34u;
label_400f34:
    // 0x400f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f3c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x400F3Cu;
    SET_GPR_U32(ctx, 31, 0x400F44u);
    ctx->pc = 0x400F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400F3Cu;
    // 0x400f40: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x400F3Cu, 0x400F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400F44u;
label_400f44:
    // 0x400f44: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x400f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_400f48:
    // 0x400f48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x400f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400f54: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x400f54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400f58: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x400f58u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x400f5c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x400f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x400f60: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x400f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400f64: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x400f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x400f68: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x400f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x400f6c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x400F6Cu;
    SET_GPR_U32(ctx, 31, 0x400F74u);
    ctx->pc = 0x400F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400F6Cu;
    // 0x400f70: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x400F6Cu, 0x400F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400F74u;
label_400f74:
    // 0x400f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f7c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x400F7Cu;
    SET_GPR_U32(ctx, 31, 0x400F84u);
    ctx->pc = 0x400F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400F7Cu;
    // 0x400f80: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x400F7Cu, 0x400F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400F84u;
label_400f84:
    // 0x400f84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x400f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_400f88:
    // 0x400f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400f90: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x400f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400f94: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x400f94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400f98: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x400f98u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x400f9c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x400f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x400fa0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x400fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400fa4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x400fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x400fa8: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x400fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x400fac: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x400FACu;
    SET_GPR_U32(ctx, 31, 0x400FB4u);
    ctx->pc = 0x400FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400FACu;
    // 0x400fb0: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x400FACu, 0x400FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400FB4u;
label_400fb4:
    // 0x400fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fbc: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x400FBCu;
    SET_GPR_U32(ctx, 31, 0x400FC4u);
    ctx->pc = 0x400FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400FBCu;
    // 0x400fc0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x400FBCu, 0x400FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400FC4u;
label_400fc4:
    // 0x400fc4: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x400fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x400fc8: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x400FC8u;
    {
        const bool branch_taken_0x400fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x400fc8) {
            ctx->pc = 0x400FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x400FC8u;
            // 0x400fcc: 0xde0201f0  ld          $v0, 0x1F0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4010DCu;
            goto label_4010dc;
        }
    }
    ctx->pc = 0x400FD0u;
label_400fd0:
    // 0x400fd0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x400fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fd4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x400fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fd8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x400fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x400fdc: 0x0  nop
    ctx->pc = 0x400fdcu;
    // NOP
label_400fe0:
    // 0x400fe0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x400fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400fe8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x400fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x400fec: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x400fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400ff0: 0x66940004  daddiu      $s4, $s4, 0x4
    ctx->pc = 0x400ff0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4);
    // 0x400ff4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x400ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x400ff8: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x400ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x400ffc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x400ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x401000: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401000u;
    SET_GPR_U32(ctx, 31, 0x401008u);
    ctx->pc = 0x401004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401000u;
    // 0x401004: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401000u, 0x401008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401008u;
label_401008:
    // 0x401008: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40100c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401010: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401010u;
    SET_GPR_U32(ctx, 31, 0x401018u);
    ctx->pc = 0x401014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401010u;
    // 0x401014: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401010u, 0x401018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401018u;
label_401018:
    // 0x401018: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x401018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x40101c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401024: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x401024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x401028: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x401028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40102c: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x40102cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x401030: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x401030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x401034: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x401034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x401038: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401038u;
    SET_GPR_U32(ctx, 31, 0x401040u);
    ctx->pc = 0x40103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401038u;
    // 0x40103c: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401038u, 0x401040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401040u;
label_401040:
    // 0x401040: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401048: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401048u;
    SET_GPR_U32(ctx, 31, 0x401050u);
    ctx->pc = 0x40104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401048u;
    // 0x40104c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401048u, 0x401050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401050u;
label_401050:
    // 0x401050: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x401050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x401054: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40105c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x40105cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x401060: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x401060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x401064: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x401064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x401068: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x401068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x40106c: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x40106cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x401070: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401070u;
    SET_GPR_U32(ctx, 31, 0x401078u);
    ctx->pc = 0x401074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401070u;
    // 0x401074: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401070u, 0x401078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401078u;
label_401078:
    // 0x401078: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x401078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40107c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401080: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401080u;
    SET_GPR_U32(ctx, 31, 0x401088u);
    ctx->pc = 0x401084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401080u;
    // 0x401084: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401080u, 0x401088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401088u;
label_401088:
    // 0x401088: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x401088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x40108c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401094: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x401094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x401098: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x401098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40109c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x40109cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x4010a0: 0x9262000a  lbu         $v0, 0xA($s3)
    ctx->pc = 0x4010a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4010a4: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x4010a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x4010a8: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x4010a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4010ac: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x4010acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x4010b0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x4010b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4010b4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4010B4u;
    SET_GPR_U32(ctx, 31, 0x4010BCu);
    ctx->pc = 0x4010B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4010B4u;
    // 0x4010b8: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4010B4u, 0x4010BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4010BCu;
label_4010bc:
    // 0x4010bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4010bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4010c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4010c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4010c4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4010C4u;
    SET_GPR_U32(ctx, 31, 0x4010CCu);
    ctx->pc = 0x4010C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4010C4u;
    // 0x4010c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4010C4u, 0x4010CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4010CCu;
label_4010cc:
    // 0x4010cc: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x4010ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4010d0: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4010D0u;
    {
        const bool branch_taken_0x4010d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4010d0) {
            ctx->pc = 0x4010D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4010D0u;
            // 0x4010d4: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x400FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400fe0;
        }
    }
    ctx->pc = 0x4010D8u;
label_4010d8:
    // 0x4010d8: 0xde0201f0  ld          $v0, 0x1F0($s0)
    ctx->pc = 0x4010d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 496)));
label_4010dc:
    // 0x4010dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4010dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4010e0: 0x920601f3  lbu         $a2, 0x1F3($s0)
    ctx->pc = 0x4010e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 499)));
    // 0x4010e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4010e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4010e8: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x4010e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x4010ec: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x4010ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x4010f0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4010f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4010f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4010f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4010f8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4010f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4010fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4010fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401100: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401108: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40110c: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x40110cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x401110: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x401110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x401114: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x401114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x401118: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x401118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x40111c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40111Cu;
    SET_GPR_U32(ctx, 31, 0x401124u);
    ctx->pc = 0x401120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40111Cu;
    // 0x401120: 0xa3a70022  sb          $a3, 0x22($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40111Cu, 0x401124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401124u;
label_401124:
    // 0x401124: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x401124u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x401128: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x401128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40112c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x401130: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x401130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
    // 0x401134: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x401134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_401138:
    // 0x401138: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x401138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40113c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x40113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x401140: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x401140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x401144: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x401144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x401148: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x401148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40114c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40114cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x401150: 0x3e00008  jr          $ra
    ctx->pc = 0x401150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401150u;
        // 0x401154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x401158u;
}
