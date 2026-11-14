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

// Function: sub_00156D40
// Address: 0x156d40 - 0x157c70
void sub_00156D40_0x156d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156D40_0x156d40");
#endif

    switch (ctx->pc) {
        case 0x156d84u: goto label_156d84;
        case 0x156db0u: goto label_156db0;
        case 0x156dbcu: goto label_156dbc;
        case 0x156dd4u: goto label_156dd4;
        case 0x156de8u: goto label_156de8;
        case 0x156e04u: goto label_156e04;
        case 0x156e10u: goto label_156e10;
        case 0x156e30u: goto label_156e30;
        case 0x156e84u: goto label_156e84;
        case 0x156ea8u: goto label_156ea8;
        case 0x156efcu: goto label_156efc;
        case 0x156f08u: goto label_156f08;
        case 0x156f94u: goto label_156f94;
        case 0x156facu: goto label_156fac;
        case 0x156fc8u: goto label_156fc8;
        case 0x156fe0u: goto label_156fe0;
        case 0x156ffcu: goto label_156ffc;
        case 0x157018u: goto label_157018;
        case 0x157034u: goto label_157034;
        case 0x157050u: goto label_157050;
        case 0x15706cu: goto label_15706c;
        case 0x157088u: goto label_157088;
        case 0x1570b4u: goto label_1570b4;
        case 0x157100u: goto label_157100;
        case 0x157118u: goto label_157118;
        case 0x157134u: goto label_157134;
        case 0x157158u: goto label_157158;
        case 0x157170u: goto label_157170;
        case 0x15718cu: goto label_15718c;
        case 0x1571acu: goto label_1571ac;
        case 0x1571ccu: goto label_1571cc;
        case 0x1571e8u: goto label_1571e8;
        case 0x157204u: goto label_157204;
        case 0x15722cu: goto label_15722c;
        case 0x157244u: goto label_157244;
        case 0x15726cu: goto label_15726c;
        case 0x157298u: goto label_157298;
        case 0x1572bcu: goto label_1572bc;
        case 0x1572ccu: goto label_1572cc;
        case 0x1572ecu: goto label_1572ec;
        case 0x1573f4u: goto label_1573f4;
        case 0x157408u: goto label_157408;
        case 0x157414u: goto label_157414;
        case 0x15743cu: goto label_15743c;
        case 0x15759cu: goto label_15759c;
        case 0x1575acu: goto label_1575ac;
        case 0x1575c0u: goto label_1575c0;
        case 0x1575e8u: goto label_1575e8;
        case 0x157748u: goto label_157748;
        case 0x157754u: goto label_157754;
        case 0x157768u: goto label_157768;
        case 0x157784u: goto label_157784;
        case 0x1577acu: goto label_1577ac;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577f0u: goto label_1577f0;
        case 0x157808u: goto label_157808;
        case 0x157834u: goto label_157834;
        case 0x15784cu: goto label_15784c;
        case 0x157864u: goto label_157864;
        case 0x157888u: goto label_157888;
        case 0x157898u: goto label_157898;
        case 0x1578ccu: goto label_1578cc;
        case 0x157a84u: goto label_157a84;
        case 0x157a9cu: goto label_157a9c;
        case 0x157ab8u: goto label_157ab8;
        case 0x157b10u: goto label_157b10;
        case 0x157b28u: goto label_157b28;
        case 0x157b5cu: goto label_157b5c;
        case 0x157b74u: goto label_157b74;
        case 0x157b78u: goto label_157b78;
        case 0x157c04u: goto label_157c04;
        case 0x157c28u: goto label_157c28;
        default: break;
    }

    ctx->pc = 0x156d40u;

    // 0x156d40: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
    // 0x156d44: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x156d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x156d48: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x156d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x156d4c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x156d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x156d50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x156d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x156d54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x156d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x156d58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x156d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x156d5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x156d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x156d60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x156d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x156d64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x156d68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156d6c: 0xafa40570  sw          $a0, 0x570($sp)
    ctx->pc = 0x156d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 4));
    // 0x156d70: 0xafa50580  sw          $a1, 0x580($sp)
    ctx->pc = 0x156d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 5));
    // 0x156d74: 0x8fa40580  lw          $a0, 0x580($sp)
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x156d78: 0x27858d44  addiu       $a1, $gp, -0x72BC
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937924));
    // 0x156d7c: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x156D7Cu;
    SET_GPR_U32(ctx, 31, 0x156D84u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x156D7Cu, 0x156D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D84u;
label_156d84:
    // 0x156d84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x156d84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d88: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x156D88u;
    {
        const bool branch_taken_0x156d88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x156d88) {
            ctx->pc = 0x156D9Cu;
            goto label_156d9c;
        }
    }
    ctx->pc = 0x156D90u;
    // 0x156d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x156d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d94: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x156D94u;
    {
        const bool branch_taken_0x156d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d94) {
            ctx->pc = 0x157C34u;
            goto label_157c34;
        }
    }
    ctx->pc = 0x156D9Cu;
label_156d9c:
    // 0x156d9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156da8: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x156DA8u;
    SET_GPR_U32(ctx, 31, 0x156DB0u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x156DA8u, 0x156DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DB0u;
label_156db0:
    // 0x156db0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156db4: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x156DB4u;
    SET_GPR_U32(ctx, 31, 0x156DBCu);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x156DB4u, 0x156DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DBCu;
label_156dbc:
    // 0x156dbc: 0xafa20568  sw          $v0, 0x568($sp)
    ctx->pc = 0x156dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1384), GPR_U32(ctx, 2));
    // 0x156dc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dcc: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x156DCCu;
    SET_GPR_U32(ctx, 31, 0x156DD4u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x156DCCu, 0x156DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DD4u;
label_156dd4:
    // 0x156dd4: 0x8fa60568  lw          $a2, 0x568($sp)
    ctx->pc = 0x156dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
    // 0x156dd8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x156ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156de0: 0xc055f74  jal         func_157DD0
    ctx->pc = 0x156DE0u;
    SET_GPR_U32(ctx, 31, 0x156DE8u);
    ctx->pc = 0x157DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157DD0u, 0x156DE0u, 0x156DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DE8u;
label_156de8:
    // 0x156de8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x156de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dec: 0x8fa60568  lw          $a2, 0x568($sp)
    ctx->pc = 0x156decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
    // 0x156df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156df8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x156df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dfc: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x156DFCu;
    SET_GPR_U32(ctx, 31, 0x156E04u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x156DFCu, 0x156E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E04u;
label_156e04:
    // 0x156e04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e08: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x156E08u;
    SET_GPR_U32(ctx, 31, 0x156E10u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x156E08u, 0x156E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E10u;
label_156e10:
    // 0x156e10: 0x27a40564  addiu       $a0, $sp, 0x564
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
    // 0x156e14: 0xc7808d40  lwc1        $f0, -0x72C0($gp)
    ctx->pc = 0x156e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x156e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x156e1c: 0x27a504b0  addiu       $a1, $sp, 0x4B0
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x156e20: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x156e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156e24: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x156E24u;
    {
        const bool branch_taken_0x156e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e24) {
            ctx->pc = 0x156E4Cu;
            goto label_156e4c;
        }
    }
    ctx->pc = 0x156E2Cu;
    // 0x156e2c: 0xa02021  addu        $a0, $a1, $zero
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_156e30:
    // 0x156e30: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x156e30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x156e34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x156e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x156e38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x156e3c: 0x0  nop
    ctx->pc = 0x156e3cu;
    // NOP
    // 0x156e40: 0x0  nop
    ctx->pc = 0x156e40u;
    // NOP
    // 0x156e44: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156E44u;
    {
        const bool branch_taken_0x156e44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x156e44) {
            ctx->pc = 0x156E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156e30;
        }
    }
    ctx->pc = 0x156E4Cu;
label_156e4c:
    // 0x156e4c: 0x27a50564  addiu       $a1, $sp, 0x564
    ctx->pc = 0x156e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
    // 0x156e50: 0xafa504b0  sw          $a1, 0x4B0($sp)
    ctx->pc = 0x156e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 5));
    // 0x156e54: 0x27a20564  addiu       $v0, $sp, 0x564
    ctx->pc = 0x156e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
    // 0x156e58: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x156e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
    // 0x156e5c: 0x27a40564  addiu       $a0, $sp, 0x564
    ctx->pc = 0x156e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
    // 0x156e60: 0xafa404b8  sw          $a0, 0x4B8($sp)
    ctx->pc = 0x156e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 4));
    // 0x156e64: 0x27a50564  addiu       $a1, $sp, 0x564
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
    // 0x156e68: 0xafa504bc  sw          $a1, 0x4BC($sp)
    ctx->pc = 0x156e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1212), GPR_U32(ctx, 5));
    // 0x156e6c: 0xafa50534  sw          $a1, 0x534($sp)
    ctx->pc = 0x156e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1332), GPR_U32(ctx, 5));
    // 0x156e70: 0x27a40528  addiu       $a0, $sp, 0x528
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x156e74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x156e78: 0x24a52e28  addiu       $a1, $a1, 0x2E28
    ctx->pc = 0x156e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11816));
    // 0x156e7c: 0xc040304  jal         func_100C10
    ctx->pc = 0x156E7Cu;
    SET_GPR_U32(ctx, 31, 0x156E84u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x156E7Cu, 0x156E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E84u;
label_156e84:
    // 0x156e84: 0x3c0641a8  lui         $a2, 0x41A8
    ctx->pc = 0x156e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16808 << 16));
    // 0x156e88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x156e88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e8c: 0x0  nop
    ctx->pc = 0x156e8cu;
    // NOP
    // 0x156e90: 0xe7a00560  swc1        $f0, 0x560($sp)
    ctx->pc = 0x156e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
    // 0x156e94: 0x27a70520  addiu       $a3, $sp, 0x520
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x156e98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x156e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156e9c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x156E9Cu;
    {
        const bool branch_taken_0x156e9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e9c) {
            ctx->pc = 0x156EC4u;
            goto label_156ec4;
        }
    }
    ctx->pc = 0x156EA4u;
    // 0x156ea4: 0xe02021  addu        $a0, $a3, $zero
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_156ea8:
    // 0x156ea8: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x156ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x156eac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x156eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156eb4: 0x0  nop
    ctx->pc = 0x156eb4u;
    // NOP
    // 0x156eb8: 0x0  nop
    ctx->pc = 0x156eb8u;
    // NOP
    // 0x156ebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156EBCu;
    {
        const bool branch_taken_0x156ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156ebc) {
            ctx->pc = 0x156EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156ea8;
        }
    }
    ctx->pc = 0x156EC4u;
label_156ec4:
    // 0x156ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156ec8: 0xafa5055c  sw          $a1, 0x55C($sp)
    ctx->pc = 0x156ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 5));
    // 0x156ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156ed0: 0xafa20558  sw          $v0, 0x558($sp)
    ctx->pc = 0x156ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1368), GPR_U32(ctx, 2));
    // 0x156ed4: 0xafa00554  sw          $zero, 0x554($sp)
    ctx->pc = 0x156ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1364), GPR_U32(ctx, 0));
    // 0x156ed8: 0xafa00550  sw          $zero, 0x550($sp)
    ctx->pc = 0x156ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 0));
    // 0x156edc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x156edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ee0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ee4: 0x10140340  beq         $zero, $s4, . + 4 + (0x340 << 2)
    ctx->pc = 0x156EE4u;
    {
        const bool branch_taken_0x156ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x156ee4) {
            ctx->pc = 0x157BE8u;
            goto label_157be8;
        }
    }
    ctx->pc = 0x156EECu;
    // 0x156eec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ef0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x156ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ef4: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x156EF4u;
    {
        const bool branch_taken_0x156ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ef4) {
            ctx->pc = 0x157BD4u;
            goto label_157bd4;
        }
    }
    ctx->pc = 0x156EFCu;
label_156efc:
    // 0x156efc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x156efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156F00u;
    {
        const bool branch_taken_0x156f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f00) {
            ctx->pc = 0x156F10u;
            goto label_156f10;
        }
    }
    ctx->pc = 0x156F08u;
label_156f08:
    // 0x156f08: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x156f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x156f0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x156f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156f10:
    // 0x156f10: 0x82450000  lb          $a1, 0x0($s2)
    ctx->pc = 0x156f10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156f14: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x156f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x156f18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x156f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x156f1c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x156f20: 0x1044fff9  beq         $v0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x156F20u;
    {
        const bool branch_taken_0x156f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x156f20) {
            ctx->pc = 0x156F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f08;
        }
    }
    ctx->pc = 0x156F28u;
    // 0x156f28: 0x82450000  lb          $a1, 0x0($s2)
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156f2c: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x156f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x156f30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x156f30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x156f34: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x156f38: 0x10c7fff3  beq         $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x156F38u;
    {
        const bool branch_taken_0x156f38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x156f38) {
            ctx->pc = 0x156F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f08;
        }
    }
    ctx->pc = 0x156F40u;
    // 0x156f40: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156f44: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x156f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x156f48: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x156f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x156f4c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x156f50: 0x10850309  beq         $a0, $a1, . + 4 + (0x309 << 2)
    ctx->pc = 0x156F50u;
    {
        const bool branch_taken_0x156f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x156f50) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x156F58u;
    // 0x156f58: 0x10800307  beqz        $a0, . + 4 + (0x307 << 2)
    ctx->pc = 0x156F58u;
    {
        const bool branch_taken_0x156f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f58) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x156F60u;
    // 0x156f60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x156f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x156f64: 0x10820304  beq         $a0, $v0, . + 4 + (0x304 << 2)
    ctx->pc = 0x156F64u;
    {
        const bool branch_taken_0x156f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x156f64) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x156F6Cu;
    // 0x156f6c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x156f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x156f70: 0x10820301  beq         $a0, $v0, . + 4 + (0x301 << 2)
    ctx->pc = 0x156F70u;
    {
        const bool branch_taken_0x156f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x156f70) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x156F78u;
    // 0x156f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x156f80: 0x24a52e40  addiu       $a1, $a1, 0x2E40
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11840));
    // 0x156f84: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x156f88: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x156f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156f8c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x156F8Cu;
    SET_GPR_U32(ctx, 31, 0x156F94u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x156F8Cu, 0x156F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F94u;
label_156f94:
    // 0x156f94: 0x27a902b0  addiu       $t1, $sp, 0x2B0
    ctx->pc = 0x156f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x156f98: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x156f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f9c: 0x278a8d48  addiu       $t2, $gp, -0x72B8
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937928));
    // 0x156fa0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x156fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fa4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x156FA4u;
    SET_GPR_U32(ctx, 31, 0x156FACu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x156FA4u, 0x156FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FACu;
label_156fac:
    // 0x156fac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156FACu;
    {
        const bool branch_taken_0x156fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156fac) {
            ctx->pc = 0x156FD0u;
            goto label_156fd0;
        }
    }
    ctx->pc = 0x156FB4u;
    // 0x156fb4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156fb8: 0x27858d50  addiu       $a1, $gp, -0x72B0
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937936));
    // 0x156fbc: 0x27a6055c  addiu       $a2, $sp, 0x55C
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
    // 0x156fc0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x156FC0u;
    SET_GPR_U32(ctx, 31, 0x156FC8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x156FC0u, 0x156FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FC8u;
label_156fc8:
    // 0x156fc8: 0x100002eb  b           . + 4 + (0x2EB << 2)
    ctx->pc = 0x156FC8u;
    {
        const bool branch_taken_0x156fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156fc8) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x156FD0u;
label_156fd0:
    // 0x156fd0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x156fd4: 0x27858d58  addiu       $a1, $gp, -0x72A8
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
    // 0x156fd8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x156FD8u;
    SET_GPR_U32(ctx, 31, 0x156FE0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x156FD8u, 0x156FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FE0u;
label_156fe0:
    // 0x156fe0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156FE0u;
    {
        const bool branch_taken_0x156fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156fe0) {
            ctx->pc = 0x157004u;
            goto label_157004;
        }
    }
    ctx->pc = 0x156FE8u;
    // 0x156fe8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156fec: 0x27858d50  addiu       $a1, $gp, -0x72B0
    ctx->pc = 0x156fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937936));
    // 0x156ff0: 0x27a60558  addiu       $a2, $sp, 0x558
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
    // 0x156ff4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x156FF4u;
    SET_GPR_U32(ctx, 31, 0x156FFCu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x156FF4u, 0x156FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FFCu;
label_156ffc:
    // 0x156ffc: 0x100002de  b           . + 4 + (0x2DE << 2)
    ctx->pc = 0x156FFCu;
    {
        const bool branch_taken_0x156ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ffc) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157008: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15700c: 0x24a52e58  addiu       $a1, $a1, 0x2E58
    ctx->pc = 0x15700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11864));
    // 0x157010: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157010u;
    SET_GPR_U32(ctx, 31, 0x157018u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157010u, 0x157018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157018u;
label_157018:
    // 0x157018: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157018u;
    {
        const bool branch_taken_0x157018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157018) {
            ctx->pc = 0x15703Cu;
            goto label_15703c;
        }
    }
    ctx->pc = 0x157020u;
    // 0x157020: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157024: 0x27858d50  addiu       $a1, $gp, -0x72B0
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937936));
    // 0x157028: 0x27a60554  addiu       $a2, $sp, 0x554
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
    // 0x15702c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x15702Cu;
    SET_GPR_U32(ctx, 31, 0x157034u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x15702Cu, 0x157034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157034u;
label_157034:
    // 0x157034: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x157034u;
    {
        const bool branch_taken_0x157034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157034) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x15703Cu;
label_15703c:
    // 0x15703c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157040: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157044: 0x24a52e68  addiu       $a1, $a1, 0x2E68
    ctx->pc = 0x157044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11880));
    // 0x157048: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157048u;
    SET_GPR_U32(ctx, 31, 0x157050u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157048u, 0x157050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157050u;
label_157050:
    // 0x157050: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157050u;
    {
        const bool branch_taken_0x157050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157050) {
            ctx->pc = 0x157074u;
            goto label_157074;
        }
    }
    ctx->pc = 0x157058u;
    // 0x157058: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15705c: 0x27858d50  addiu       $a1, $gp, -0x72B0
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937936));
    // 0x157060: 0x27a60550  addiu       $a2, $sp, 0x550
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
    // 0x157064: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x157064u;
    SET_GPR_U32(ctx, 31, 0x15706Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x157064u, 0x15706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15706Cu;
label_15706c:
    // 0x15706c: 0x100002c2  b           . + 4 + (0x2C2 << 2)
    ctx->pc = 0x15706Cu;
    {
        const bool branch_taken_0x15706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15706c) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157074u;
label_157074:
    // 0x157074: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157078: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15707c: 0x24a52e78  addiu       $a1, $a1, 0x2E78
    ctx->pc = 0x15707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11896));
    // 0x157080: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157080u;
    SET_GPR_U32(ctx, 31, 0x157088u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157080u, 0x157088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157088u;
label_157088:
    // 0x157088: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x157088u;
    {
        const bool branch_taken_0x157088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157088) {
            ctx->pc = 0x1570ECu;
            goto label_1570ec;
        }
    }
    ctx->pc = 0x157090u;
    // 0x157090: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157094: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157098: 0x24a52e88  addiu       $a1, $a1, 0x2E88
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11912));
    // 0x15709c: 0x27a6054c  addiu       $a2, $sp, 0x54C
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x1570a0: 0x27a70548  addiu       $a3, $sp, 0x548
    ctx->pc = 0x1570a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
    // 0x1570a4: 0x27a80544  addiu       $t0, $sp, 0x544
    ctx->pc = 0x1570a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
    // 0x1570a8: 0x27a90540  addiu       $t1, $sp, 0x540
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x1570ac: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1570ACu;
    SET_GPR_U32(ctx, 31, 0x1570B4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1570ACu, 0x1570B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570B4u;
label_1570b4:
    // 0x1570b4: 0x8fab054c  lw          $t3, 0x54C($sp)
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
    // 0x1570b8: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x1570b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1570bc: 0xa3a40564  sb          $a0, 0x564($sp)
    ctx->pc = 0x1570bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1380), (uint8_t)GPR_U32(ctx, 4));
    // 0x1570c0: 0x8fa50548  lw          $a1, 0x548($sp)
    ctx->pc = 0x1570c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x1570c4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1570c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1570c8: 0xa3a60565  sb          $a2, 0x565($sp)
    ctx->pc = 0x1570c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1381), (uint8_t)GPR_U32(ctx, 6));
    // 0x1570cc: 0x8fa70544  lw          $a3, 0x544($sp)
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x1570d0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1570d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1570d4: 0xa3a80566  sb          $t0, 0x566($sp)
    ctx->pc = 0x1570d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1382), (uint8_t)GPR_U32(ctx, 8));
    // 0x1570d8: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x1570dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1570dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1570e0: 0xa3a30567  sb          $v1, 0x567($sp)
    ctx->pc = 0x1570e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1383), (uint8_t)GPR_U32(ctx, 3));
    // 0x1570e4: 0x100002a4  b           . + 4 + (0x2A4 << 2)
    ctx->pc = 0x1570E4u;
    {
        const bool branch_taken_0x1570e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1570e4) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x1570ECu;
label_1570ec:
    // 0x1570ec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1570f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1570f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1570f4: 0x24a52e98  addiu       $a1, $a1, 0x2E98
    ctx->pc = 0x1570f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11928));
    // 0x1570f8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1570F8u;
    SET_GPR_U32(ctx, 31, 0x157100u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1570F8u, 0x157100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157100u;
label_157100:
    // 0x157100: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157100u;
    {
        const bool branch_taken_0x157100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157100) {
            ctx->pc = 0x157120u;
            goto label_157120;
        }
    }
    ctx->pc = 0x157108u;
    // 0x157108: 0x27a40528  addiu       $a0, $sp, 0x528
    ctx->pc = 0x157108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x15710c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157110: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x157110u;
    SET_GPR_U32(ctx, 31, 0x157118u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x157110u, 0x157118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157118u;
label_157118:
    // 0x157118: 0x10000297  b           . + 4 + (0x297 << 2)
    ctx->pc = 0x157118u;
    {
        const bool branch_taken_0x157118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157118) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157120u;
label_157120:
    // 0x157120: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157124: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157128: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
    // 0x15712c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x15712Cu;
    SET_GPR_U32(ctx, 31, 0x157134u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x15712Cu, 0x157134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157134u;
label_157134:
    // 0x157134: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157134u;
    {
        const bool branch_taken_0x157134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157134) {
            ctx->pc = 0x157160u;
            goto label_157160;
        }
    }
    ctx->pc = 0x15713Cu;
    // 0x15713c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157140: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x157140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157144: 0x27868d60  addiu       $a2, $gp, -0x72A0
    ctx->pc = 0x157144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937952));
    // 0x157148: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x157148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15714c: 0x27a60560  addiu       $a2, $sp, 0x560
    ctx->pc = 0x15714cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
    // 0x157150: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x157150u;
    SET_GPR_U32(ctx, 31, 0x157158u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x157150u, 0x157158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157158u;
label_157158:
    // 0x157158: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x157158u;
    {
        const bool branch_taken_0x157158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157158) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157160u;
label_157160:
    // 0x157160: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157164: 0x27858d68  addiu       $a1, $gp, -0x7298
    ctx->pc = 0x157164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937960));
    // 0x157168: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157168u;
    SET_GPR_U32(ctx, 31, 0x157170u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157168u, 0x157170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157170u;
label_157170:
    // 0x157170: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x157170u;
    {
        const bool branch_taken_0x157170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157170) {
            ctx->pc = 0x157218u;
            goto label_157218;
        }
    }
    ctx->pc = 0x157178u;
    // 0x157178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x157178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15717c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157180: 0x27858d70  addiu       $a1, $gp, -0x7290
    ctx->pc = 0x157180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937968));
    // 0x157184: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x157184u;
    SET_GPR_U32(ctx, 31, 0x15718Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x157184u, 0x15718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15718Cu;
label_15718c:
    // 0x15718c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15718Cu;
    {
        const bool branch_taken_0x15718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15718c) {
            ctx->pc = 0x15719Cu;
            goto label_15719c;
        }
    }
    ctx->pc = 0x157194u;
    // 0x157194: 0x36020001  ori         $v0, $s0, 0x1
    ctx->pc = 0x157194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x157198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15719c:
    // 0x15719c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1571a0: 0x27858d78  addiu       $a1, $gp, -0x7288
    ctx->pc = 0x1571a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
    // 0x1571a4: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1571A4u;
    SET_GPR_U32(ctx, 31, 0x1571ACu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1571A4u, 0x1571ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571ACu;
label_1571ac:
    // 0x1571ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1571ACu;
    {
        const bool branch_taken_0x1571ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571ac) {
            ctx->pc = 0x1571BCu;
            goto label_1571bc;
        }
    }
    ctx->pc = 0x1571B4u;
    // 0x1571b4: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x1571b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x1571b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1571b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1571bc:
    // 0x1571bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1571bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1571c0: 0x27858d80  addiu       $a1, $gp, -0x7280
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937984));
    // 0x1571c4: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1571C4u;
    SET_GPR_U32(ctx, 31, 0x1571CCu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1571C4u, 0x1571CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571CCu;
label_1571cc:
    // 0x1571cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1571CCu;
    {
        const bool branch_taken_0x1571cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571cc) {
            ctx->pc = 0x1571D8u;
            goto label_1571d8;
        }
    }
    ctx->pc = 0x1571D4u;
    // 0x1571d4: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x1571d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_1571d8:
    // 0x1571d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1571d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1571dc: 0x27858d88  addiu       $a1, $gp, -0x7278
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
    // 0x1571e0: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1571E0u;
    SET_GPR_U32(ctx, 31, 0x1571E8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1571E0u, 0x1571E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571E8u;
label_1571e8:
    // 0x1571e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1571E8u;
    {
        const bool branch_taken_0x1571e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571e8) {
            ctx->pc = 0x1571F4u;
            goto label_1571f4;
        }
    }
    ctx->pc = 0x1571F0u;
    // 0x1571f0: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x1571f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_1571f4:
    // 0x1571f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1571f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1571f8: 0x27858d90  addiu       $a1, $gp, -0x7270
    ctx->pc = 0x1571f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938000));
    // 0x1571fc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1571FCu;
    SET_GPR_U32(ctx, 31, 0x157204u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1571FCu, 0x157204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157204u;
label_157204:
    // 0x157204: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x157204u;
    {
        const bool branch_taken_0x157204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157204) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x15720Cu;
    // 0x15720c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15720cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157210: 0x10000259  b           . + 4 + (0x259 << 2)
    ctx->pc = 0x157210u;
    {
        const bool branch_taken_0x157210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157210) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157218u;
label_157218:
    // 0x157218: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15721c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157220: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8
    ctx->pc = 0x157220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    // 0x157224: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157224u;
    SET_GPR_U32(ctx, 31, 0x15722Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157224u, 0x15722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15722Cu;
label_15722c:
    // 0x15722c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15722Cu;
    {
        const bool branch_taken_0x15722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15722c) {
            ctx->pc = 0x157288u;
            goto label_157288;
        }
    }
    ctx->pc = 0x157234u;
    // 0x157234: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157238: 0x27858d90  addiu       $a1, $gp, -0x7270
    ctx->pc = 0x157238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938000));
    // 0x15723c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x15723Cu;
    SET_GPR_U32(ctx, 31, 0x157244u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x15723Cu, 0x157244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157244u;
label_157244:
    // 0x157244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157244u;
    {
        const bool branch_taken_0x157244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157244) {
            ctx->pc = 0x157258u;
            goto label_157258;
        }
    }
    ctx->pc = 0x15724Cu;
    // 0x15724c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15724cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157250: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x157250u;
    {
        const bool branch_taken_0x157250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157250) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157258u;
label_157258:
    // 0x157258: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15725c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157260: 0x24a52ec8  addiu       $a1, $a1, 0x2EC8
    ctx->pc = 0x157260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11976));
    // 0x157264: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157264u;
    SET_GPR_U32(ctx, 31, 0x15726Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157264u, 0x15726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15726Cu;
label_15726c:
    // 0x15726c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15726Cu;
    {
        const bool branch_taken_0x15726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15726c) {
            ctx->pc = 0x157280u;
            goto label_157280;
        }
    }
    ctx->pc = 0x157274u;
    // 0x157274: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x157274u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157278: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157278) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157280u;
label_157280:
    // 0x157280: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x157280u;
    {
        const bool branch_taken_0x157280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157280) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x157288u;
label_157288:
    // 0x157288: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15728c: 0x27858d98  addiu       $a1, $gp, -0x7268
    ctx->pc = 0x15728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
    // 0x157290: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157290u;
    SET_GPR_U32(ctx, 31, 0x157298u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157290u, 0x157298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157298u;
label_157298:
    // 0x157298: 0x14400157  bnez        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x157298u;
    {
        const bool branch_taken_0x157298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157298) {
            ctx->pc = 0x1577F8u;
            goto label_1577f8;
        }
    }
    ctx->pc = 0x1572A0u;
    // 0x1572a0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1572a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1572a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1572a8: 0x24a52e40  addiu       $a1, $a1, 0x2E40
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11840));
    // 0x1572ac: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x1572acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1572b0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1572b4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1572B4u;
    SET_GPR_U32(ctx, 31, 0x1572BCu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1572B4u, 0x1572BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572BCu;
label_1572bc:
    // 0x1572bc: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x1572c0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1572c4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1572C4u;
    SET_GPR_U32(ctx, 31, 0x1572CCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1572C4u, 0x1572CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572CCu;
label_1572cc:
    // 0x1572cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1572ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1572d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1572d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1572d4: 0x24a52ee0  addiu       $a1, $a1, 0x2EE0
    ctx->pc = 0x1572d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12000));
    // 0x1572d8: 0x27a60508  addiu       $a2, $sp, 0x508
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
    // 0x1572dc: 0x27a7050c  addiu       $a3, $sp, 0x50C
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
    // 0x1572e0: 0x27a802b0  addiu       $t0, $sp, 0x2B0
    ctx->pc = 0x1572e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1572e4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1572E4u;
    SET_GPR_U32(ctx, 31, 0x1572ECu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1572E4u, 0x1572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572ECu;
label_1572ec:
    // 0x1572ec: 0xc7a10508  lwc1        $f1, 0x508($sp)
    ctx->pc = 0x1572ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1572f0: 0xc7a00520  lwc1        $f0, 0x520($sp)
    ctx->pc = 0x1572f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1572f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1572f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1572f8: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x1572f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
    // 0x1572fc: 0xc7a1050c  lwc1        $f1, 0x50C($sp)
    ctx->pc = 0x1572fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157300: 0xc7a00524  lwc1        $f0, 0x524($sp)
    ctx->pc = 0x157300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157304: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157308: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x157308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
    // 0x15730c: 0x8fa2055c  lw          $v0, 0x55C($sp)
    ctx->pc = 0x15730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
    // 0x157310: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x157310u;
    {
        const bool branch_taken_0x157310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157310) {
            ctx->pc = 0x1573D0u;
            goto label_1573d0;
        }
    }
    ctx->pc = 0x157318u;
    // 0x157318: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x157318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x15731c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x157320: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157320u;
    {
        const bool branch_taken_0x157320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157320) {
            ctx->pc = 0x15733Cu;
            goto label_15733c;
        }
    }
    ctx->pc = 0x157328u;
    // 0x157328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15732c: 0x0  nop
    ctx->pc = 0x15732cu;
    // NOP
    // 0x157330: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157334u;
    {
        const bool branch_taken_0x157334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157334) {
            ctx->pc = 0x157358u;
            goto label_157358;
        }
    }
    ctx->pc = 0x15733Cu;
label_15733c:
    // 0x15733c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x157340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15734c: 0x0  nop
    ctx->pc = 0x15734cu;
    // NOP
    // 0x157350: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157354: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157358:
    // 0x157358: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x15735c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157360: 0x0  nop
    ctx->pc = 0x157360u;
    // NOP
    // 0x157364: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157364u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157368: 0xc7a00508  lwc1        $f0, 0x508($sp)
    ctx->pc = 0x157368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15736c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15736cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157370: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x157370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
    // 0x157374: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x157374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x157378: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15737c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15737Cu;
    {
        const bool branch_taken_0x15737c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15737c) {
            ctx->pc = 0x157398u;
            goto label_157398;
        }
    }
    ctx->pc = 0x157384u;
    // 0x157384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157388: 0x0  nop
    ctx->pc = 0x157388u;
    // NOP
    // 0x15738c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15738cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157390: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157390) {
            ctx->pc = 0x1573B4u;
            goto label_1573b4;
        }
    }
    ctx->pc = 0x157398u;
label_157398:
    // 0x157398: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x15739c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1573a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1573a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1573a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1573a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1573a8: 0x0  nop
    ctx->pc = 0x1573a8u;
    // NOP
    // 0x1573ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1573acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1573b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1573b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1573b4:
    // 0x1573b4: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1573b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1573b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1573bc: 0x0  nop
    ctx->pc = 0x1573bcu;
    // NOP
    // 0x1573c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1573c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1573c4: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x1573c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1573c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1573cc: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x1573ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
label_1573d0:
    // 0x1573d0: 0x83a202b0  lb          $v0, 0x2B0($sp)
    ctx->pc = 0x1573d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1573d4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1573d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1573d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1573d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1573dc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1573e0: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1573E0u;
    {
        const bool branch_taken_0x1573e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1573e0) {
            ctx->pc = 0x1575B4u;
            goto label_1575b4;
        }
    }
    ctx->pc = 0x1573E8u;
    // 0x1573e8: 0x27a404f8  addiu       $a0, $sp, 0x4F8
    ctx->pc = 0x1573e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x1573ec: 0xc0495d4  jal         func_125750
    ctx->pc = 0x1573ECu;
    SET_GPR_U32(ctx, 31, 0x1573F4u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1573ECu, 0x1573F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573F4u;
label_1573f4:
    // 0x1573f4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1573f8: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1573fc: 0x27a604f8  addiu       $a2, $sp, 0x4F8
    ctx->pc = 0x1573fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x157400: 0xc08e514  jal         func_239450
    ctx->pc = 0x157400u;
    SET_GPR_U32(ctx, 31, 0x157408u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x157400u, 0x157408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157408u;
label_157408:
    // 0x157408: 0x27a40528  addiu       $a0, $sp, 0x528
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x15740c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x15740Cu;
    SET_GPR_U32(ctx, 31, 0x157414u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x15740Cu, 0x157414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157414u;
label_157414:
    // 0x157414: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x157418: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15741c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157420: 0x27a604f8  addiu       $a2, $sp, 0x4F8
    ctx->pc = 0x157420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x157424: 0xc7ac0560  lwc1        $f12, 0x560($sp)
    ctx->pc = 0x157424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157428: 0x27a70508  addiu       $a3, $sp, 0x508
    ctx->pc = 0x157428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
    // 0x15742c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x15742cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157430: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x157430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157434: 0xc08be94  jal         func_22FA50
    ctx->pc = 0x157434u;
    SET_GPR_U32(ctx, 31, 0x15743Cu);
    ctx->pc = 0x22FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA50u, 0x157434u, 0x15743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15743Cu;
label_15743c:
    // 0x15743c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x15743cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157440: 0x93a20564  lbu         $v0, 0x564($sp)
    ctx->pc = 0x157440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1380)));
    // 0x157444: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157444u;
    {
        const bool branch_taken_0x157444 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157444) {
            ctx->pc = 0x157460u;
            goto label_157460;
        }
    }
    ctx->pc = 0x15744Cu;
    // 0x15744c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15744cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157450: 0x0  nop
    ctx->pc = 0x157450u;
    // NOP
    // 0x157454: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157458u;
    {
        const bool branch_taken_0x157458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157458) {
            ctx->pc = 0x15747Cu;
            goto label_15747c;
        }
    }
    ctx->pc = 0x157460u;
label_157460:
    // 0x157460: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x157460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x157464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157468: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15746c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15746cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157470: 0x0  nop
    ctx->pc = 0x157470u;
    // NOP
    // 0x157474: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157478: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15747c:
    // 0x15747c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x157480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157484: 0x0  nop
    ctx->pc = 0x157484u;
    // NOP
    // 0x157488: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x157488u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15748c: 0x0  nop
    ctx->pc = 0x15748cu;
    // NOP
    // 0x157490: 0x0  nop
    ctx->pc = 0x157490u;
    // NOP
    // 0x157494: 0x93a20565  lbu         $v0, 0x565($sp)
    ctx->pc = 0x157494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1381)));
    // 0x157498: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157498u;
    {
        const bool branch_taken_0x157498 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157498) {
            ctx->pc = 0x1574B4u;
            goto label_1574b4;
        }
    }
    ctx->pc = 0x1574A0u;
    // 0x1574a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574a4: 0x0  nop
    ctx->pc = 0x1574a4u;
    // NOP
    // 0x1574a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1574a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1574ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1574ACu;
    {
        const bool branch_taken_0x1574ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1574ac) {
            ctx->pc = 0x1574D0u;
            goto label_1574d0;
        }
    }
    ctx->pc = 0x1574B4u;
label_1574b4:
    // 0x1574b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1574b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1574b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1574bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1574bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1574c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1574c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574c4: 0x0  nop
    ctx->pc = 0x1574c4u;
    // NOP
    // 0x1574c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1574c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1574cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1574ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1574d0:
    // 0x1574d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1574d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574d8: 0x0  nop
    ctx->pc = 0x1574d8u;
    // NOP
    // 0x1574dc: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1574dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1574e0: 0x0  nop
    ctx->pc = 0x1574e0u;
    // NOP
    // 0x1574e4: 0x0  nop
    ctx->pc = 0x1574e4u;
    // NOP
    // 0x1574e8: 0x93a20566  lbu         $v0, 0x566($sp)
    ctx->pc = 0x1574e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1382)));
    // 0x1574ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1574ECu;
    {
        const bool branch_taken_0x1574ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1574ec) {
            ctx->pc = 0x157508u;
            goto label_157508;
        }
    }
    ctx->pc = 0x1574F4u;
    // 0x1574f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1574f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1574f8: 0x0  nop
    ctx->pc = 0x1574f8u;
    // NOP
    // 0x1574fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1574fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157500u;
    {
        const bool branch_taken_0x157500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157500) {
            ctx->pc = 0x157524u;
            goto label_157524;
        }
    }
    ctx->pc = 0x157508u;
label_157508:
    // 0x157508: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x157508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x15750c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157510: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157518: 0x0  nop
    ctx->pc = 0x157518u;
    // NOP
    // 0x15751c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15751cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157520: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157524:
    // 0x157524: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x157524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x157528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15752c: 0x0  nop
    ctx->pc = 0x15752cu;
    // NOP
    // 0x157530: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x157530u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157534: 0x0  nop
    ctx->pc = 0x157534u;
    // NOP
    // 0x157538: 0x0  nop
    ctx->pc = 0x157538u;
    // NOP
    // 0x15753c: 0x93a20567  lbu         $v0, 0x567($sp)
    ctx->pc = 0x15753cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1383)));
    // 0x157540: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157540u;
    {
        const bool branch_taken_0x157540 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157540) {
            ctx->pc = 0x15755Cu;
            goto label_15755c;
        }
    }
    ctx->pc = 0x157548u;
    // 0x157548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15754c: 0x0  nop
    ctx->pc = 0x15754cu;
    // NOP
    // 0x157550: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157554u;
    {
        const bool branch_taken_0x157554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157554) {
            ctx->pc = 0x157578u;
            goto label_157578;
        }
    }
    ctx->pc = 0x15755Cu;
label_15755c:
    // 0x15755c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x15755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x157560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15756c: 0x0  nop
    ctx->pc = 0x15756cu;
    // NOP
    // 0x157570: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157574: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157578:
    // 0x157578: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x15757c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15757cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157580: 0x0  nop
    ctx->pc = 0x157580u;
    // NOP
    // 0x157584: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x157584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157588: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x15758c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x157590: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x157590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157594: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x157594u;
    SET_GPR_U32(ctx, 31, 0x15759Cu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x157594u, 0x15759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15759Cu;
label_15759c:
    // 0x15759c: 0x27a404f8  addiu       $a0, $sp, 0x4F8
    ctx->pc = 0x15759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x1575a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1575a4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1575A4u;
    SET_GPR_U32(ctx, 31, 0x1575ACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1575A4u, 0x1575ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575ACu;
label_1575ac:
    // 0x1575ac: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1575ACu;
    {
        const bool branch_taken_0x1575ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575ac) {
            ctx->pc = 0x157748u;
            goto label_157748;
        }
    }
    ctx->pc = 0x1575B4u;
label_1575b4:
    // 0x1575b4: 0x27a40528  addiu       $a0, $sp, 0x528
    ctx->pc = 0x1575b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x1575b8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1575B8u;
    SET_GPR_U32(ctx, 31, 0x1575C0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1575B8u, 0x1575C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575C0u;
label_1575c0:
    // 0x1575c0: 0x8fa30570  lw          $v1, 0x570($sp)
    ctx->pc = 0x1575c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x1575c4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1575c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1575c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1575c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575cc: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1575d0: 0xc7ac0560  lwc1        $f12, 0x560($sp)
    ctx->pc = 0x1575d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1575d4: 0x27a70508  addiu       $a3, $sp, 0x508
    ctx->pc = 0x1575d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
    // 0x1575d8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1575d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1575dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575e0: 0xc08be68  jal         func_22F9A0
    ctx->pc = 0x1575E0u;
    SET_GPR_U32(ctx, 31, 0x1575E8u);
    ctx->pc = 0x22F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9A0u, 0x1575E0u, 0x1575E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575E8u;
label_1575e8:
    // 0x1575e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1575e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575ec: 0x93a20564  lbu         $v0, 0x564($sp)
    ctx->pc = 0x1575ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1380)));
    // 0x1575f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1575F0u;
    {
        const bool branch_taken_0x1575f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1575f0) {
            ctx->pc = 0x15760Cu;
            goto label_15760c;
        }
    }
    ctx->pc = 0x1575F8u;
    // 0x1575f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1575f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1575fc: 0x0  nop
    ctx->pc = 0x1575fcu;
    // NOP
    // 0x157600: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157604u;
    {
        const bool branch_taken_0x157604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157604) {
            ctx->pc = 0x157628u;
            goto label_157628;
        }
    }
    ctx->pc = 0x15760Cu;
label_15760c:
    // 0x15760c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x15760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x157610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15761c: 0x0  nop
    ctx->pc = 0x15761cu;
    // NOP
    // 0x157620: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157624: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157624u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157628:
    // 0x157628: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x15762c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15762cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157630: 0x0  nop
    ctx->pc = 0x157630u;
    // NOP
    // 0x157634: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x157634u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157638: 0x0  nop
    ctx->pc = 0x157638u;
    // NOP
    // 0x15763c: 0x0  nop
    ctx->pc = 0x15763cu;
    // NOP
    // 0x157640: 0x93a20565  lbu         $v0, 0x565($sp)
    ctx->pc = 0x157640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1381)));
    // 0x157644: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157644u;
    {
        const bool branch_taken_0x157644 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157644) {
            ctx->pc = 0x157660u;
            goto label_157660;
        }
    }
    ctx->pc = 0x15764Cu;
    // 0x15764c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15764cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157650: 0x0  nop
    ctx->pc = 0x157650u;
    // NOP
    // 0x157654: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157658: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157658u;
    {
        const bool branch_taken_0x157658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157658) {
            ctx->pc = 0x15767Cu;
            goto label_15767c;
        }
    }
    ctx->pc = 0x157660u;
label_157660:
    // 0x157660: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x157660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x157664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15766c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15766cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157670: 0x0  nop
    ctx->pc = 0x157670u;
    // NOP
    // 0x157674: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157678: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15767c:
    // 0x15767c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x157680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157684: 0x0  nop
    ctx->pc = 0x157684u;
    // NOP
    // 0x157688: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x157688u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15768c: 0x0  nop
    ctx->pc = 0x15768cu;
    // NOP
    // 0x157690: 0x0  nop
    ctx->pc = 0x157690u;
    // NOP
    // 0x157694: 0x93a20566  lbu         $v0, 0x566($sp)
    ctx->pc = 0x157694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1382)));
    // 0x157698: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157698u;
    {
        const bool branch_taken_0x157698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x157698) {
            ctx->pc = 0x1576B4u;
            goto label_1576b4;
        }
    }
    ctx->pc = 0x1576A0u;
    // 0x1576a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1576a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576a4: 0x0  nop
    ctx->pc = 0x1576a4u;
    // NOP
    // 0x1576a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1576a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1576ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1576ACu;
    {
        const bool branch_taken_0x1576ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576ac) {
            ctx->pc = 0x1576D0u;
            goto label_1576d0;
        }
    }
    ctx->pc = 0x1576B4u;
label_1576b4:
    // 0x1576b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1576b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1576b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1576b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1576bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1576bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1576c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1576c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576c4: 0x0  nop
    ctx->pc = 0x1576c4u;
    // NOP
    // 0x1576c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1576c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1576cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1576ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1576d0:
    // 0x1576d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1576d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1576d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1576d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576d8: 0x0  nop
    ctx->pc = 0x1576d8u;
    // NOP
    // 0x1576dc: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x1576dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1576e0: 0x0  nop
    ctx->pc = 0x1576e0u;
    // NOP
    // 0x1576e4: 0x0  nop
    ctx->pc = 0x1576e4u;
    // NOP
    // 0x1576e8: 0x93a20567  lbu         $v0, 0x567($sp)
    ctx->pc = 0x1576e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1383)));
    // 0x1576ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1576ECu;
    {
        const bool branch_taken_0x1576ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1576ec) {
            ctx->pc = 0x157708u;
            goto label_157708;
        }
    }
    ctx->pc = 0x1576F4u;
    // 0x1576f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1576f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576f8: 0x0  nop
    ctx->pc = 0x1576f8u;
    // NOP
    // 0x1576fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1576fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157700u;
    {
        const bool branch_taken_0x157700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157700) {
            ctx->pc = 0x157724u;
            goto label_157724;
        }
    }
    ctx->pc = 0x157708u;
label_157708:
    // 0x157708: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x15770c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157718: 0x0  nop
    ctx->pc = 0x157718u;
    // NOP
    // 0x15771c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15771cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157720: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157724:
    // 0x157724: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x157724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x157728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15772c: 0x0  nop
    ctx->pc = 0x15772cu;
    // NOP
    // 0x157730: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x157730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157734: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x157738: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15773c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x15773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157740: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x157740u;
    SET_GPR_U32(ctx, 31, 0x157748u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x157740u, 0x157748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157748u;
label_157748:
    // 0x157748: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x157748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15774c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x15774Cu;
    SET_GPR_U32(ctx, 31, 0x157754u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x15774Cu, 0x157754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157754u;
label_157754:
    // 0x157754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157758: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x157758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15775c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157760: 0xc0400e0  jal         func_100380
    ctx->pc = 0x157760u;
    SET_GPR_U32(ctx, 31, 0x157768u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x157760u, 0x157768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157768u;
label_157768:
    // 0x157768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x157768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15776c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157770: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x157770u;
    {
        const bool branch_taken_0x157770 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x157770) {
            ctx->pc = 0x157788u;
            goto label_157788;
        }
    }
    ctx->pc = 0x157778u;
    // 0x157778: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x157778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15777c: 0xc055f68  jal         func_157DA0
    ctx->pc = 0x15777Cu;
    SET_GPR_U32(ctx, 31, 0x157784u);
    ctx->pc = 0x157DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157DA0u, 0x15777Cu, 0x157784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157784u;
label_157784:
    // 0x157784: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x157784u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157788:
    // 0x157788: 0xafb7053c  sw          $s7, 0x53C($sp)
    ctx->pc = 0x157788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 23));
    // 0x15778c: 0x8fa2053c  lw          $v0, 0x53C($sp)
    ctx->pc = 0x15778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x157790: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x157790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x157794: 0x8fa2053c  lw          $v0, 0x53C($sp)
    ctx->pc = 0x157794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x157798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15779c: 0x27a60510  addiu       $a2, $sp, 0x510
    ctx->pc = 0x15779cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x1577a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577a4: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x1577A4u;
    SET_GPR_U32(ctx, 31, 0x1577ACu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x1577A4u, 0x1577ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577ACu;
label_1577ac:
    // 0x1577ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1577acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577b0: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x1577b4: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1577b8: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1577bc: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1577bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1577c0: 0x8fa2053c  lw          $v0, 0x53C($sp)
    ctx->pc = 0x1577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x1577c4: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1577c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1577c8: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x1577cc: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1577d0: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1577d4: 0x27a6053c  addiu       $a2, $sp, 0x53C
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
    // 0x1577d8: 0xc055f34  jal         func_157CD0
    ctx->pc = 0x1577D8u;
    SET_GPR_U32(ctx, 31, 0x1577E0u);
    ctx->pc = 0x157CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157CD0u, 0x1577D8u, 0x1577E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577E0u;
label_1577e0:
    // 0x1577e0: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x1577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x1577e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1577e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1577E8u;
    SET_GPR_U32(ctx, 31, 0x1577F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1577E8u, 0x1577F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577F0u;
label_1577f0:
    // 0x1577f0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1577F0u;
    {
        const bool branch_taken_0x1577f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577f0) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x1577F8u;
label_1577f8:
    // 0x1577f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1577fc: 0x27858da0  addiu       $a1, $gp, -0x7260
    ctx->pc = 0x1577fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
    // 0x157800: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157800u;
    SET_GPR_U32(ctx, 31, 0x157808u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157800u, 0x157808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157808u;
label_157808:
    // 0x157808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15780c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x15780Cu;
    {
        const bool branch_taken_0x15780c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15780c) {
            ctx->pc = 0x15783Cu;
            goto label_15783c;
        }
    }
    ctx->pc = 0x157814u;
    // 0x157814: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x157814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157818: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x157818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15781c: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x15781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
    // 0x157820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157824: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x157824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x157828: 0x27a70524  addiu       $a3, $sp, 0x524
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1316));
    // 0x15782c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x15782Cu;
    SET_GPR_U32(ctx, 31, 0x157834u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x15782Cu, 0x157834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157834u;
label_157834:
    // 0x157834: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x157834u;
    {
        const bool branch_taken_0x157834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157834) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x15783Cu;
label_15783c:
    // 0x15783c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157840: 0x27858db0  addiu       $a1, $gp, -0x7250
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938032));
    // 0x157844: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x157844u;
    SET_GPR_U32(ctx, 31, 0x15784Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x157844u, 0x15784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15784Cu;
label_15784c:
    // 0x15784c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15784Cu;
    {
        const bool branch_taken_0x15784c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15784c) {
            ctx->pc = 0x15786Cu;
            goto label_15786c;
        }
    }
    ctx->pc = 0x157854u;
    // 0x157854: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157858: 0x27858db8  addiu       $a1, $gp, -0x7248
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938040));
    // 0x15785c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x15785Cu;
    SET_GPR_U32(ctx, 31, 0x157864u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x15785Cu, 0x157864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157864u;
label_157864:
    // 0x157864: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x157864u;
    {
        const bool branch_taken_0x157864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157864) {
            ctx->pc = 0x157B78u;
            goto label_157b78;
        }
    }
    ctx->pc = 0x15786Cu;
label_15786c:
    // 0x15786c: 0x26440006  addiu       $a0, $s2, 0x6
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x157870: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x157874: 0x24a52e40  addiu       $a1, $a1, 0x2E40
    ctx->pc = 0x157874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11840));
    // 0x157878: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x157878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15787c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157880: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x157880u;
    SET_GPR_U32(ctx, 31, 0x157888u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x157880u, 0x157888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157888u;
label_157888:
    // 0x157888: 0x27a404e8  addiu       $a0, $sp, 0x4E8
    ctx->pc = 0x157888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
    // 0x15788c: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x15788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157890: 0xc040304  jal         func_100C10
    ctx->pc = 0x157890u;
    SET_GPR_U32(ctx, 31, 0x157898u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x157890u, 0x157898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157898u;
label_157898:
    // 0x157898: 0xa3a002b0  sb          $zero, 0x2B0($sp)
    ctx->pc = 0x157898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x15789c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1578a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1578a8: 0x24a52f00  addiu       $a1, $a1, 0x2F00
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    // 0x1578ac: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x1578acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1578b0: 0x27a704e4  addiu       $a3, $sp, 0x4E4
    ctx->pc = 0x1578b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1252));
    // 0x1578b4: 0x27a204d8  addiu       $v0, $sp, 0x4D8
    ctx->pc = 0x1578b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1240));
    // 0x1578b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1578b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578bc: 0x27a904dc  addiu       $t1, $sp, 0x4DC
    ctx->pc = 0x1578bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1244));
    // 0x1578c0: 0x27aa02b0  addiu       $t2, $sp, 0x2B0
    ctx->pc = 0x1578c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1578c4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x1578C4u;
    SET_GPR_U32(ctx, 31, 0x1578CCu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x1578C4u, 0x1578CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578CCu;
label_1578cc:
    // 0x1578cc: 0xc7a104e0  lwc1        $f1, 0x4E0($sp)
    ctx->pc = 0x1578ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1578d0: 0xc7a00520  lwc1        $f0, 0x520($sp)
    ctx->pc = 0x1578d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1578d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1578d8: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x1578d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x1578dc: 0xc7a104e4  lwc1        $f1, 0x4E4($sp)
    ctx->pc = 0x1578dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1578e0: 0xc7a00524  lwc1        $f0, 0x524($sp)
    ctx->pc = 0x1578e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1578e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1578e8: 0xe7a004e4  swc1        $f0, 0x4E4($sp)
    ctx->pc = 0x1578e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1252), bits); }
    // 0x1578ec: 0x8fa4055c  lw          $a0, 0x55C($sp)
    ctx->pc = 0x1578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
    // 0x1578f0: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1578F0u;
    {
        const bool branch_taken_0x1578f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578f0) {
            ctx->pc = 0x1579B0u;
            goto label_1579b0;
        }
    }
    ctx->pc = 0x1578F8u;
    // 0x1578f8: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x1578f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1578fc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1578fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x157900: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x157900u;
    {
        const bool branch_taken_0x157900 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x157900) {
            ctx->pc = 0x15791Cu;
            goto label_15791c;
        }
    }
    ctx->pc = 0x157908u;
    // 0x157908: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x157908u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15790c: 0x0  nop
    ctx->pc = 0x15790cu;
    // NOP
    // 0x157910: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157914u;
    {
        const bool branch_taken_0x157914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157914) {
            ctx->pc = 0x157938u;
            goto label_157938;
        }
    }
    ctx->pc = 0x15791Cu;
label_15791c:
    // 0x15791c: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x15791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x157920: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x157924: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x157924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x157928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15792c: 0x0  nop
    ctx->pc = 0x15792cu;
    // NOP
    // 0x157930: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157934: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157938:
    // 0x157938: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x157938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
    // 0x15793c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15793cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157940: 0x0  nop
    ctx->pc = 0x157940u;
    // NOP
    // 0x157944: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157948: 0xc7a004e0  lwc1        $f0, 0x4E0($sp)
    ctx->pc = 0x157948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15794c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15794cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157950: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x157950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x157954: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x157954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x157958: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15795c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15795Cu;
    {
        const bool branch_taken_0x15795c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15795c) {
            ctx->pc = 0x157978u;
            goto label_157978;
        }
    }
    ctx->pc = 0x157964u;
    // 0x157964: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x157964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157968: 0x0  nop
    ctx->pc = 0x157968u;
    // NOP
    // 0x15796c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15796cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157970u;
    {
        const bool branch_taken_0x157970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157970) {
            ctx->pc = 0x157994u;
            goto label_157994;
        }
    }
    ctx->pc = 0x157978u;
label_157978:
    // 0x157978: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x15797c: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x15797cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x157980: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x157980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x157984: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157988: 0x0  nop
    ctx->pc = 0x157988u;
    // NOP
    // 0x15798c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15798cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157990: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157990u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157994:
    // 0x157994: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x157998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15799c: 0x0  nop
    ctx->pc = 0x15799cu;
    // NOP
    // 0x1579a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1579a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1579a4: 0xc7a004e4  lwc1        $f0, 0x4E4($sp)
    ctx->pc = 0x1579a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1579a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1579ac: 0xe7a004e4  swc1        $f0, 0x4E4($sp)
    ctx->pc = 0x1579acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1252), bits); }
label_1579b0:
    // 0x1579b0: 0x8fa40558  lw          $a0, 0x558($sp)
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
    // 0x1579b4: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1579B4u;
    {
        const bool branch_taken_0x1579b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579b4) {
            ctx->pc = 0x157A74u;
            goto label_157a74;
        }
    }
    ctx->pc = 0x1579BCu;
    // 0x1579bc: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x1579bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1579c0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1579c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1579C4u;
    {
        const bool branch_taken_0x1579c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1579c4) {
            ctx->pc = 0x1579E0u;
            goto label_1579e0;
        }
    }
    ctx->pc = 0x1579CCu;
    // 0x1579cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1579ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1579d0: 0x0  nop
    ctx->pc = 0x1579d0u;
    // NOP
    // 0x1579d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1579d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1579d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1579D8u;
    {
        const bool branch_taken_0x1579d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579d8) {
            ctx->pc = 0x1579FCu;
            goto label_1579fc;
        }
    }
    ctx->pc = 0x1579E0u;
label_1579e0:
    // 0x1579e0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1579e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1579e4: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1579e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1579ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1579ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1579f0: 0x0  nop
    ctx->pc = 0x1579f0u;
    // NOP
    // 0x1579f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1579f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1579f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1579f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1579fc:
    // 0x1579fc: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x157a00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x157a00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a04: 0x0  nop
    ctx->pc = 0x157a04u;
    // NOP
    // 0x157a08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157a08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157a0c: 0xc7a004d8  lwc1        $f0, 0x4D8($sp)
    ctx->pc = 0x157a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157a14: 0xe7a004d8  swc1        $f0, 0x4D8($sp)
    ctx->pc = 0x157a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
    // 0x157a18: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x157a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x157a1c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x157a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157a20: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157A20u;
    {
        const bool branch_taken_0x157a20 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x157a20) {
            ctx->pc = 0x157A3Cu;
            goto label_157a3c;
        }
    }
    ctx->pc = 0x157A28u;
    // 0x157a28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x157a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a2c: 0x0  nop
    ctx->pc = 0x157a2cu;
    // NOP
    // 0x157a30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157A34u;
    {
        const bool branch_taken_0x157a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a34) {
            ctx->pc = 0x157A58u;
            goto label_157a58;
        }
    }
    ctx->pc = 0x157A3Cu;
label_157a3c:
    // 0x157a3c: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x157a40: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x157a44: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x157a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x157a48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157a48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a4c: 0x0  nop
    ctx->pc = 0x157a4cu;
    // NOP
    // 0x157a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x157a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157a54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x157a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_157a58:
    // 0x157a58: 0x3c0443e0  lui         $a0, 0x43E0
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17376 << 16));
    // 0x157a5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x157a5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a60: 0x0  nop
    ctx->pc = 0x157a60u;
    // NOP
    // 0x157a64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157a64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157a68: 0xc7a004dc  lwc1        $f0, 0x4DC($sp)
    ctx->pc = 0x157a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157a70: 0xe7a004dc  swc1        $f0, 0x4DC($sp)
    ctx->pc = 0x157a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1244), bits); }
label_157a74:
    // 0x157a74: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x157a78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x157a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a7c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x157A7Cu;
    SET_GPR_U32(ctx, 31, 0x157A84u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x157A7Cu, 0x157A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A84u;
label_157a84:
    // 0x157a84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x157a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a88: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x157a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x157a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a94: 0xc0400e0  jal         func_100380
    ctx->pc = 0x157A94u;
    SET_GPR_U32(ctx, 31, 0x157A9Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x157A94u, 0x157A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A9Cu;
label_157a9c:
    // 0x157a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157aa0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x157aa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157aa4: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x157AA4u;
    {
        const bool branch_taken_0x157aa4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x157aa4) {
            ctx->pc = 0x157AC0u;
            goto label_157ac0;
        }
    }
    ctx->pc = 0x157AACu;
    // 0x157aac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x157aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ab0: 0xc055f68  jal         func_157DA0
    ctx->pc = 0x157AB0u;
    SET_GPR_U32(ctx, 31, 0x157AB8u);
    ctx->pc = 0x157DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157DA0u, 0x157AB0u, 0x157AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AB8u;
label_157ab8:
    // 0x157ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157abc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x157abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_157ac0:
    // 0x157ac0: 0xafb60538  sw          $s6, 0x538($sp)
    ctx->pc = 0x157ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 22));
    // 0x157ac4: 0x8fa20550  lw          $v0, 0x550($sp)
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x157ac8: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x157ac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x157acc: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x157accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x157ad0: 0x38a60001  xori        $a2, $a1, 0x1
    ctx->pc = 0x157ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x157ad4: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x157ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x157ad8: 0x8fa70570  lw          $a3, 0x570($sp)
    ctx->pc = 0x157ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x157adc: 0x8fa80554  lw          $t0, 0x554($sp)
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
    // 0x157ae0: 0x8482b  sltu        $t1, $zero, $t0
    ctx->pc = 0x157ae0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x157ae4: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x157ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x157ae8: 0x384b0001  xori        $t3, $v0, 0x1
    ctx->pc = 0x157ae8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157aec: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x157aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x157af0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x157af4: 0x27a604b0  addiu       $a2, $sp, 0x4B0
    ctx->pc = 0x157af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x157af8: 0x27a704e0  addiu       $a3, $sp, 0x4E0
    ctx->pc = 0x157af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x157afc: 0x27a804d8  addiu       $t0, $sp, 0x4D8
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1240));
    // 0x157b00: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x157b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b04: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x157b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b08: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x157B08u;
    SET_GPR_U32(ctx, 31, 0x157B10u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x157B08u, 0x157B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B10u;
label_157b10:
    // 0x157b10: 0x8fa30538  lw          $v1, 0x538($sp)
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
    // 0x157b14: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x157b18: 0x8fa40538  lw          $a0, 0x538($sp)
    ctx->pc = 0x157b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
    // 0x157b1c: 0x27a504e8  addiu       $a1, $sp, 0x4E8
    ctx->pc = 0x157b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
    // 0x157b20: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x157B20u;
    SET_GPR_U32(ctx, 31, 0x157B28u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x157B20u, 0x157B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B28u;
label_157b28:
    // 0x157b28: 0x8fa40570  lw          $a0, 0x570($sp)
    ctx->pc = 0x157b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x157b2c: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x157b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x157b30: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x157b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x157b34: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x157b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x157b38: 0x8fa40538  lw          $a0, 0x538($sp)
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
    // 0x157b3c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x157b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x157b40: 0x8fa50570  lw          $a1, 0x570($sp)
    ctx->pc = 0x157b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x157b44: 0x27a204c8  addiu       $v0, $sp, 0x4C8
    ctx->pc = 0x157b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
    // 0x157b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b4c: 0x24a50038  addiu       $a1, $a1, 0x38
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x157b50: 0x27a60538  addiu       $a2, $sp, 0x538
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
    // 0x157b54: 0xc055f34  jal         func_157CD0
    ctx->pc = 0x157B54u;
    SET_GPR_U32(ctx, 31, 0x157B5Cu);
    ctx->pc = 0x157CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157CD0u, 0x157B54u, 0x157B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B5Cu;
label_157b5c:
    // 0x157b5c: 0x27a604e8  addiu       $a2, $sp, 0x4E8
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
    // 0x157b60: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x157b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b6c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x157B6Cu;
    SET_GPR_U32(ctx, 31, 0x157B74u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x157B6Cu, 0x157B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B74u;
label_157b74:
    // 0x157b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157b78:
    // 0x157b78: 0x2332823  subu        $a1, $s1, $s3
    ctx->pc = 0x157b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x157b7c: 0x8fa20568  lw          $v0, 0x568($sp)
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
    // 0x157b80: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x157b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x157b84: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x157B84u;
    {
        const bool branch_taken_0x157b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b84) {
            ctx->pc = 0x157BCCu;
            goto label_157bcc;
        }
    }
    ctx->pc = 0x157B8Cu;
    // 0x157b8c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157b90: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x157b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x157b94: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x157b94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x157b98: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x157b9c: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157BBCu;
            goto label_157bbc;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x157ba8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x157ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x157bac: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x157bacu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x157bb0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x157bb4: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157BB4u;
    {
        const bool branch_taken_0x157bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x157bb4) {
            ctx->pc = 0x157BCCu;
            goto label_157bcc;
        }
    }
    ctx->pc = 0x157BBCu;
label_157bbc:
    // 0x157bbc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x157bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x157bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bc4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x157BC4u;
    {
        const bool branch_taken_0x157bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bc4) {
            ctx->pc = 0x157B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b78;
        }
    }
    ctx->pc = 0x157BCCu;
label_157bcc:
    // 0x157bcc: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x157bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x157bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157bd4:
    // 0x157bd4: 0x2332023  subu        $a0, $s1, $s3
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x157bd8: 0x8fa50568  lw          $a1, 0x568($sp)
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
    // 0x157bdc: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x157bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x157be0: 0x1440fcc6  bnez        $v0, . + 4 + (-0x33A << 2)
    ctx->pc = 0x157BE0u;
    {
        const bool branch_taken_0x157be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157be0) {
            ctx->pc = 0x156EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156efc;
        }
    }
    ctx->pc = 0x157BE8u;
label_157be8:
    // 0x157be8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x157BE8u;
    {
        const bool branch_taken_0x157be8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x157be8) {
            ctx->pc = 0x157C0Cu;
            goto label_157c0c;
        }
    }
    ctx->pc = 0x157BF0u;
    // 0x157bf0: 0x8f90c008  lw          $s0, -0x3FF8($gp)
    ctx->pc = 0x157bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x157bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157bfc: 0xc055f1c  jal         func_157C70
    ctx->pc = 0x157BFCu;
    SET_GPR_U32(ctx, 31, 0x157C04u);
    ctx->pc = 0x157C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C70u, 0x157BFCu, 0x157C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C04u;
label_157c04:
    // 0x157c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157c0c:
    // 0x157c0c: 0xa3a0056f  sb          $zero, 0x56F($sp)
    ctx->pc = 0x157c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1391), (uint8_t)GPR_U32(ctx, 0));
    // 0x157c10: 0x27a50528  addiu       $a1, $sp, 0x528
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1320));
    // 0x157c14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x157c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c20: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x157C20u;
    SET_GPR_U32(ctx, 31, 0x157C28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x157C20u, 0x157C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C28u;
label_157c28:
    // 0x157c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c2c: 0x93a4056f  lbu         $a0, 0x56F($sp)
    ctx->pc = 0x157c2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1391)));
    // 0x157c30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x157c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157c34:
    // 0x157c34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x157c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x157c38: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x157c38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157c3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x157c3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157c40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x157c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157c44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x157c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157c48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x157c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157c4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x157c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157c50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x157c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157c54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x157c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157c58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x157c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157c5c: 0x27bd0590  addiu       $sp, $sp, 0x590
    ctx->pc = 0x157c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x157c60: 0x3e00008  jr          $ra
    ctx->pc = 0x157C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157C68u;
    // 0x157c68: 0x0  nop
    ctx->pc = 0x157c68u;
    // NOP
    // 0x157c6c: 0x0  nop
    ctx->pc = 0x157c6cu;
    // NOP
    ctx->pc = 0x157c70u;
}
