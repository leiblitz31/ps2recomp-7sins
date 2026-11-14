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

// Function: sub_00602F08
// Address: 0x602f08 - 0x606000
void sub_00602F08_0x602f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00602F08_0x602f08");
#endif

    switch (ctx->pc) {
        case 0x602f1cu: goto label_602f1c;
        case 0x602f98u: goto label_602f98;
        case 0x602fc8u: goto label_602fc8;
        case 0x602fecu: goto label_602fec;
        case 0x602ffcu: goto label_602ffc;
        case 0x603008u: goto label_603008;
        case 0x60301cu: goto label_60301c;
        case 0x603020u: goto label_603020;
        case 0x603024u: goto label_603024;
        case 0x603028u: goto label_603028;
        case 0x603038u: goto label_603038;
        case 0x603058u: goto label_603058;
        case 0x603088u: goto label_603088;
        case 0x6030b8u: goto label_6030b8;
        case 0x6030d0u: goto label_6030d0;
        case 0x6030e8u: goto label_6030e8;
        case 0x6030f4u: goto label_6030f4;
        case 0x603104u: goto label_603104;
        case 0x603114u: goto label_603114;
        case 0x603118u: goto label_603118;
        case 0x603124u: goto label_603124;
        case 0x603148u: goto label_603148;
        case 0x60317cu: goto label_60317c;
        case 0x603180u: goto label_603180;
        case 0x603184u: goto label_603184;
        case 0x603188u: goto label_603188;
        case 0x60318cu: goto label_60318c;
        case 0x603190u: goto label_603190;
        case 0x603194u: goto label_603194;
        case 0x603198u: goto label_603198;
        case 0x6031acu: goto label_6031ac;
        case 0x60331cu: goto label_60331c;
        case 0x603430u: goto label_603430;
        case 0x603434u: goto label_603434;
        case 0x603438u: goto label_603438;
        case 0x60343cu: goto label_60343c;
        case 0x6034b8u: goto label_6034b8;
        case 0x6035a0u: goto label_6035a0;
        case 0x6035a4u: goto label_6035a4;
        case 0x6035a8u: goto label_6035a8;
        case 0x6035acu: goto label_6035ac;
        case 0x6035b0u: goto label_6035b0;
        case 0x6035b4u: goto label_6035b4;
        case 0x6035b8u: goto label_6035b8;
        case 0x6035bcu: goto label_6035bc;
        case 0x603618u: goto label_603618;
        case 0x603844u: goto label_603844;
        case 0x603848u: goto label_603848;
        case 0x60384cu: goto label_60384c;
        case 0x603850u: goto label_603850;
        case 0x603854u: goto label_603854;
        case 0x603858u: goto label_603858;
        case 0x60385cu: goto label_60385c;
        case 0x603860u: goto label_603860;
        case 0x603924u: goto label_603924;
        case 0x6039c4u: goto label_6039c4;
        case 0x6039c8u: goto label_6039c8;
        case 0x6039ccu: goto label_6039cc;
        case 0x6039d0u: goto label_6039d0;
        case 0x6039d4u: goto label_6039d4;
        case 0x6039d8u: goto label_6039d8;
        case 0x6039dcu: goto label_6039dc;
        case 0x6039e0u: goto label_6039e0;
        case 0x603c68u: goto label_603c68;
        case 0x603c6cu: goto label_603c6c;
        case 0x603c70u: goto label_603c70;
        case 0x603c74u: goto label_603c74;
        case 0x603c78u: goto label_603c78;
        case 0x603c7cu: goto label_603c7c;
        case 0x603c80u: goto label_603c80;
        case 0x603c84u: goto label_603c84;
        case 0x603de8u: goto label_603de8;
        case 0x603decu: goto label_603dec;
        case 0x603df0u: goto label_603df0;
        case 0x603df4u: goto label_603df4;
        case 0x603df8u: goto label_603df8;
        case 0x603dfcu: goto label_603dfc;
        case 0x603e00u: goto label_603e00;
        case 0x603e04u: goto label_603e04;
        case 0x603e5cu: goto label_603e5c;
        case 0x60408cu: goto label_60408c;
        case 0x604090u: goto label_604090;
        case 0x604094u: goto label_604094;
        case 0x604098u: goto label_604098;
        case 0x60409cu: goto label_60409c;
        case 0x6040a0u: goto label_6040a0;
        case 0x6040a4u: goto label_6040a4;
        case 0x6040a8u: goto label_6040a8;
        case 0x6040acu: goto label_6040ac;
        case 0x6040b0u: goto label_6040b0;
        case 0x6040b4u: goto label_6040b4;
        case 0x6040b8u: goto label_6040b8;
        case 0x6040bcu: goto label_6040bc;
        case 0x6040c0u: goto label_6040c0;
        case 0x6040c4u: goto label_6040c4;
        case 0x6040c8u: goto label_6040c8;
        case 0x6044d0u: goto label_6044d0;
        case 0x6044d4u: goto label_6044d4;
        case 0x6044d8u: goto label_6044d8;
        case 0x6044dcu: goto label_6044dc;
        case 0x6044e0u: goto label_6044e0;
        case 0x6044e4u: goto label_6044e4;
        case 0x6044e8u: goto label_6044e8;
        case 0x6044ecu: goto label_6044ec;
        case 0x6044f0u: goto label_6044f0;
        case 0x6044f4u: goto label_6044f4;
        case 0x6044f8u: goto label_6044f8;
        case 0x6044fcu: goto label_6044fc;
        case 0x604500u: goto label_604500;
        case 0x604504u: goto label_604504;
        case 0x604508u: goto label_604508;
        case 0x60450cu: goto label_60450c;
        case 0x604574u: goto label_604574;
        case 0x6045e4u: goto label_6045e4;
        case 0x604774u: goto label_604774;
        case 0x60485cu: goto label_60485c;
        case 0x604918u: goto label_604918;
        case 0x6049b4u: goto label_6049b4;
        case 0x604a04u: goto label_604a04;
        case 0x604bf4u: goto label_604bf4;
        case 0x604c7cu: goto label_604c7c;
        case 0x6052f0u: goto label_6052f0;
        case 0x60532cu: goto label_60532c;
        case 0x60572cu: goto label_60572c;
        case 0x605778u: goto label_605778;
        case 0x605f60u: goto label_605f60;
        default: break;
    }

    ctx->pc = 0x602f08u;

    // 0x602f08: 0x3a673c83  xori        $a3, $s3, 0x3C83
    ctx->pc = 0x602f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)15491);
    // 0x602f0c: 0x4eaec5e6  .word       0x4EAEC5E6                   # INVALID     $s5, $t6, -0x3A1A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602f0cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602F0C raw=0x4EAEC5E6");
    // 0x602f10: 0xbb6318b0  swr         $v1, 0x18B0($k1)
    ctx->pc = 0x602f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 6320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x602f14: 0xedae8867  .word       0xEDAE8867                   # INVALID     $t5, $t6, -0x7799 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602f14u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x602F14 raw=0xEDAE8867");
    // 0x602f18: 0x0  nop
    ctx->pc = 0x602f18u;
    // NOP
label_602f1c:
    // 0x602f1c: 0x0  nop
    ctx->pc = 0x602f1cu;
    // NOP
    // 0x602f20: 0x0  nop
    ctx->pc = 0x602f20u;
    // NOP
    // 0x602f24: 0x0  nop
    ctx->pc = 0x602f24u;
    // NOP
    // 0x602f28: 0x0  nop
    ctx->pc = 0x602f28u;
    // NOP
    // 0x602f2c: 0x0  nop
    ctx->pc = 0x602f2cu;
    // NOP
    // 0x602f30: 0x0  nop
    ctx->pc = 0x602f30u;
    // NOP
    // 0x602f34: 0x0  nop
    ctx->pc = 0x602f34u;
    // NOP
    // 0x602f38: 0x0  nop
    ctx->pc = 0x602f38u;
    // NOP
    // 0x602f3c: 0x0  nop
    ctx->pc = 0x602f3cu;
    // NOP
    // 0x602f40: 0x0  nop
    ctx->pc = 0x602f40u;
    // NOP
    // 0x602f44: 0x0  nop
    ctx->pc = 0x602f44u;
    // NOP
    // 0x602f48: 0x0  nop
    ctx->pc = 0x602f48u;
    // NOP
    // 0x602f4c: 0x0  nop
    ctx->pc = 0x602f4cu;
    // NOP
    // 0x602f50: 0x0  nop
    ctx->pc = 0x602f50u;
    // NOP
    // 0x602f54: 0x0  nop
    ctx->pc = 0x602f54u;
    // NOP
    // 0x602f58: 0x0  nop
    ctx->pc = 0x602f58u;
    // NOP
    // 0x602f5c: 0x0  nop
    ctx->pc = 0x602f5cu;
    // NOP
    // 0x602f60: 0x0  nop
    ctx->pc = 0x602f60u;
    // NOP
    // 0x602f64: 0x0  nop
    ctx->pc = 0x602f64u;
    // NOP
    // 0x602f68: 0x0  nop
    ctx->pc = 0x602f68u;
    // NOP
    // 0x602f6c: 0x0  nop
    ctx->pc = 0x602f6cu;
    // NOP
    // 0x602f70: 0x0  nop
    ctx->pc = 0x602f70u;
    // NOP
    // 0x602f74: 0x0  nop
    ctx->pc = 0x602f74u;
    // NOP
    // 0x602f78: 0x0  nop
    ctx->pc = 0x602f78u;
    // NOP
    // 0x602f7c: 0x0  nop
    ctx->pc = 0x602f7cu;
    // NOP
    // 0x602f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x602f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x602f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x602f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x602f88: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x602f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x602f8c: 0x2484b400  addiu       $a0, $a0, -0x4C00
    ctx->pc = 0x602f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x602f90: 0xc050530  jal         func_1414C0
    ctx->pc = 0x602F90u;
    SET_GPR_U32(ctx, 31, 0x602F98u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x602F90u, 0x602F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x602F98u;
label_602f98:
    // 0x602f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x602f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x602f9c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x602f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x602fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x602FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x602FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x602FA8u;
    // 0x602fa8: 0x0  nop
    ctx->pc = 0x602fa8u;
    // NOP
    // 0x602fac: 0x0  nop
    ctx->pc = 0x602facu;
    // NOP
    // 0x602fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x602fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x602fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x602fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x602fb8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x602fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x602fbc: 0x2484b430  addiu       $a0, $a0, -0x4BD0
    ctx->pc = 0x602fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x602fc0: 0xc04ab04  jal         func_12AC10
    ctx->pc = 0x602FC0u;
    SET_GPR_U32(ctx, 31, 0x602FC8u);
    ctx->pc = 0x12AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC10u, 0x602FC0u, 0x602FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x602FC8u;
label_602fc8:
    // 0x602fc8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x602fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x602fcc: 0x2484b490  addiu       $a0, $a0, -0x4B70
    ctx->pc = 0x602fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947984));
    // 0x602fd0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x602fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x602fd4: 0x24a55780  addiu       $a1, $a1, 0x5780
    ctx->pc = 0x602fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22400));
    // 0x602fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x602fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x602fdc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x602fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x602fe0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x602fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x602fe4: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x602FE4u;
    SET_GPR_U32(ctx, 31, 0x602FECu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x602FE4u, 0x602FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x602FECu;
label_602fec:
    // 0x602fec: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x602fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x602ff0: 0x2484b4b0  addiu       $a0, $a0, -0x4B50
    ctx->pc = 0x602ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948016));
    // 0x602ff4: 0xc048f2c  jal         func_123CB0
    ctx->pc = 0x602FF4u;
    SET_GPR_U32(ctx, 31, 0x602FFCu);
    ctx->pc = 0x123CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CB0u, 0x602FF4u, 0x602FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x602FFCu;
label_602ffc:
    // 0x602ffc: 0x8f848b38  lw          $a0, -0x74C8($gp)
    ctx->pc = 0x602ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x603000: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x603000u;
    SET_GPR_U32(ctx, 31, 0x603008u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x603000u, 0x603008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603008u;
label_603008:
    // 0x603008: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x603008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x60300c: 0xac622220  sw          $v0, 0x2220($v1)
    ctx->pc = 0x60300cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4E2220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E2220u, _value); } while (0);
    // 0x603010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x603010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x603014: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x603014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x603018: 0x3e00008  jr          $ra
label_60301c:
    if (ctx->pc == 0x60301Cu) {
        ctx->pc = 0x603020u;
        goto label_603020;
    }
    ctx->pc = 0x603018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x603020u;
label_603020:
    // 0x603020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x603020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_603024:
    // 0x603024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x603024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_603028:
    // 0x603028: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x603028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x60302c: 0x2484bd70  addiu       $a0, $a0, -0x4290
    ctx->pc = 0x60302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    // 0x603030: 0xc04f5d8  jal         func_13D760
    ctx->pc = 0x603030u;
    SET_GPR_U32(ctx, 31, 0x603038u);
    ctx->pc = 0x13D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D760u, 0x603030u, 0x603038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603038u;
label_603038:
    // 0x603038: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x603038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x60303c: 0x2484bd70  addiu       $a0, $a0, -0x4290
    ctx->pc = 0x60303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950256));
    // 0x603040: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x603040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x603044: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x603044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x603048: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x603048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x60304c: 0x24c6bd60  addiu       $a2, $a2, -0x42A0
    ctx->pc = 0x60304cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950240));
    // 0x603050: 0xc0ba1c0  jal         func_2E8700
    ctx->pc = 0x603050u;
    SET_GPR_U32(ctx, 31, 0x603058u);
    ctx->pc = 0x2E8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8700u, 0x603050u, 0x603058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603058u;
label_603058:
    // 0x603058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x603058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x60305c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x60305cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x603060: 0x3e00008  jr          $ra
    ctx->pc = 0x603060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x603068u;
    // 0x603068: 0x0  nop
    ctx->pc = 0x603068u;
    // NOP
    // 0x60306c: 0x0  nop
    ctx->pc = 0x60306cu;
    // NOP
    // 0x603070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x603070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x603074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x603074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x603078: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x603078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x60307c: 0x2484be30  addiu       $a0, $a0, -0x41D0
    ctx->pc = 0x60307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950448));
    // 0x603080: 0xc0495e0  jal         func_125780
    ctx->pc = 0x603080u;
    SET_GPR_U32(ctx, 31, 0x603088u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x603080u, 0x603088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603088u;
label_603088:
    // 0x603088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x603088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x60308c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x60308cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x603090: 0x3e00008  jr          $ra
    ctx->pc = 0x603090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x603098u;
    // 0x603098: 0x0  nop
    ctx->pc = 0x603098u;
    // NOP
    // 0x60309c: 0x0  nop
    ctx->pc = 0x60309cu;
    // NOP
    // 0x6030a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x6030a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x6030a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x6030a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x6030a8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x6030a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x6030ac: 0x2484c178  addiu       $a0, $a0, -0x3E88
    ctx->pc = 0x6030acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951288));
    // 0x6030b0: 0xc094fc4  jal         func_253F10
    ctx->pc = 0x6030B0u;
    SET_GPR_U32(ctx, 31, 0x6030B8u);
    ctx->pc = 0x253F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F10u, 0x6030B0u, 0x6030B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x6030B8u;
label_6030b8:
    // 0x6030b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x6030b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x6030bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x6030bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x6030c0: 0x3e00008  jr          $ra
    ctx->pc = 0x6030C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6030C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x6030C8u;
    // 0x6030c8: 0x0  nop
    ctx->pc = 0x6030c8u;
    // NOP
    // 0x6030cc: 0x0  nop
    ctx->pc = 0x6030ccu;
    // NOP
label_6030d0:
    // 0x6030d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x6030d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x6030d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x6030d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x6030d8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x6030d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x6030dc: 0x2484c340  addiu       $a0, $a0, -0x3CC0
    ctx->pc = 0x6030dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951744));
    // 0x6030e0: 0xc050530  jal         func_1414C0
    ctx->pc = 0x6030E0u;
    SET_GPR_U32(ctx, 31, 0x6030E8u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x6030E0u, 0x6030E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x6030E8u;
label_6030e8:
    // 0x6030e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x6030e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x6030ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x6030ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x6030f0: 0x3e00008  jr          $ra
label_6030f4:
    if (ctx->pc == 0x6030F4u) {
        ctx->pc = 0x6030F8u;
        goto label_fallthrough_0x6030f0;
    }
    ctx->pc = 0x6030F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6030F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x6030f0:
    ctx->pc = 0x6030F8u;
    // 0x6030f8: 0x0  nop
    ctx->pc = 0x6030f8u;
    // NOP
    // 0x6030fc: 0x0  nop
    ctx->pc = 0x6030fcu;
    // NOP
    // 0x603100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x603100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_603104:
    // 0x603104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x603104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x603108: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x603108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x60310c: 0x248441c0  addiu       $a0, $a0, 0x41C0
    ctx->pc = 0x60310cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
    // 0x603110: 0xc040530  jal         func_1014C0
label_603114:
    if (ctx->pc == 0x603114u) {
        ctx->pc = 0x603118u;
        goto label_603118;
    }
    ctx->pc = 0x603110u;
    SET_GPR_U32(ctx, 31, 0x603118u);
    ctx->pc = 0x1014C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C0u, 0x603110u, 0x603118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603118u;
label_603118:
    // 0x603118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x603118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x60311c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x60311cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x603120: 0x3e00008  jr          $ra
label_603124:
    if (ctx->pc == 0x603124u) {
        ctx->pc = 0x603128u;
        goto label_fallthrough_0x603120;
    }
    ctx->pc = 0x603120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x603120:
    ctx->pc = 0x603128u;
    // 0x603128: 0x0  nop
    ctx->pc = 0x603128u;
    // NOP
    // 0x60312c: 0x0  nop
    ctx->pc = 0x60312cu;
    // NOP
    // 0x603130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x603130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x603134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x603134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x603138: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x603138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x60313c: 0x24844dd8  addiu       $a0, $a0, 0x4DD8
    ctx->pc = 0x60313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19928));
    // 0x603140: 0xc0495e0  jal         func_125780
    ctx->pc = 0x603140u;
    SET_GPR_U32(ctx, 31, 0x603148u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x603140u, 0x603148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603148u;
label_603148:
    // 0x603148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x603148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x60314c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x60314cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x603150: 0x3e00008  jr          $ra
    ctx->pc = 0x603150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x603158u;
    // 0x603158: 0x0  nop
    ctx->pc = 0x603158u;
    // NOP
    // 0x60315c: 0x0  nop
    ctx->pc = 0x60315cu;
    // NOP
    // 0x603160: 0xc780b6bc  lwc1        $f0, -0x4944($gp)
    ctx->pc = 0x603160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x603164: 0xe780c080  swc1        $f0, -0x3F80($gp)
    ctx->pc = 0x603164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294951040), bits); }
    // 0x603168: 0x3e00008  jr          $ra
    ctx->pc = 0x603168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x603168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x603170u;
    // 0x603170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x603170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x603174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x603174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x603178: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x603178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_60317c:
    // 0x60317c: 0x24847e70  addiu       $a0, $a0, 0x7E70
    ctx->pc = 0x60317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
label_603180:
    // 0x603180: 0xc048f2c  jal         func_123CB0
label_603184:
    if (ctx->pc == 0x603184u) {
        ctx->pc = 0x603188u;
        goto label_603188;
    }
    ctx->pc = 0x603180u;
    SET_GPR_U32(ctx, 31, 0x603188u);
    ctx->pc = 0x123CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CB0u, 0x603180u, 0x603188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x603188u;
label_603188:
    // 0x603188: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x603188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_60318c:
    // 0x60318c: 0x248481a0  addiu       $a0, $a0, -0x7E60
    ctx->pc = 0x60318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934944));
label_603190:
    // 0x603190: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x603190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_603194:
    // 0x603194: 0x24a55780  addiu       $a1, $a1, 0x5780
    ctx->pc = 0x603194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22400));
label_603198:
    // 0x603198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x603198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x60319c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x60319cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x6031a0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x6031a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x6031a4: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x6031A4u;
    SET_GPR_U32(ctx, 31, 0x6031ACu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x6031A4u, 0x6031ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x6031ACu;
label_6031ac:
    // 0x6031ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x6031acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x6031b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x6031b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x6031b4: 0x3e00008  jr          $ra
    ctx->pc = 0x6031B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6031B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x6031BCu;
    // 0x6031bc: 0x0  nop
    ctx->pc = 0x6031bcu;
    // NOP
    // 0x6031c0: 0x602f80  .word       0x00602F80                   # sll         $a1, $zero, 30 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
    // 0x6031c4: 0x602fb0  tge         $v1, $zero, 190
    ctx->pc = 0x6031c4u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6031c8: 0x603020  add         $a2, $v1, $zero
    ctx->pc = 0x6031c8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x6031cc: 0x603070  tge         $v1, $zero, 193
    ctx->pc = 0x6031ccu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6031d0: 0x6030a0  .word       0x006030A0                   # add         $a2, $v1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031d0u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x6031d4: 0x6030d0  .word       0x006030D0                   # mfhi        $a2 # 006000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x6031d8: 0x603100  .word       0x00603100                   # sll         $a2, $zero, 4 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
    // 0x6031dc: 0x603130  tge         $v1, $zero, 196
    ctx->pc = 0x6031dcu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6031e0: 0x603160  .word       0x00603160                   # add         $a2, $v1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031e0u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x6031e4: 0x603170  tge         $v1, $zero, 197
    ctx->pc = 0x6031e4u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6031e8: 0x0  nop
    ctx->pc = 0x6031e8u;
    // NOP
    // 0x6031ec: 0x0  nop
    ctx->pc = 0x6031ecu;
    // NOP
    // 0x6031f0: 0x0  nop
    ctx->pc = 0x6031f0u;
    // NOP
    // 0x6031f4: 0x0  nop
    ctx->pc = 0x6031f4u;
    // NOP
    // 0x6031f8: 0x100260  .word       0x00100260                   # add         $zero, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6031f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6031fc: 0x100740  sll         $zero, $s0, 29
    ctx->pc = 0x6031fcu;
    
    // 0x603200: 0x1007a0  .word       0x001007A0                   # add         $zero, $zero, $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603200u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x603204: 0x100820  add         $at, $zero, $s0
    ctx->pc = 0x603204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x603208: 0x100cb0  tge         $zero, $s0, 50
    ctx->pc = 0x603208u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x60320c: 0x100ef0  tge         $zero, $s0, 59
    ctx->pc = 0x60320cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x603210: 0x100fa0  .word       0x00100FA0                   # add         $at, $zero, $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603210u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x603214: 0x101060  .word       0x00101060                   # add         $v0, $zero, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x603218: 0x0  nop
    ctx->pc = 0x603218u;
    // NOP
    // 0x60321c: 0x0  nop
    ctx->pc = 0x60321cu;
    // NOP
    // 0x603220: 0x0  nop
    ctx->pc = 0x603220u;
    // NOP
    // 0x603224: 0x0  nop
    ctx->pc = 0x603224u;
    // NOP
    // 0x603228: 0x101300  sll         $v0, $s0, 12
    ctx->pc = 0x603228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x60322c: 0x101370  tge         $zero, $s0, 77
    ctx->pc = 0x60322cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x603230: 0x1016b0  tge         $zero, $s0, 90
    ctx->pc = 0x603230u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x603234: 0x101520  .word       0x00101520                   # add         $v0, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x603238: 0x1015d0  .word       0x001015D0                   # mfhi        $v0 # 001005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x60323c: 0x100ef0  tge         $zero, $s0, 59
    ctx->pc = 0x60323cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x603240: 0x1016e0  .word       0x001016E0                   # add         $v0, $zero, $s0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603240u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x603244: 0x101720  .word       0x00101720                   # add         $v0, $zero, $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x603248: 0x0  nop
    ctx->pc = 0x603248u;
    // NOP
    // 0x60324c: 0x0  nop
    ctx->pc = 0x60324cu;
    // NOP
    // 0x603250: 0x0  nop
    ctx->pc = 0x603250u;
    // NOP
    // 0x603254: 0x0  nop
    ctx->pc = 0x603254u;
    // NOP
    // 0x603258: 0x101df0  tge         $zero, $s0, 119
    ctx->pc = 0x603258u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x60325c: 0x102020  add         $a0, $zero, $s0
    ctx->pc = 0x60325cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x603260: 0x102300  sll         $a0, $s0, 12
    ctx->pc = 0x603260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x603264: 0x1024d0  .word       0x001024D0                   # mfhi        $a0 # 001004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603264u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x603268: 0x102500  sll         $a0, $s0, 20
    ctx->pc = 0x603268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    // 0x60326c: 0x0  nop
    ctx->pc = 0x60326cu;
    // NOP
    // 0x603270: 0x0  nop
    ctx->pc = 0x603270u;
    // NOP
    // 0x603274: 0x0  nop
    ctx->pc = 0x603274u;
    // NOP
    // 0x603278: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x603278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x60327c: 0x1028b0  tge         $zero, $s0, 162
    ctx->pc = 0x60327cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x603280: 0x0  nop
    ctx->pc = 0x603280u;
    // NOP
    // 0x603284: 0x0  nop
    ctx->pc = 0x603284u;
    // NOP
    // 0x603288: 0x102fa0  .word       0x00102FA0                   # add         $a1, $zero, $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603288u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x60328c: 0x103310  .word       0x00103310                   # mfhi        $a2 # 00100300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60328cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x603290: 0x103a10  .word       0x00103A10                   # mfhi        $a3 # 00100200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603290u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x603294: 0x103c90  .word       0x00103C90                   # mfhi        $a3 # 00100480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603294u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x603298: 0x103cc0  sll         $a3, $s0, 19
    ctx->pc = 0x603298u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 19));
    // 0x60329c: 0x102f10  .word       0x00102F10                   # mfhi        $a1 # 00100700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60329cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x6032a0: 0x103e20  .word       0x00103E20                   # add         $a3, $zero, $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6032a4: 0x214b50  .word       0x00214B50                   # mfhi        $t1 # 00210340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6032a8: 0x214b70  tge         $at, $at, 301
    ctx->pc = 0x6032a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6032ac: 0x214b90  .word       0x00214B90                   # mfhi        $t1 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032acu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6032b0: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6032b4: 0x1045a0  .word       0x001045A0                   # add         $t0, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6032b8: 0x1046a0  .word       0x001046A0                   # add         $t0, $zero, $s0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6032bc: 0x0  nop
    ctx->pc = 0x6032bcu;
    // NOP
    // 0x6032c0: 0x0  nop
    ctx->pc = 0x6032c0u;
    // NOP
    // 0x6032c4: 0x0  nop
    ctx->pc = 0x6032c4u;
    // NOP
    // 0x6032c8: 0x10ab60  .word       0x0010AB60                   # add         $s5, $zero, $s0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x6032cc: 0x10ab90  .word       0x0010AB90                   # mfhi        $s5 # 00100380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032ccu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x6032d0: 0x10af40  sll         $s5, $s0, 29
    ctx->pc = 0x6032d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 29));
    // 0x6032d4: 0x10afa0  .word       0x0010AFA0                   # add         $s5, $zero, $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x6032d8: 0x10afd0  .word       0x0010AFD0                   # mfhi        $s5 # 001007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032d8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x6032dc: 0x0  nop
    ctx->pc = 0x6032dcu;
    // NOP
    // 0x6032e0: 0x0  nop
    ctx->pc = 0x6032e0u;
    // NOP
    // 0x6032e4: 0x0  nop
    ctx->pc = 0x6032e4u;
    // NOP
    // 0x6032e8: 0x10b6e0  .word       0x0010B6E0                   # add         $s6, $zero, $s0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6032ec: 0x10b8b0  tge         $zero, $s0, 738
    ctx->pc = 0x6032ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x6032f0: 0x10bac0  sll         $s7, $s0, 11
    ctx->pc = 0x6032f0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x6032f4: 0x10c4e0  .word       0x0010C4E0                   # add         $t8, $zero, $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x6032f8: 0x10c5d0  .word       0x0010C5D0                   # mfhi        $t8 # 001005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032f8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x6032fc: 0x10b660  .word       0x0010B660                   # add         $s6, $zero, $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6032fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603300: 0x233570  tge         $at, $v1, 213
    ctx->pc = 0x603300u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603304: 0x10d190  .word       0x0010D190                   # mfhi        $k0 # 00100180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603304u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x603308: 0x10cb40  sll         $t9, $s0, 13
    ctx->pc = 0x603308u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 16), 13));
    // 0x60330c: 0x0  nop
    ctx->pc = 0x60330cu;
    // NOP
    // 0x603310: 0x0  nop
    ctx->pc = 0x603310u;
    // NOP
    // 0x603314: 0x0  nop
    ctx->pc = 0x603314u;
    // NOP
    // 0x603318: 0x10e430  tge         $zero, $s0, 912
    ctx->pc = 0x603318u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_60331c:
    // 0x60331c: 0x10e460  .word       0x0010E460                   # add         $gp, $zero, $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60331cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x603320: 0x10ea60  .word       0x0010EA60                   # add         $sp, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603320u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x603324: 0x10eac0  sll         $sp, $s0, 11
    ctx->pc = 0x603324u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x603328: 0x10eaf0  tge         $zero, $s0, 939
    ctx->pc = 0x603328u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x60332c: 0x0  nop
    ctx->pc = 0x60332cu;
    // NOP
    // 0x603330: 0x0  nop
    ctx->pc = 0x603330u;
    // NOP
    // 0x603334: 0x0  nop
    ctx->pc = 0x603334u;
    // NOP
    // 0x603338: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603338u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60333c: 0x113c30  tge         $zero, $s1, 240
    ctx->pc = 0x60333cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603340: 0x113f50  .word       0x00113F50                   # mfhi        $a3 # 00110740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603340u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x603344: 0x1145e0  .word       0x001145E0                   # add         $t0, $zero, $s1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x603348: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603348u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60334c: 0x0  nop
    ctx->pc = 0x60334cu;
    // NOP
    // 0x603350: 0x0  nop
    ctx->pc = 0x603350u;
    // NOP
    // 0x603354: 0x0  nop
    ctx->pc = 0x603354u;
    // NOP
    // 0x603358: 0x118770  tge         $zero, $s1, 541
    ctx->pc = 0x603358u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x60335c: 0x1187c0  sll         $s0, $s1, 31
    ctx->pc = 0x60335cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 31));
    // 0x603360: 0x1187f0  tge         $zero, $s1, 543
    ctx->pc = 0x603360u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603364: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603364u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603368: 0x118830  tge         $zero, $s1, 544
    ctx->pc = 0x603368u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x60336c: 0x0  nop
    ctx->pc = 0x60336cu;
    // NOP
    // 0x603370: 0x0  nop
    ctx->pc = 0x603370u;
    // NOP
    // 0x603374: 0x0  nop
    ctx->pc = 0x603374u;
    // NOP
    // 0x603378: 0x119280  sll         $s2, $s1, 10
    ctx->pc = 0x603378u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 10));
    // 0x60337c: 0x1194b0  tge         $zero, $s1, 594
    ctx->pc = 0x60337cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603380: 0x1197a0  .word       0x001197A0                   # add         $s2, $zero, $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603380u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x603384: 0x119a00  sll         $s3, $s1, 8
    ctx->pc = 0x603384u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x603388: 0x119a30  tge         $zero, $s1, 616
    ctx->pc = 0x603388u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x60338c: 0x119200  sll         $s2, $s1, 8
    ctx->pc = 0x60338cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x603390: 0x119aa0  .word       0x00119AA0                   # add         $s3, $zero, $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603390u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x603394: 0x214b50  .word       0x00214B50                   # mfhi        $t1 # 00210340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603394u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x603398: 0x214b70  tge         $at, $at, 301
    ctx->pc = 0x603398u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x60339c: 0x214b90  .word       0x00214B90                   # mfhi        $t1 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60339cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6033a0: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6033a4: 0x214be0  .word       0x00214BE0                   # add         $t1, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6033a8: 0x214bf0  tge         $at, $at, 303
    ctx->pc = 0x6033a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6033ac: 0x0  nop
    ctx->pc = 0x6033acu;
    // NOP
    // 0x6033b0: 0x0  nop
    ctx->pc = 0x6033b0u;
    // NOP
    // 0x6033b4: 0x0  nop
    ctx->pc = 0x6033b4u;
    // NOP
    // 0x6033b8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6033b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6033bc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6033c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6033c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6033c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6033c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6033cc: 0x11c220  .word       0x0011C220                   # add         $t8, $zero, $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x6033d0: 0x23b6c0  .word       0x0023B6C0                   # sll         $s6, $v1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033d0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
    // 0x6033d4: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6033d8: 0x0  nop
    ctx->pc = 0x6033d8u;
    // NOP
    // 0x6033dc: 0x0  nop
    ctx->pc = 0x6033dcu;
    // NOP
    // 0x6033e0: 0x0  nop
    ctx->pc = 0x6033e0u;
    // NOP
    // 0x6033e4: 0x0  nop
    ctx->pc = 0x6033e4u;
    // NOP
    // 0x6033e8: 0x11c340  sll         $t8, $s1, 13
    ctx->pc = 0x6033e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), 13));
    // 0x6033ec: 0x11c380  sll         $t8, $s1, 14
    ctx->pc = 0x6033ecu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
    // 0x6033f0: 0x11c480  sll         $t8, $s1, 18
    ctx->pc = 0x6033f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), 18));
    // 0x6033f4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6033f8: 0x11ca20  .word       0x0011CA20                   # add         $t9, $zero, $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x6033fc: 0x23b8a0  .word       0x0023B8A0                   # add         $s7, $at, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6033fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x603400: 0x23bbb0  tge         $at, $v1, 750
    ctx->pc = 0x603400u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603404: 0x23bc30  tge         $at, $v1, 752
    ctx->pc = 0x603404u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603408: 0x0  nop
    ctx->pc = 0x603408u;
    // NOP
    // 0x60340c: 0x0  nop
    ctx->pc = 0x60340cu;
    // NOP
    // 0x603410: 0x0  nop
    ctx->pc = 0x603410u;
    // NOP
    // 0x603414: 0x0  nop
    ctx->pc = 0x603414u;
    // NOP
    // 0x603418: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603418u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60341c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60341cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603420: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603420u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603424: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603424u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603428: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603428u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60342c: 0x11ce50  .word       0x0011CE50                   # mfhi        $t9 # 00110640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60342cu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_603430:
    // 0x603430: 0x11cd50  .word       0x0011CD50                   # mfhi        $t9 # 00110540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603430u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_603434:
    // 0x603434: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603434u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_603438:
    // 0x603438: 0x0  nop
    ctx->pc = 0x603438u;
    // NOP
label_60343c:
    // 0x60343c: 0x0  nop
    ctx->pc = 0x60343cu;
    // NOP
    // 0x603440: 0x0  nop
    ctx->pc = 0x603440u;
    // NOP
    // 0x603444: 0x0  nop
    ctx->pc = 0x603444u;
    // NOP
    // 0x603448: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603448u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60344c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60344cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603450: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603450u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603454: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603454u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603458: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603458u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60345c: 0x11d040  sll         $k0, $s1, 1
    ctx->pc = 0x60345cu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x603460: 0x11cf20  .word       0x0011CF20                   # add         $t9, $zero, $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603460u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x603464: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603464u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603468: 0x0  nop
    ctx->pc = 0x603468u;
    // NOP
    // 0x60346c: 0x0  nop
    ctx->pc = 0x60346cu;
    // NOP
    // 0x603470: 0x0  nop
    ctx->pc = 0x603470u;
    // NOP
    // 0x603474: 0x0  nop
    ctx->pc = 0x603474u;
    // NOP
    // 0x603478: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603478u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60347c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60347cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603480: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603480u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603484: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603484u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603488: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603488u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60348c: 0x11d110  .word       0x0011D110                   # mfhi        $k0 # 00110100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60348cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x603490: 0x11d180  sll         $k0, $s1, 6
    ctx->pc = 0x603490u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x603494: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603494u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603498: 0x0  nop
    ctx->pc = 0x603498u;
    // NOP
    // 0x60349c: 0x0  nop
    ctx->pc = 0x60349cu;
    // NOP
    // 0x6034a0: 0x0  nop
    ctx->pc = 0x6034a0u;
    // NOP
    // 0x6034a4: 0x0  nop
    ctx->pc = 0x6034a4u;
    // NOP
    // 0x6034a8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6034a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6034ac: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6034b0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6034b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6034b4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6034b8:
    // 0x6034b8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6034bc: 0x11d3d0  .word       0x0011D3D0                   # mfhi        $k0 # 001103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034bcu;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x6034c0: 0x11d440  sll         $k0, $s1, 17
    ctx->pc = 0x6034c0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 17), 17));
    // 0x6034c4: 0x11d700  sll         $k0, $s1, 28
    ctx->pc = 0x6034c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 17), 28));
    // 0x6034c8: 0x0  nop
    ctx->pc = 0x6034c8u;
    // NOP
    // 0x6034cc: 0x0  nop
    ctx->pc = 0x6034ccu;
    // NOP
    // 0x6034d0: 0x0  nop
    ctx->pc = 0x6034d0u;
    // NOP
    // 0x6034d4: 0x0  nop
    ctx->pc = 0x6034d4u;
    // NOP
    // 0x6034d8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6034d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6034dc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6034e0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6034e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6034e4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6034e8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6034ec: 0x11e660  .word       0x0011E660                   # add         $gp, $zero, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x6034f0: 0x11e2f0  tge         $zero, $s1, 907
    ctx->pc = 0x6034f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x6034f4: 0x11e610  .word       0x0011E610                   # mfhi        $gp # 00110600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6034f4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x6034f8: 0x0  nop
    ctx->pc = 0x6034f8u;
    // NOP
    // 0x6034fc: 0x0  nop
    ctx->pc = 0x6034fcu;
    // NOP
    // 0x603500: 0x0  nop
    ctx->pc = 0x603500u;
    // NOP
    // 0x603504: 0x0  nop
    ctx->pc = 0x603504u;
    // NOP
    // 0x603508: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603508u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60350c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60350cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603510: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603510u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603514: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603514u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603518: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603518u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60351c: 0x11e730  tge         $zero, $s1, 924
    ctx->pc = 0x60351cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603520: 0x11e7a0  .word       0x0011E7A0                   # add         $gp, $zero, $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603520u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x603524: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603524u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603528: 0x0  nop
    ctx->pc = 0x603528u;
    // NOP
    // 0x60352c: 0x0  nop
    ctx->pc = 0x60352cu;
    // NOP
    // 0x603530: 0x0  nop
    ctx->pc = 0x603530u;
    // NOP
    // 0x603534: 0x0  nop
    ctx->pc = 0x603534u;
    // NOP
    // 0x603538: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603538u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60353c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60353cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603540: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603540u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603544: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603544u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603548: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603548u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60354c: 0x11eb30  tge         $zero, $s1, 940
    ctx->pc = 0x60354cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603550: 0x11ea20  .word       0x0011EA20                   # add         $sp, $zero, $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603550u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x603554: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603554u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603558: 0x0  nop
    ctx->pc = 0x603558u;
    // NOP
    // 0x60355c: 0x0  nop
    ctx->pc = 0x60355cu;
    // NOP
    // 0x603560: 0x0  nop
    ctx->pc = 0x603560u;
    // NOP
    // 0x603564: 0x0  nop
    ctx->pc = 0x603564u;
    // NOP
    // 0x603568: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603568u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60356c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60356cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603570: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603570u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603574: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603574u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603578: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603578u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60357c: 0x11ec00  sll         $sp, $s1, 16
    ctx->pc = 0x60357cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x603580: 0x11ec70  tge         $zero, $s1, 945
    ctx->pc = 0x603580u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x603584: 0x11fb00  sll         $ra, $s1, 12
    ctx->pc = 0x603584u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 17), 12));
    // 0x603588: 0x0  nop
    ctx->pc = 0x603588u;
    // NOP
    // 0x60358c: 0x0  nop
    ctx->pc = 0x60358cu;
    // NOP
    // 0x603590: 0x0  nop
    ctx->pc = 0x603590u;
    // NOP
    // 0x603594: 0x0  nop
    ctx->pc = 0x603594u;
    // NOP
    // 0x603598: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603598u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60359c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60359cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6035a0:
    // 0x6035a0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6035a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6035a4:
    // 0x6035a4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6035a8:
    // 0x6035a8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6035ac:
    // 0x6035ac: 0x120710  .word       0x00120710                   # mfhi        $zero # 00120700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035acu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_6035b0:
    // 0x6035b0: 0x120780  sll         $zero, $s2, 30
    ctx->pc = 0x6035b0u;
    
label_6035b4:
    // 0x6035b4: 0x120be0  .word       0x00120BE0                   # add         $at, $zero, $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_6035b8:
    // 0x6035b8: 0x0  nop
    ctx->pc = 0x6035b8u;
    // NOP
label_6035bc:
    // 0x6035bc: 0x0  nop
    ctx->pc = 0x6035bcu;
    // NOP
    // 0x6035c0: 0x0  nop
    ctx->pc = 0x6035c0u;
    // NOP
    // 0x6035c4: 0x0  nop
    ctx->pc = 0x6035c4u;
    // NOP
    // 0x6035c8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6035c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6035cc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6035d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6035d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6035d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6035d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6035dc: 0x120c70  tge         $zero, $s2, 49
    ctx->pc = 0x6035dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x6035e0: 0x120ce0  .word       0x00120CE0                   # add         $at, $zero, $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x6035e4: 0x121460  .word       0x00121460                   # add         $v0, $zero, $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6035e8: 0x0  nop
    ctx->pc = 0x6035e8u;
    // NOP
    // 0x6035ec: 0x0  nop
    ctx->pc = 0x6035ecu;
    // NOP
    // 0x6035f0: 0x0  nop
    ctx->pc = 0x6035f0u;
    // NOP
    // 0x6035f4: 0x0  nop
    ctx->pc = 0x6035f4u;
    // NOP
    // 0x6035f8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6035f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6035fc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6035fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603600: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603600u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603604: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603604u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603608: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603608u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60360c: 0x121540  sll         $v0, $s2, 21
    ctx->pc = 0x60360cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 21));
    // 0x603610: 0x1215b0  tge         $zero, $s2, 86
    ctx->pc = 0x603610u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x603614: 0x121630  tge         $zero, $s2, 88
    ctx->pc = 0x603614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_603618:
    // 0x603618: 0x0  nop
    ctx->pc = 0x603618u;
    // NOP
    // 0x60361c: 0x0  nop
    ctx->pc = 0x60361cu;
    // NOP
    // 0x603620: 0x0  nop
    ctx->pc = 0x603620u;
    // NOP
    // 0x603624: 0x0  nop
    ctx->pc = 0x603624u;
    // NOP
    // 0x603628: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603628u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60362c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60362cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603630: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603630u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603634: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603634u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603638: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603638u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60363c: 0x1218e0  .word       0x001218E0                   # add         $v1, $zero, $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60363cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x603640: 0x121950  .word       0x00121950                   # mfhi        $v1 # 00120140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603640u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x603644: 0x121b20  .word       0x00121B20                   # add         $v1, $zero, $s2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x603648: 0x0  nop
    ctx->pc = 0x603648u;
    // NOP
    // 0x60364c: 0x0  nop
    ctx->pc = 0x60364cu;
    // NOP
    // 0x603650: 0x0  nop
    ctx->pc = 0x603650u;
    // NOP
    // 0x603654: 0x0  nop
    ctx->pc = 0x603654u;
    // NOP
    // 0x603658: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603658u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60365c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60365cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603660: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603660u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603664: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603664u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603668: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603668u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60366c: 0x121bc0  sll         $v1, $s2, 15
    ctx->pc = 0x60366cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x603670: 0x121c50  .word       0x00121C50                   # mfhi        $v1 # 00120440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603670u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x603674: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603674u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603678: 0x0  nop
    ctx->pc = 0x603678u;
    // NOP
    // 0x60367c: 0x0  nop
    ctx->pc = 0x60367cu;
    // NOP
    // 0x603680: 0x0  nop
    ctx->pc = 0x603680u;
    // NOP
    // 0x603684: 0x0  nop
    ctx->pc = 0x603684u;
    // NOP
    // 0x603688: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603688u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60368c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60368cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603690: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603690u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603694: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603694u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603698: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603698u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60369c: 0x12aa80  sll         $s5, $s2, 10
    ctx->pc = 0x60369cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x6036a0: 0x1236b0  tge         $zero, $s2, 218
    ctx->pc = 0x6036a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x6036a4: 0x123d40  sll         $a3, $s2, 21
    ctx->pc = 0x6036a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 21));
    // 0x6036a8: 0x0  nop
    ctx->pc = 0x6036a8u;
    // NOP
    // 0x6036ac: 0x0  nop
    ctx->pc = 0x6036acu;
    // NOP
    // 0x6036b0: 0x0  nop
    ctx->pc = 0x6036b0u;
    // NOP
    // 0x6036b4: 0x0  nop
    ctx->pc = 0x6036b4u;
    // NOP
    // 0x6036b8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6036b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6036bc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6036c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6036c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6036c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6036c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6036cc: 0x12ad40  sll         $s5, $s2, 21
    ctx->pc = 0x6036ccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 21));
    // 0x6036d0: 0x12ad00  sll         $s5, $s2, 20
    ctx->pc = 0x6036d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x6036d4: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6036d8: 0x0  nop
    ctx->pc = 0x6036d8u;
    // NOP
    // 0x6036dc: 0x0  nop
    ctx->pc = 0x6036dcu;
    // NOP
    // 0x6036e0: 0x0  nop
    ctx->pc = 0x6036e0u;
    // NOP
    // 0x6036e4: 0x0  nop
    ctx->pc = 0x6036e4u;
    // NOP
    // 0x6036e8: 0x12b5d0  .word       0x0012B5D0                   # mfhi        $s6 # 001205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036e8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x6036ec: 0x12b620  .word       0x0012B620                   # add         $s6, $zero, $s2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6036f0: 0x12b670  tge         $zero, $s2, 729
    ctx->pc = 0x6036f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x6036f4: 0x12b6c0  sll         $s6, $s2, 27
    ctx->pc = 0x6036f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 27));
    // 0x6036f8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6036f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6036fc: 0x0  nop
    ctx->pc = 0x6036fcu;
    // NOP
    // 0x603700: 0x0  nop
    ctx->pc = 0x603700u;
    // NOP
    // 0x603704: 0x0  nop
    ctx->pc = 0x603704u;
    // NOP
    // 0x603708: 0x133500  sll         $a2, $s3, 20
    ctx->pc = 0x603708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x60370c: 0x133550  .word       0x00133550                   # mfhi        $a2 # 00130540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60370cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x603710: 0x1323f0  tge         $zero, $s3, 143
    ctx->pc = 0x603710u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x603714: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603714u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603718: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603718u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60371c: 0x132380  sll         $a0, $s3, 14
    ctx->pc = 0x60371cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
    // 0x603720: 0x1328e0  .word       0x001328E0                   # add         $a1, $zero, $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x603724: 0x0  nop
    ctx->pc = 0x603724u;
    // NOP
    // 0x603728: 0x0  nop
    ctx->pc = 0x603728u;
    // NOP
    // 0x60372c: 0x0  nop
    ctx->pc = 0x60372cu;
    // NOP
    // 0x603730: 0x0  nop
    ctx->pc = 0x603730u;
    // NOP
    // 0x603734: 0x0  nop
    ctx->pc = 0x603734u;
    // NOP
    // 0x603738: 0x1363e0  .word       0x001363E0                   # add         $t4, $zero, $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x60373c: 0x136420  .word       0x00136420                   # add         $t4, $zero, $s3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60373cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603740: 0x136460  .word       0x00136460                   # add         $t4, $zero, $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603740u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603744: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603744u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603748: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603748u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60374c: 0x136370  tge         $zero, $s3, 397
    ctx->pc = 0x60374cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x603750: 0x1364b0  tge         $zero, $s3, 402
    ctx->pc = 0x603750u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x603754: 0x0  nop
    ctx->pc = 0x603754u;
    // NOP
    // 0x603758: 0x0  nop
    ctx->pc = 0x603758u;
    // NOP
    // 0x60375c: 0x0  nop
    ctx->pc = 0x60375cu;
    // NOP
    // 0x603760: 0x0  nop
    ctx->pc = 0x603760u;
    // NOP
    // 0x603764: 0x0  nop
    ctx->pc = 0x603764u;
    // NOP
    // 0x603768: 0x139bf0  tge         $zero, $s3, 623
    ctx->pc = 0x603768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x60376c: 0x13a000  sll         $s4, $s3, 0
    ctx->pc = 0x60376cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
    // 0x603770: 0x13a260  .word       0x0013A260                   # add         $s4, $zero, $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603770u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x603774: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603774u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603778: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603778u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60377c: 0x138530  tge         $zero, $s3, 532
    ctx->pc = 0x60377cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x603780: 0x138600  sll         $s0, $s3, 24
    ctx->pc = 0x603780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x603784: 0x0  nop
    ctx->pc = 0x603784u;
    // NOP
    // 0x603788: 0x0  nop
    ctx->pc = 0x603788u;
    // NOP
    // 0x60378c: 0x0  nop
    ctx->pc = 0x60378cu;
    // NOP
    // 0x603790: 0x0  nop
    ctx->pc = 0x603790u;
    // NOP
    // 0x603794: 0x0  nop
    ctx->pc = 0x603794u;
    // NOP
    // 0x603798: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x603798u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60379c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60379cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6037a0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6037a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6037a4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6037a8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6037ac: 0x137d60  .word       0x00137D60                   # add         $t7, $zero, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x6037b0: 0x137d40  sll         $t7, $s3, 21
    ctx->pc = 0x6037b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 21));
    // 0x6037b4: 0x0  nop
    ctx->pc = 0x6037b4u;
    // NOP
    // 0x6037b8: 0x0  nop
    ctx->pc = 0x6037b8u;
    // NOP
    // 0x6037bc: 0x0  nop
    ctx->pc = 0x6037bcu;
    // NOP
    // 0x6037c0: 0x0  nop
    ctx->pc = 0x6037c0u;
    // NOP
    // 0x6037c4: 0x0  nop
    ctx->pc = 0x6037c4u;
    // NOP
    // 0x6037c8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6037c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6037cc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6037d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6037d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6037d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6037d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6037d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6037dc: 0x0  nop
    ctx->pc = 0x6037dcu;
    // NOP
    // 0x6037e0: 0x0  nop
    ctx->pc = 0x6037e0u;
    // NOP
    // 0x6037e4: 0x0  nop
    ctx->pc = 0x6037e4u;
    // NOP
    // 0x6037e8: 0x0  nop
    ctx->pc = 0x6037e8u;
    // NOP
    // 0x6037ec: 0x0  nop
    ctx->pc = 0x6037ecu;
    // NOP
    // 0x6037f0: 0x0  nop
    ctx->pc = 0x6037f0u;
    // NOP
    // 0x6037f4: 0x0  nop
    ctx->pc = 0x6037f4u;
    // NOP
    // 0x6037f8: 0x13d900  sll         $k1, $s3, 4
    ctx->pc = 0x6037f8u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x6037fc: 0x13ddc0  sll         $k1, $s3, 23
    ctx->pc = 0x6037fcu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 19), 23));
    // 0x603800: 0x13e230  tge         $zero, $s3, 904
    ctx->pc = 0x603800u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x603804: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603804u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603808: 0x13e420  .word       0x0013E420                   # add         $gp, $zero, $s3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x60380c: 0x0  nop
    ctx->pc = 0x60380cu;
    // NOP
    // 0x603810: 0x0  nop
    ctx->pc = 0x603810u;
    // NOP
    // 0x603814: 0x0  nop
    ctx->pc = 0x603814u;
    // NOP
    // 0x603818: 0x13f360  .word       0x0013F360                   # add         $fp, $zero, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x60381c: 0x13f3a0  .word       0x0013F3A0                   # add         $fp, $zero, $s3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60381cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x603820: 0x13f3e0  .word       0x0013F3E0                   # add         $fp, $zero, $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603820u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x603824: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603824u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603828: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603828u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60382c: 0x13f2d0  .word       0x0013F2D0                   # mfhi        $fp # 001302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60382cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x603830: 0x13f420  .word       0x0013F420                   # add         $fp, $zero, $s3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603830u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x603834: 0x0  nop
    ctx->pc = 0x603834u;
    // NOP
    // 0x603838: 0x0  nop
    ctx->pc = 0x603838u;
    // NOP
    // 0x60383c: 0x0  nop
    ctx->pc = 0x60383cu;
    // NOP
    // 0x603840: 0x0  nop
    ctx->pc = 0x603840u;
    // NOP
label_603844:
    // 0x603844: 0x0  nop
    ctx->pc = 0x603844u;
    // NOP
label_603848:
    // 0x603848: 0x141bc0  sll         $v1, $s4, 15
    ctx->pc = 0x603848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 15));
label_60384c:
    // 0x60384c: 0x141c00  sll         $v1, $s4, 16
    ctx->pc = 0x60384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_603850:
    // 0x603850: 0x141c40  sll         $v1, $s4, 17
    ctx->pc = 0x603850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 17));
label_603854:
    // 0x603854: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603854u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_603858:
    // 0x603858: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603858u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60385c:
    // 0x60385c: 0x141b30  tge         $zero, $s4, 108
    ctx->pc = 0x60385cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_603860:
    // 0x603860: 0x141c80  sll         $v1, $s4, 18
    ctx->pc = 0x603860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 18));
    // 0x603864: 0x0  nop
    ctx->pc = 0x603864u;
    // NOP
    // 0x603868: 0x0  nop
    ctx->pc = 0x603868u;
    // NOP
    // 0x60386c: 0x0  nop
    ctx->pc = 0x60386cu;
    // NOP
    // 0x603870: 0x0  nop
    ctx->pc = 0x603870u;
    // NOP
    // 0x603874: 0x0  nop
    ctx->pc = 0x603874u;
    // NOP
    // 0x603878: 0x142540  sll         $a0, $s4, 21
    ctx->pc = 0x603878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 21));
    // 0x60387c: 0x142770  tge         $zero, $s4, 157
    ctx->pc = 0x60387cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603880: 0x142a30  tge         $zero, $s4, 168
    ctx->pc = 0x603880u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603884: 0x142af0  tge         $zero, $s4, 171
    ctx->pc = 0x603884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603888: 0x142b20  .word       0x00142B20                   # add         $a1, $zero, $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x60388c: 0x0  nop
    ctx->pc = 0x60388cu;
    // NOP
    // 0x603890: 0x0  nop
    ctx->pc = 0x603890u;
    // NOP
    // 0x603894: 0x0  nop
    ctx->pc = 0x603894u;
    // NOP
    // 0x603898: 0x145110  .word       0x00145110                   # mfhi        $t2 # 00140100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603898u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x60389c: 0x0  nop
    ctx->pc = 0x60389cu;
    // NOP
    // 0x6038a0: 0x0  nop
    ctx->pc = 0x6038a0u;
    // NOP
    // 0x6038a4: 0x0  nop
    ctx->pc = 0x6038a4u;
    // NOP
    // 0x6038a8: 0x1450a0  .word       0x001450A0                   # add         $t2, $zero, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x6038ac: 0x0  nop
    ctx->pc = 0x6038acu;
    // NOP
    // 0x6038b0: 0x0  nop
    ctx->pc = 0x6038b0u;
    // NOP
    // 0x6038b4: 0x0  nop
    ctx->pc = 0x6038b4u;
    // NOP
    // 0x6038b8: 0x143d50  .word       0x00143D50                   # mfhi        $a3 # 00140540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038b8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6038bc: 0x143e20  .word       0x00143E20                   # add         $a3, $zero, $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6038c0: 0x143f00  sll         $a3, $s4, 28
    ctx->pc = 0x6038c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 28));
    // 0x6038c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6038c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6038cc: 0x143ce0  .word       0x00143CE0                   # add         $a3, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6038d0: 0x144000  sll         $t0, $s4, 0
    ctx->pc = 0x6038d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
    // 0x6038d4: 0x0  nop
    ctx->pc = 0x6038d4u;
    // NOP
    // 0x6038d8: 0x0  nop
    ctx->pc = 0x6038d8u;
    // NOP
    // 0x6038dc: 0x0  nop
    ctx->pc = 0x6038dcu;
    // NOP
    // 0x6038e0: 0x0  nop
    ctx->pc = 0x6038e0u;
    // NOP
    // 0x6038e4: 0x0  nop
    ctx->pc = 0x6038e4u;
    // NOP
    // 0x6038e8: 0x149300  sll         $s2, $s4, 12
    ctx->pc = 0x6038e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x6038ec: 0x149380  sll         $s2, $s4, 14
    ctx->pc = 0x6038ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 14));
    // 0x6038f0: 0x149460  .word       0x00149460                   # add         $s2, $zero, $s4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x6038f4: 0x1494d0  .word       0x001494D0                   # mfhi        $s2 # 001404C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038f4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x6038f8: 0x149510  .word       0x00149510                   # mfhi        $s2 # 00140500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x6038fc: 0x149290  .word       0x00149290                   # mfhi        $s2 # 00140280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6038fcu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x603900: 0x149550  .word       0x00149550                   # mfhi        $s2 # 00140540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603900u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x603904: 0x1495b0  tge         $zero, $s4, 598
    ctx->pc = 0x603904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603908: 0x1495d0  .word       0x001495D0                   # mfhi        $s2 # 001405C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603908u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x60390c: 0x1495f0  tge         $zero, $s4, 599
    ctx->pc = 0x60390cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603910: 0x149620  .word       0x00149620                   # add         $s2, $zero, $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603910u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x603914: 0x214be0  .word       0x00214BE0                   # add         $t1, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603914u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x603918: 0x214bf0  tge         $at, $at, 303
    ctx->pc = 0x603918u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x60391c: 0x0  nop
    ctx->pc = 0x60391cu;
    // NOP
    // 0x603920: 0x0  nop
    ctx->pc = 0x603920u;
    // NOP
label_603924:
    // 0x603924: 0x0  nop
    ctx->pc = 0x603924u;
    // NOP
    // 0x603928: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603928u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x60392c: 0x14bac0  sll         $s7, $s4, 11
    ctx->pc = 0x60392cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
    // 0x603930: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x603930u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x603934: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603934u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603938: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603938u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60393c: 0x14b980  sll         $s7, $s4, 6
    ctx->pc = 0x60393cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x603940: 0x14bb90  .word       0x0014BB90                   # mfhi        $s7 # 00140380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603940u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x603944: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603944u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x603948: 0x2b5cc0  .word       0x002B5CC0                   # sll         $t3, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603948u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
    // 0x60394c: 0x2b5d10  .word       0x002B5D10                   # mfhi        $t3 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60394cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x603950: 0x2b5ef0  tge         $at, $t3, 379
    ctx->pc = 0x603950u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x603954: 0x2b60d0  .word       0x002B60D0                   # mfhi        $t4 # 002B00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603954u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603958: 0x2b62b0  tge         $at, $t3, 394
    ctx->pc = 0x603958u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x60395c: 0x2b6490  .word       0x002B6490                   # mfhi        $t4 # 002B0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60395cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603960: 0x2b64a0  .word       0x002B64A0                   # add         $t4, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603960u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603964: 0x2b64b0  tge         $at, $t3, 402
    ctx->pc = 0x603964u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x603968: 0x2b64c0  .word       0x002B64C0                   # sll         $t4, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603968u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
    // 0x60396c: 0x14d640  sll         $k0, $s4, 25
    ctx->pc = 0x60396cu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 20), 25));
    // 0x603970: 0x14d6a0  .word       0x0014D6A0                   # add         $k0, $zero, $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x603974: 0x14d6f0  tge         $zero, $s4, 859
    ctx->pc = 0x603974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x603978: 0x14d920  .word       0x0014D920                   # add         $k1, $zero, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
    // 0x60397c: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60397cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603980: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603980u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603984: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x603984u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x603988: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603988u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
    // 0x60398c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60398cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603990: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603990u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603994: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x603994u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x603998: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603998u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
    // 0x60399c: 0x14c0f0  tge         $zero, $s4, 771
    ctx->pc = 0x60399cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x6039a0: 0x14bfc0  sll         $s7, $s4, 31
    ctx->pc = 0x6039a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 31));
    // 0x6039a4: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6039a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x6039a8: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x6039a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6039ac: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6039acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x6039b0: 0x14bbc0  sll         $s7, $s4, 15
    ctx->pc = 0x6039b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 15));
    // 0x6039b4: 0x14bc00  sll         $s7, $s4, 16
    ctx->pc = 0x6039b4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x6039b8: 0x0  nop
    ctx->pc = 0x6039b8u;
    // NOP
    // 0x6039bc: 0x0  nop
    ctx->pc = 0x6039bcu;
    // NOP
    // 0x6039c0: 0x0  nop
    ctx->pc = 0x6039c0u;
    // NOP
label_6039c4:
    // 0x6039c4: 0x0  nop
    ctx->pc = 0x6039c4u;
    // NOP
label_6039c8:
    // 0x6039c8: 0x153cf0  tge         $zero, $s5, 243
    ctx->pc = 0x6039c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_6039cc:
    // 0x6039cc: 0x153d30  tge         $zero, $s5, 244
    ctx->pc = 0x6039ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_6039d0:
    // 0x6039d0: 0x1540c0  sll         $t0, $s5, 3
    ctx->pc = 0x6039d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_6039d4:
    // 0x6039d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6039d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6039d8:
    // 0x6039d8: 0x154e80  sll         $t1, $s5, 26
    ctx->pc = 0x6039d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 21), 26));
label_6039dc:
    // 0x6039dc: 0x153c60  .word       0x00153C60                   # add         $a3, $zero, $s5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6039dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_6039e0:
    // 0x6039e0: 0x155240  sll         $t2, $s5, 9
    ctx->pc = 0x6039e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x6039e4: 0x154300  sll         $t0, $s5, 12
    ctx->pc = 0x6039e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 12));
    // 0x6039e8: 0x0  nop
    ctx->pc = 0x6039e8u;
    // NOP
    // 0x6039ec: 0x0  nop
    ctx->pc = 0x6039ecu;
    // NOP
    // 0x6039f0: 0x0  nop
    ctx->pc = 0x6039f0u;
    // NOP
    // 0x6039f4: 0x0  nop
    ctx->pc = 0x6039f4u;
    // NOP
    // 0x6039f8: 0x1565d0  .word       0x001565D0                   # mfhi        $t4 # 001505C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6039f8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x6039fc: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x6039fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a00: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603a00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a04: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603a08: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603a08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a0c: 0x156540  sll         $t4, $s5, 21
    ctx->pc = 0x603a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603a10: 0x1569e0  .word       0x001569E0                   # add         $t5, $zero, $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x603a14: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x603a18: 0x156cf0  tge         $zero, $s5, 435
    ctx->pc = 0x603a18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a1c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603a1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a20: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603a20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603a24: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a28: 0x0  nop
    ctx->pc = 0x603a28u;
    // NOP
    // 0x603a2c: 0x0  nop
    ctx->pc = 0x603a2cu;
    // NOP
    // 0x603a30: 0x0  nop
    ctx->pc = 0x603a30u;
    // NOP
    // 0x603a34: 0x0  nop
    ctx->pc = 0x603a34u;
    // NOP
    // 0x603a38: 0x159a50  .word       0x00159A50                   # mfhi        $s3 # 00150240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a38u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x603a3c: 0x159e10  .word       0x00159E10                   # mfhi        $s3 # 00150600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a3cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x603a40: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603a40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a44: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a44u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603a48: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603a48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a4c: 0x1599c0  sll         $s3, $s5, 7
    ctx->pc = 0x603a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x603a50: 0x15b140  sll         $s6, $s5, 5
    ctx->pc = 0x603a50u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x603a54: 0x159e50  .word       0x00159E50                   # mfhi        $s3 # 00150640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x603a58: 0x159e80  sll         $s3, $s5, 26
    ctx->pc = 0x603a58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 26));
    // 0x603a5c: 0x15b210  .word       0x0015B210                   # mfhi        $s6 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a5cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x603a60: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603a60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603a64: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a68: 0x0  nop
    ctx->pc = 0x603a68u;
    // NOP
    // 0x603a6c: 0x0  nop
    ctx->pc = 0x603a6cu;
    // NOP
    // 0x603a70: 0x0  nop
    ctx->pc = 0x603a70u;
    // NOP
    // 0x603a74: 0x0  nop
    ctx->pc = 0x603a74u;
    // NOP
    // 0x603a78: 0x15c200  sll         $t8, $s5, 8
    ctx->pc = 0x603a78u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
    // 0x603a7c: 0x15c790  .word       0x0015C790                   # mfhi        $t8 # 00150780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a7cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603a80: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603a80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a84: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603a88: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603a88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603a8c: 0x15c100  sll         $t8, $s5, 4
    ctx->pc = 0x603a8cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x603a90: 0x15c860  .word       0x0015C860                   # add         $t9, $zero, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x603a94: 0x15c810  .word       0x0015C810                   # mfhi        $t9 # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a94u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x603a98: 0x15cd50  .word       0x0015CD50                   # mfhi        $t9 # 00150540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603a98u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x603a9c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603a9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603aa0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603aa0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603aa4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603aa8: 0x0  nop
    ctx->pc = 0x603aa8u;
    // NOP
    // 0x603aac: 0x0  nop
    ctx->pc = 0x603aacu;
    // NOP
    // 0x603ab0: 0x0  nop
    ctx->pc = 0x603ab0u;
    // NOP
    // 0x603ab4: 0x0  nop
    ctx->pc = 0x603ab4u;
    // NOP
    // 0x603ab8: 0x1635b0  tge         $zero, $s6, 214
    ctx->pc = 0x603ab8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603abc: 0x163a30  tge         $zero, $s6, 232
    ctx->pc = 0x603abcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ac0: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603ac0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ac4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603ac8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603ac8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603acc: 0x1634c0  sll         $a2, $s6, 19
    ctx->pc = 0x603accu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 19));
    // 0x603ad0: 0x163aa0  .word       0x00163AA0                   # add         $a3, $zero, $s6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x603ad4: 0x163a70  tge         $zero, $s6, 233
    ctx->pc = 0x603ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ad8: 0x156cf0  tge         $zero, $s5, 435
    ctx->pc = 0x603ad8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603adc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603adcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ae0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ae4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603ae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ae8: 0x0  nop
    ctx->pc = 0x603ae8u;
    // NOP
    // 0x603aec: 0x0  nop
    ctx->pc = 0x603aecu;
    // NOP
    // 0x603af0: 0x0  nop
    ctx->pc = 0x603af0u;
    // NOP
    // 0x603af4: 0x0  nop
    ctx->pc = 0x603af4u;
    // NOP
    // 0x603af8: 0x163c50  .word       0x00163C50                   # mfhi        $a3 # 00160440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603af8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x603afc: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603afcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b00: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603b00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b04: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603b08: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b0c: 0x163be0  .word       0x00163BE0                   # add         $a3, $zero, $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x603b10: 0x163cc0  sll         $a3, $s6, 19
    ctx->pc = 0x603b10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 19));
    // 0x603b14: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x603b18: 0x164000  sll         $t0, $s6, 0
    ctx->pc = 0x603b18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 0));
    // 0x603b1c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603b1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b20: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603b20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603b24: 0x164110  .word       0x00164110                   # mfhi        $t0 # 00160100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x603b28: 0x0  nop
    ctx->pc = 0x603b28u;
    // NOP
    // 0x603b2c: 0x0  nop
    ctx->pc = 0x603b2cu;
    // NOP
    // 0x603b30: 0x0  nop
    ctx->pc = 0x603b30u;
    // NOP
    // 0x603b34: 0x0  nop
    ctx->pc = 0x603b34u;
    // NOP
    // 0x603b38: 0x164ab0  tge         $zero, $s6, 298
    ctx->pc = 0x603b38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b3c: 0x164e20  .word       0x00164E20                   # add         $t1, $zero, $s6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x603b40: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603b40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b44: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b44u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603b48: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603b48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b4c: 0x164a40  sll         $t1, $s6, 9
    ctx->pc = 0x603b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 9));
    // 0x603b50: 0x164e60  .word       0x00164E60                   # add         $t1, $zero, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x603b54: 0x165100  sll         $t2, $s6, 4
    ctx->pc = 0x603b54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x603b58: 0x1650d0  .word       0x001650D0                   # mfhi        $t2 # 001600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b58u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x603b5c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603b5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b60: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603b60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603b64: 0x165130  tge         $zero, $s6, 324
    ctx->pc = 0x603b64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b68: 0x0  nop
    ctx->pc = 0x603b68u;
    // NOP
    // 0x603b6c: 0x0  nop
    ctx->pc = 0x603b6cu;
    // NOP
    // 0x603b70: 0x0  nop
    ctx->pc = 0x603b70u;
    // NOP
    // 0x603b74: 0x0  nop
    ctx->pc = 0x603b74u;
    // NOP
    // 0x603b78: 0x1565d0  .word       0x001565D0                   # mfhi        $t4 # 001505C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b78u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603b7c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603b7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b80: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603b80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b84: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603b88: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603b88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b8c: 0x165bc0  sll         $t3, $s6, 15
    ctx->pc = 0x603b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 15));
    // 0x603b90: 0x1569e0  .word       0x001569E0                   # add         $t5, $zero, $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x603b94: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603b94u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x603b98: 0x156cf0  tge         $zero, $s5, 435
    ctx->pc = 0x603b98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603b9c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603b9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ba0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ba0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ba4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603ba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ba8: 0x0  nop
    ctx->pc = 0x603ba8u;
    // NOP
    // 0x603bac: 0x0  nop
    ctx->pc = 0x603bacu;
    // NOP
    // 0x603bb0: 0x0  nop
    ctx->pc = 0x603bb0u;
    // NOP
    // 0x603bb4: 0x0  nop
    ctx->pc = 0x603bb4u;
    // NOP
    // 0x603bb8: 0x165cf0  tge         $zero, $s6, 371
    ctx->pc = 0x603bb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603bbc: 0x165d30  tge         $zero, $s6, 372
    ctx->pc = 0x603bbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603bc0: 0x166040  sll         $t4, $s6, 1
    ctx->pc = 0x603bc0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x603bc4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603bc8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603bc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603bcc: 0x165c80  sll         $t3, $s6, 18
    ctx->pc = 0x603bccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 18));
    // 0x603bd0: 0x166080  sll         $t4, $s6, 2
    ctx->pc = 0x603bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x603bd4: 0x167200  sll         $t6, $s6, 8
    ctx->pc = 0x603bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x603bd8: 0x166cc0  sll         $t5, $s6, 19
    ctx->pc = 0x603bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 19));
    // 0x603bdc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603bdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603be0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603be0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603be4: 0x166cf0  tge         $zero, $s6, 435
    ctx->pc = 0x603be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603be8: 0x0  nop
    ctx->pc = 0x603be8u;
    // NOP
    // 0x603bec: 0x0  nop
    ctx->pc = 0x603becu;
    // NOP
    // 0x603bf0: 0x0  nop
    ctx->pc = 0x603bf0u;
    // NOP
    // 0x603bf4: 0x0  nop
    ctx->pc = 0x603bf4u;
    // NOP
    // 0x603bf8: 0x167d30  tge         $zero, $s6, 500
    ctx->pc = 0x603bf8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603bfc: 0x167e60  .word       0x00167E60                   # add         $t7, $zero, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603bfcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x603c00: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603c00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c04: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603c08: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603c08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c0c: 0x167cc0  sll         $t7, $s6, 19
    ctx->pc = 0x603c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 19));
    // 0x603c10: 0x167ea0  .word       0x00167EA0                   # add         $t7, $zero, $s6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x603c14: 0x1681d0  .word       0x001681D0                   # mfhi        $s0 # 001601C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c14u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x603c18: 0x168020  add         $s0, $zero, $s6
    ctx->pc = 0x603c18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x603c1c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603c1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c20: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603c20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603c24: 0x168200  sll         $s0, $s6, 8
    ctx->pc = 0x603c24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x603c28: 0x0  nop
    ctx->pc = 0x603c28u;
    // NOP
    // 0x603c2c: 0x0  nop
    ctx->pc = 0x603c2cu;
    // NOP
    // 0x603c30: 0x0  nop
    ctx->pc = 0x603c30u;
    // NOP
    // 0x603c34: 0x0  nop
    ctx->pc = 0x603c34u;
    // NOP
    // 0x603c38: 0x168880  sll         $s1, $s6, 2
    ctx->pc = 0x603c38u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x603c3c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603c3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c40: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603c40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c44: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c44u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603c48: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603c48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c4c: 0x168810  .word       0x00168810                   # mfhi        $s1 # 00160000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c4cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x603c50: 0x168940  sll         $s1, $s6, 5
    ctx->pc = 0x603c50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x603c54: 0x168aa0  .word       0x00168AA0                   # add         $s1, $zero, $s6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x603c58: 0x168ad0  .word       0x00168AD0                   # mfhi        $s1 # 001602C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c58u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x603c5c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603c5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c60: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603c64: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_603c68:
    // 0x603c68: 0x0  nop
    ctx->pc = 0x603c68u;
    // NOP
label_603c6c:
    // 0x603c6c: 0x0  nop
    ctx->pc = 0x603c6cu;
    // NOP
label_603c70:
    // 0x603c70: 0x0  nop
    ctx->pc = 0x603c70u;
    // NOP
label_603c74:
    // 0x603c74: 0x0  nop
    ctx->pc = 0x603c74u;
    // NOP
label_603c78:
    // 0x603c78: 0x168d90  .word       0x00168D90                   # mfhi        $s1 # 00160580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c78u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_603c7c:
    // 0x603c7c: 0x168df0  tge         $zero, $s6, 567
    ctx->pc = 0x603c7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_603c80:
    // 0x603c80: 0x169140  sll         $s2, $s6, 5
    ctx->pc = 0x603c80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_603c84:
    // 0x603c84: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603c88: 0x169180  sll         $s2, $s6, 6
    ctx->pc = 0x603c88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x603c8c: 0x168d20  .word       0x00168D20                   # add         $s1, $zero, $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x603c90: 0x169210  .word       0x00169210                   # mfhi        $s2 # 00160200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603c90u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x603c94: 0x169400  sll         $s2, $s6, 16
    ctx->pc = 0x603c94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x603c98: 0x169430  tge         $zero, $s6, 592
    ctx->pc = 0x603c98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603c9c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603c9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ca0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ca4: 0x1698f0  tge         $zero, $s6, 611
    ctx->pc = 0x603ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ca8: 0x169880  sll         $s3, $s6, 2
    ctx->pc = 0x603ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x603cac: 0x0  nop
    ctx->pc = 0x603cacu;
    // NOP
    // 0x603cb0: 0x0  nop
    ctx->pc = 0x603cb0u;
    // NOP
    // 0x603cb4: 0x0  nop
    ctx->pc = 0x603cb4u;
    // NOP
    // 0x603cb8: 0x16c110  .word       0x0016C110                   # mfhi        $t8 # 00160100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cb8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603cbc: 0x16c3d0  .word       0x0016C3D0                   # mfhi        $t8 # 001603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cbcu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603cc0: 0x16c410  .word       0x0016C410                   # mfhi        $t8 # 00160400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cc0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603cc4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603cc8: 0x16c450  .word       0x0016C450                   # mfhi        $t8 # 00160440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cc8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603ccc: 0x16c060  .word       0x0016C060                   # add         $t8, $zero, $s6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x603cd0: 0x16c490  .word       0x0016C490                   # mfhi        $t8 # 00160480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cd0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603cd4: 0x16c4f0  tge         $zero, $s6, 787
    ctx->pc = 0x603cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603cd8: 0x16c560  .word       0x0016C560                   # add         $t8, $zero, $s6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x603cdc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603cdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ce0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ce0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ce4: 0x16c590  .word       0x0016C590                   # mfhi        $t8 # 00160580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ce4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603ce8: 0x0  nop
    ctx->pc = 0x603ce8u;
    // NOP
    // 0x603cec: 0x0  nop
    ctx->pc = 0x603cecu;
    // NOP
    // 0x603cf0: 0x16dee0  .word       0x0016DEE0                   # add         $k1, $zero, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
    // 0x603cf4: 0x16ded0  .word       0x0016DED0                   # mfhi        $k1 # 001606C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cf4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603cf8: 0x16c790  .word       0x0016C790                   # mfhi        $t8 # 00160780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cf8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x603cfc: 0x16d950  .word       0x0016D950                   # mfhi        $k1 # 00160140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603cfcu;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603d00: 0x16da10  .word       0x0016DA10                   # mfhi        $k1 # 00160200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d00u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603d04: 0x0  nop
    ctx->pc = 0x603d04u;
    // NOP
    // 0x603d08: 0x0  nop
    ctx->pc = 0x603d08u;
    // NOP
    // 0x603d0c: 0x0  nop
    ctx->pc = 0x603d0cu;
    // NOP
    // 0x603d10: 0x0  nop
    ctx->pc = 0x603d10u;
    // NOP
    // 0x603d14: 0x0  nop
    ctx->pc = 0x603d14u;
    // NOP
    // 0x603d18: 0x1565d0  .word       0x001565D0                   # mfhi        $t4 # 001505C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d18u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x603d1c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603d1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d20: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603d20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603d28: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603d28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d2c: 0x16df90  .word       0x0016DF90                   # mfhi        $k1 # 00160780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d2cu;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603d30: 0x1569e0  .word       0x001569E0                   # add         $t5, $zero, $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x603d34: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x603d38: 0x156cf0  tge         $zero, $s5, 435
    ctx->pc = 0x603d38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d3c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603d3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d40: 0x171710  .word       0x00171710                   # mfhi        $v0 # 00170700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x603d44: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d48: 0x0  nop
    ctx->pc = 0x603d48u;
    // NOP
    // 0x603d4c: 0x0  nop
    ctx->pc = 0x603d4cu;
    // NOP
    // 0x603d50: 0x0  nop
    ctx->pc = 0x603d50u;
    // NOP
    // 0x603d54: 0x0  nop
    ctx->pc = 0x603d54u;
    // NOP
    // 0x603d58: 0x16e420  .word       0x0016E420                   # add         $gp, $zero, $s6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x603d5c: 0x16e520  .word       0x0016E520                   # add         $gp, $zero, $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x603d60: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603d60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d64: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603d68: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603d68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d6c: 0x16e380  sll         $gp, $s6, 14
    ctx->pc = 0x603d6cu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 22), 14));
    // 0x603d70: 0x16e710  .word       0x0016E710                   # mfhi        $gp # 00160700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d70u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x603d74: 0x16f2a0  .word       0x0016F2A0                   # add         $fp, $zero, $s6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x603d78: 0x16f3d0  .word       0x0016F3D0                   # mfhi        $fp # 001603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603d78u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x603d7c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603d7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d80: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603d80u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603d84: 0x16ff70  tge         $zero, $s6, 1021
    ctx->pc = 0x603d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d88: 0x0  nop
    ctx->pc = 0x603d88u;
    // NOP
    // 0x603d8c: 0x0  nop
    ctx->pc = 0x603d8cu;
    // NOP
    // 0x603d90: 0x0  nop
    ctx->pc = 0x603d90u;
    // NOP
    // 0x603d94: 0x0  nop
    ctx->pc = 0x603d94u;
    // NOP
    // 0x603d98: 0x171af0  tge         $zero, $s7, 107
    ctx->pc = 0x603d98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603d9c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603d9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603da0: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603da0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603da4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603da4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603da8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603da8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603dac: 0x171a80  sll         $v1, $s7, 10
    ctx->pc = 0x603dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 10));
    // 0x603db0: 0x171c30  tge         $zero, $s7, 112
    ctx->pc = 0x603db0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603db4: 0x172610  .word       0x00172610                   # mfhi        $a0 # 00170600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603db4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x603db8: 0x171f70  tge         $zero, $s7, 125
    ctx->pc = 0x603db8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603dbc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603dbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603dc0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603dc4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603dc8: 0x172740  sll         $a0, $s7, 29
    ctx->pc = 0x603dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 29));
    // 0x603dcc: 0x0  nop
    ctx->pc = 0x603dccu;
    // NOP
    // 0x603dd0: 0x0  nop
    ctx->pc = 0x603dd0u;
    // NOP
    // 0x603dd4: 0x0  nop
    ctx->pc = 0x603dd4u;
    // NOP
    // 0x603dd8: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x603dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x603ddc: 0x172ac0  sll         $a1, $s7, 11
    ctx->pc = 0x603ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 11));
    // 0x603de0: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603de0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603de4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603de4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_603de8:
    // 0x603de8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603de8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_603dec:
    // 0x603dec: 0x172850  .word       0x00172850                   # mfhi        $a1 # 00170040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603decu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_603df0:
    // 0x603df0: 0x172b00  sll         $a1, $s7, 12
    ctx->pc = 0x603df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 12));
label_603df4:
    // 0x603df4: 0x173aa0  .word       0x00173AA0                   # add         $a3, $zero, $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_603df8:
    // 0x603df8: 0x173950  .word       0x00173950                   # mfhi        $a3 # 00170140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603df8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_603dfc:
    // 0x603dfc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603dfcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_603e00:
    // 0x603e00: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603e00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_603e04:
    // 0x603e04: 0x173af0  tge         $zero, $s7, 235
    ctx->pc = 0x603e04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e08: 0x0  nop
    ctx->pc = 0x603e08u;
    // NOP
    // 0x603e0c: 0x0  nop
    ctx->pc = 0x603e0cu;
    // NOP
    // 0x603e10: 0x0  nop
    ctx->pc = 0x603e10u;
    // NOP
    // 0x603e14: 0x0  nop
    ctx->pc = 0x603e14u;
    // NOP
    // 0x603e18: 0x1743d0  .word       0x001743D0                   # mfhi        $t0 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e18u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x603e1c: 0x174440  sll         $t0, $s7, 17
    ctx->pc = 0x603e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 17));
    // 0x603e20: 0x174480  sll         $t0, $s7, 18
    ctx->pc = 0x603e20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 18));
    // 0x603e24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603e28: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603e28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e2c: 0x174360  .word       0x00174360                   # add         $t0, $zero, $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x603e30: 0x1744c0  sll         $t0, $s7, 19
    ctx->pc = 0x603e30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 19));
    // 0x603e34: 0x174510  .word       0x00174510                   # mfhi        $t0 # 00170500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x603e38: 0x1744f0  tge         $zero, $s7, 275
    ctx->pc = 0x603e38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e3c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603e3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e40: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603e40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603e44: 0x174500  sll         $t0, $s7, 20
    ctx->pc = 0x603e44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x603e48: 0x0  nop
    ctx->pc = 0x603e48u;
    // NOP
    // 0x603e4c: 0x0  nop
    ctx->pc = 0x603e4cu;
    // NOP
    // 0x603e50: 0x177880  sll         $t7, $s7, 2
    ctx->pc = 0x603e50u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x603e54: 0x0  nop
    ctx->pc = 0x603e54u;
    // NOP
    // 0x603e58: 0x0  nop
    ctx->pc = 0x603e58u;
    // NOP
label_603e5c:
    // 0x603e5c: 0x0  nop
    ctx->pc = 0x603e5cu;
    // NOP
    // 0x603e60: 0x177810  .word       0x00177810                   # mfhi        $t7 # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e60u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x603e64: 0x0  nop
    ctx->pc = 0x603e64u;
    // NOP
    // 0x603e68: 0x0  nop
    ctx->pc = 0x603e68u;
    // NOP
    // 0x603e6c: 0x0  nop
    ctx->pc = 0x603e6cu;
    // NOP
    // 0x603e70: 0x0  nop
    ctx->pc = 0x603e70u;
    // NOP
    // 0x603e74: 0x0  nop
    ctx->pc = 0x603e74u;
    // NOP
    // 0x603e78: 0x1746a0  .word       0x001746A0                   # add         $t0, $zero, $s7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x603e7c: 0x1756f0  tge         $zero, $s7, 347
    ctx->pc = 0x603e7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e80: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603e80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e84: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603e88: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603e88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603e8c: 0x174600  sll         $t0, $s7, 24
    ctx->pc = 0x603e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x603e90: 0x175950  .word       0x00175950                   # mfhi        $t3 # 00170140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e90u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x603e94: 0x1759d0  .word       0x001759D0                   # mfhi        $t3 # 001701C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603e94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x603e98: 0x175740  sll         $t2, $s7, 29
    ctx->pc = 0x603e98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 29));
    // 0x603e9c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603e9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ea0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ea4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ea8: 0x0  nop
    ctx->pc = 0x603ea8u;
    // NOP
    // 0x603eac: 0x0  nop
    ctx->pc = 0x603eacu;
    // NOP
    // 0x603eb0: 0x0  nop
    ctx->pc = 0x603eb0u;
    // NOP
    // 0x603eb4: 0x0  nop
    ctx->pc = 0x603eb4u;
    // NOP
    // 0x603eb8: 0x17a8b0  tge         $zero, $s7, 674
    ctx->pc = 0x603eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ebc: 0x17aa10  .word       0x0017AA10                   # mfhi        $s5 # 00170200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ebcu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x603ec0: 0x17ab70  tge         $zero, $s7, 685
    ctx->pc = 0x603ec0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ec4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603ec8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603ec8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ecc: 0x17a840  sll         $s5, $s7, 1
    ctx->pc = 0x603eccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x603ed0: 0x17af60  .word       0x0017AF60                   # add         $s5, $zero, $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ed0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x603ed4: 0x17b1e0  .word       0x0017B1E0                   # add         $s6, $zero, $s7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603ed8: 0x17b1b0  tge         $zero, $s7, 710
    ctx->pc = 0x603ed8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603edc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603edcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603ee0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603ee4: 0x17b210  .word       0x0017B210                   # mfhi        $s6 # 00170200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ee4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x603ee8: 0x0  nop
    ctx->pc = 0x603ee8u;
    // NOP
    // 0x603eec: 0x0  nop
    ctx->pc = 0x603eecu;
    // NOP
    // 0x603ef0: 0x0  nop
    ctx->pc = 0x603ef0u;
    // NOP
    // 0x603ef4: 0x0  nop
    ctx->pc = 0x603ef4u;
    // NOP
    // 0x603ef8: 0x17d7e0  .word       0x0017D7E0                   # add         $k0, $zero, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603ef8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x603efc: 0x17d8d0  .word       0x0017D8D0                   # mfhi        $k1 # 001700C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603efcu;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603f00: 0x17ed90  .word       0x0017ED90                   # mfhi        $sp # 00170580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f00u;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x603f04: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603f08: 0x17edf0  tge         $zero, $s7, 951
    ctx->pc = 0x603f08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f0c: 0x17bda0  .word       0x0017BDA0                   # add         $s7, $zero, $s7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x603f10: 0x17dcd0  .word       0x0017DCD0                   # mfhi        $k1 # 001704C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f10u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x603f14: 0x17d9c0  sll         $k1, $s7, 7
    ctx->pc = 0x603f14u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 23), 7));
    // 0x603f18: 0x17dac0  sll         $k1, $s7, 11
    ctx->pc = 0x603f18u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 23), 11));
    // 0x603f1c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603f1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f20: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603f20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603f24: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f28: 0x0  nop
    ctx->pc = 0x603f28u;
    // NOP
    // 0x603f2c: 0x0  nop
    ctx->pc = 0x603f2cu;
    // NOP
    // 0x603f30: 0x0  nop
    ctx->pc = 0x603f30u;
    // NOP
    // 0x603f34: 0x0  nop
    ctx->pc = 0x603f34u;
    // NOP
    // 0x603f38: 0x182a30  tge         $zero, $t8, 168
    ctx->pc = 0x603f38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f3c: 0x182b10  .word       0x00182B10                   # mfhi        $a1 # 00180300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f3cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x603f40: 0x182b50  .word       0x00182B50                   # mfhi        $a1 # 00180340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x603f44: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f44u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603f48: 0x182b90  .word       0x00182B90                   # mfhi        $a1 # 00180380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x603f4c: 0x1829c0  sll         $a1, $t8, 7
    ctx->pc = 0x603f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 7));
    // 0x603f50: 0x182bd0  .word       0x00182BD0                   # mfhi        $a1 # 001803C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f50u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x603f54: 0x182c40  sll         $a1, $t8, 17
    ctx->pc = 0x603f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 17));
    // 0x603f58: 0x182c70  tge         $zero, $t8, 177
    ctx->pc = 0x603f58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f5c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603f5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f60: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603f60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603f64: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f68: 0x0  nop
    ctx->pc = 0x603f68u;
    // NOP
    // 0x603f6c: 0x0  nop
    ctx->pc = 0x603f6cu;
    // NOP
    // 0x603f70: 0x0  nop
    ctx->pc = 0x603f70u;
    // NOP
    // 0x603f74: 0x0  nop
    ctx->pc = 0x603f74u;
    // NOP
    // 0x603f78: 0x1830d0  .word       0x001830D0                   # mfhi        $a2 # 001800C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f78u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x603f7c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x603f7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f80: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x603f80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f84: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603f88: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603f88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f8c: 0x183040  sll         $a2, $t8, 1
    ctx->pc = 0x603f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x603f90: 0x183580  sll         $a2, $t8, 22
    ctx->pc = 0x603f90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), 22));
    // 0x603f94: 0x183420  .word       0x00183420                   # add         $a2, $zero, $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x603f98: 0x156cf0  tge         $zero, $s5, 435
    ctx->pc = 0x603f98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603f9c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603f9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fa0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603fa4: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x603fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fa8: 0x0  nop
    ctx->pc = 0x603fa8u;
    // NOP
    // 0x603fac: 0x0  nop
    ctx->pc = 0x603facu;
    // NOP
    // 0x603fb0: 0x0  nop
    ctx->pc = 0x603fb0u;
    // NOP
    // 0x603fb4: 0x0  nop
    ctx->pc = 0x603fb4u;
    // NOP
    // 0x603fb8: 0x1845b0  tge         $zero, $t8, 278
    ctx->pc = 0x603fb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fbc: 0x184a30  tge         $zero, $t8, 296
    ctx->pc = 0x603fbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fc0: 0x184ac0  sll         $t1, $t8, 11
    ctx->pc = 0x603fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 11));
    // 0x603fc4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x603fc8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x603fc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fcc: 0x1844f0  tge         $zero, $t8, 275
    ctx->pc = 0x603fccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fd0: 0x184b00  sll         $t1, $t8, 12
    ctx->pc = 0x603fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 12));
    // 0x603fd4: 0x186470  tge         $zero, $t8, 401
    ctx->pc = 0x603fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fd8: 0x1853d0  .word       0x001853D0                   # mfhi        $t2 # 001803C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603fd8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x603fdc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x603fdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x603fe0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x603fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x603fe4: 0x186420  .word       0x00186420                   # add         $t4, $zero, $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x603fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x603fe8: 0x0  nop
    ctx->pc = 0x603fe8u;
    // NOP
    // 0x603fec: 0x0  nop
    ctx->pc = 0x603fecu;
    // NOP
    // 0x603ff0: 0x0  nop
    ctx->pc = 0x603ff0u;
    // NOP
    // 0x603ff4: 0x0  nop
    ctx->pc = 0x603ff4u;
    // NOP
    // 0x603ff8: 0x187f00  sll         $t7, $t8, 28
    ctx->pc = 0x603ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 28));
    // 0x603ffc: 0x187f40  sll         $t7, $t8, 29
    ctx->pc = 0x603ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 29));
    // 0x604000: 0x187f80  sll         $t7, $t8, 30
    ctx->pc = 0x604000u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 30));
    // 0x604004: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604004u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604008: 0x187fc0  sll         $t7, $t8, 31
    ctx->pc = 0x604008u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 31));
    // 0x60400c: 0x187e90  .word       0x00187E90                   # mfhi        $t7 # 00180680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60400cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x604010: 0x188000  sll         $s0, $t8, 0
    ctx->pc = 0x604010u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 0));
    // 0x604014: 0x1881e0  .word       0x001881E0                   # add         $s0, $zero, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x604018: 0x188210  .word       0x00188210                   # mfhi        $s0 # 00180200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604018u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x60401c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x60401cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604020: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x604020u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x604024: 0x188240  sll         $s0, $t8, 9
    ctx->pc = 0x604024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 9));
    // 0x604028: 0x0  nop
    ctx->pc = 0x604028u;
    // NOP
    // 0x60402c: 0x0  nop
    ctx->pc = 0x60402cu;
    // NOP
    // 0x604030: 0x0  nop
    ctx->pc = 0x604030u;
    // NOP
    // 0x604034: 0x0  nop
    ctx->pc = 0x604034u;
    // NOP
    // 0x604038: 0x189570  tge         $zero, $t8, 597
    ctx->pc = 0x604038u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x60403c: 0x1566b0  tge         $zero, $s5, 410
    ctx->pc = 0x60403cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604040: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x604040u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604044: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604044u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604048: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x604048u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x60404c: 0x1894b0  tge         $zero, $t8, 594
    ctx->pc = 0x60404cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x604050: 0x1897d0  .word       0x001897D0                   # mfhi        $s2 # 001807C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604050u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x604054: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604054u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x604058: 0x189b70  tge         $zero, $t8, 621
    ctx->pc = 0x604058u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x60405c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x60405cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604060: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x604060u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x604064: 0x157eb0  tge         $zero, $s5, 506
    ctx->pc = 0x604064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604068: 0x0  nop
    ctx->pc = 0x604068u;
    // NOP
    // 0x60406c: 0x0  nop
    ctx->pc = 0x60406cu;
    // NOP
    // 0x604070: 0x0  nop
    ctx->pc = 0x604070u;
    // NOP
    // 0x604074: 0x0  nop
    ctx->pc = 0x604074u;
    // NOP
    // 0x604078: 0x18b070  tge         $zero, $t8, 705
    ctx->pc = 0x604078u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x60407c: 0x18b0b0  tge         $zero, $t8, 706
    ctx->pc = 0x60407cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x604080: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x604080u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x604084: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604084u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604088: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x604088u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_60408c:
    // 0x60408c: 0x18b000  sll         $s6, $t8, 0
    ctx->pc = 0x60408cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 24), 0));
label_604090:
    // 0x604090: 0x18b0f0  tge         $zero, $t8, 707
    ctx->pc = 0x604090u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_604094:
    // 0x604094: 0x18b270  tge         $zero, $t8, 713
    ctx->pc = 0x604094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_604098:
    // 0x604098: 0x18b1e0  .word       0x0018B1E0                   # add         $s6, $zero, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604098u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_60409c:
    // 0x60409c: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x60409cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_6040a0:
    // 0x6040a0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x6040a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_6040a4:
    // 0x6040a4: 0x18b2a0  .word       0x0018B2A0                   # add         $s6, $zero, $t8 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6040a8:
    // 0x6040a8: 0x0  nop
    ctx->pc = 0x6040a8u;
    // NOP
label_6040ac:
    // 0x6040ac: 0x0  nop
    ctx->pc = 0x6040acu;
    // NOP
label_6040b0:
    // 0x6040b0: 0x0  nop
    ctx->pc = 0x6040b0u;
    // NOP
label_6040b4:
    // 0x6040b4: 0x0  nop
    ctx->pc = 0x6040b4u;
    // NOP
label_6040b8:
    // 0x6040b8: 0x18c960  .word       0x0018C960                   # add         $t9, $zero, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_6040bc:
    // 0x6040bc: 0x18d340  sll         $k0, $t8, 13
    ctx->pc = 0x6040bcu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 24), 13));
label_6040c0:
    // 0x6040c0: 0x156770  tge         $zero, $s5, 413
    ctx->pc = 0x6040c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_6040c4:
    // 0x6040c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6040c8:
    // 0x6040c8: 0x1567b0  tge         $zero, $s5, 414
    ctx->pc = 0x6040c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x6040cc: 0x18c8c0  sll         $t9, $t8, 3
    ctx->pc = 0x6040ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x6040d0: 0x18d380  sll         $k0, $t8, 14
    ctx->pc = 0x6040d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 24), 14));
    // 0x6040d4: 0x156a10  .word       0x00156A10                   # mfhi        $t5 # 00150200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040d4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x6040d8: 0x18f3e0  .word       0x0018F3E0                   # add         $fp, $zero, $t8 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x6040dc: 0x156d30  tge         $zero, $s5, 436
    ctx->pc = 0x6040dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x6040e0: 0x156d40  sll         $t5, $s5, 21
    ctx->pc = 0x6040e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x6040e4: 0x18e8c0  sll         $sp, $t8, 3
    ctx->pc = 0x6040e4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x6040e8: 0x0  nop
    ctx->pc = 0x6040e8u;
    // NOP
    // 0x6040ec: 0x0  nop
    ctx->pc = 0x6040ecu;
    // NOP
    // 0x6040f0: 0x0  nop
    ctx->pc = 0x6040f0u;
    // NOP
    // 0x6040f4: 0x0  nop
    ctx->pc = 0x6040f4u;
    // NOP
    // 0x6040f8: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x6040fc: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6040fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
    // 0x604100: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604100u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604104: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604104u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604108: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604108u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60410c: 0x18f7a0  .word       0x0018F7A0                   # add         $fp, $zero, $t8 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60410cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x604110: 0x18fbd0  .word       0x0018FBD0                   # mfhi        $ra # 001803C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604110u;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x604114: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604114u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x604118: 0x18fc10  .word       0x0018FC10                   # mfhi        $ra # 00180400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604118u;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x60411c: 0x18fa90  .word       0x0018FA90                   # mfhi        $ra # 00180280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60411cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x604120: 0x18fae0  .word       0x0018FAE0                   # add         $ra, $zero, $t8 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604120u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x604124: 0x18fb30  tge         $zero, $t8, 1004
    ctx->pc = 0x604124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x604128: 0x18fb80  sll         $ra, $t8, 14
    ctx->pc = 0x604128u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 24), 14));
    // 0x60412c: 0x18f810  .word       0x0018F810                   # mfhi        $ra # 00180000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60412cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x604130: 0x18f860  .word       0x0018F860                   # add         $ra, $zero, $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604130u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x604134: 0x18f8b0  tge         $zero, $t8, 994
    ctx->pc = 0x604134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x604138: 0x18f900  sll         $ra, $t8, 4
    ctx->pc = 0x604138u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x60413c: 0x18f950  .word       0x0018F950                   # mfhi        $ra # 00180140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60413cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x604140: 0x18f9a0  .word       0x0018F9A0                   # add         $ra, $zero, $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604140u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x604144: 0x18f9f0  tge         $zero, $t8, 999
    ctx->pc = 0x604144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x604148: 0x18fa40  sll         $ra, $t8, 9
    ctx->pc = 0x604148u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 24), 9));
    // 0x60414c: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60414cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604150: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604150u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604154: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x604154u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604158: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604158u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
    // 0x60415c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60415cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604160: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604160u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604164: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x604164u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604168: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604168u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
    // 0x60416c: 0x2b6590  .word       0x002B6590                   # mfhi        $t4 # 002B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60416cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604170: 0x2b65b0  tge         $at, $t3, 406
    ctx->pc = 0x604170u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604174: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604174u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604178: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x604178u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x60417c: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60417cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x604180: 0x0  nop
    ctx->pc = 0x604180u;
    // NOP
    // 0x604184: 0x0  nop
    ctx->pc = 0x604184u;
    // NOP
    // 0x604188: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604188u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x60418c: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60418cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
    // 0x604190: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604190u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604194: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604194u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604198: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604198u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60419c: 0x18fca0  .word       0x0018FCA0                   # add         $ra, $zero, $t8 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60419cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x6041a0: 0x190120  .word       0x00190120                   # add         $zero, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6041a4: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x6041a8: 0x2b5cc0  .word       0x002B5CC0                   # sll         $t3, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
    // 0x6041ac: 0x2b5d10  .word       0x002B5D10                   # mfhi        $t3 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041acu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x6041b0: 0x2b5ef0  tge         $at, $t3, 379
    ctx->pc = 0x6041b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6041b4: 0x2b60d0  .word       0x002B60D0                   # mfhi        $t4 # 002B00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x6041b8: 0x2b62b0  tge         $at, $t3, 394
    ctx->pc = 0x6041b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6041bc: 0x2b6490  .word       0x002B6490                   # mfhi        $t4 # 002B0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041bcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x6041c0: 0x2b64a0  .word       0x002B64A0                   # add         $t4, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x6041c4: 0x2b64b0  tge         $at, $t3, 402
    ctx->pc = 0x6041c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6041c8: 0x2b64c0  .word       0x002B64C0                   # sll         $t4, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
    // 0x6041cc: 0x190020  add         $zero, $zero, $t9
    ctx->pc = 0x6041ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6041d0: 0x190060  .word       0x00190060                   # add         $zero, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6041d4: 0x1900a0  .word       0x001900A0                   # add         $zero, $zero, $t9 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6041d8: 0x1900e0  .word       0x001900E0                   # add         $zero, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6041dc: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041dcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x6041e0: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x6041e4: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x6041e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6041e8: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
    // 0x6041ec: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041ecu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x6041f0: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x6041f4: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x6041f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x6041f8: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
    // 0x6041fc: 0x2b6590  .word       0x002B6590                   # mfhi        $t4 # 002B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6041fcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604200: 0x18fd10  .word       0x0018FD10                   # mfhi        $ra # 00180500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604200u;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x604204: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604204u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604208: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x604208u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x60420c: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60420cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x604210: 0x0  nop
    ctx->pc = 0x604210u;
    // NOP
    // 0x604214: 0x0  nop
    ctx->pc = 0x604214u;
    // NOP
    // 0x604218: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604218u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x60421c: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60421cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
    // 0x604220: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604224: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604224u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604228: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604228u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60422c: 0x191460  .word       0x00191460                   # add         $v0, $zero, $t9 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60422cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604230: 0x2b5c80  .word       0x002B5C80                   # sll         $t3, $t3, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604230u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 18));
    // 0x604234: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604234u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x604238: 0x1914e0  .word       0x001914E0                   # add         $v0, $zero, $t9 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604238u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x60423c: 0x1914f0  tge         $zero, $t9, 83
    ctx->pc = 0x60423cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604240: 0x191500  sll         $v0, $t9, 20
    ctx->pc = 0x604240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 20));
    // 0x604244: 0x191510  .word       0x00191510                   # mfhi        $v0 # 00190500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604244u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x604248: 0x191520  .word       0x00191520                   # add         $v0, $zero, $t9 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x60424c: 0x191530  tge         $zero, $t9, 84
    ctx->pc = 0x60424cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604250: 0x191540  sll         $v0, $t9, 21
    ctx->pc = 0x604250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 21));
    // 0x604254: 0x191550  .word       0x00191550                   # mfhi        $v0 # 00190540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604254u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x604258: 0x191560  .word       0x00191560                   # add         $v0, $zero, $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604258u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x60425c: 0x2b64d0  .word       0x002B64D0                   # mfhi        $t4 # 002B04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60425cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604260: 0x2b64e0  .word       0x002B64E0                   # add         $t4, $at, $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604260u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604264: 0x2b64f0  tge         $at, $t3, 403
    ctx->pc = 0x604264u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604268: 0x2b6500  .word       0x002B6500                   # sll         $t4, $t3, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604268u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
    // 0x60426c: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60426cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604270: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604270u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604274: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x604274u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604278: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604278u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
    // 0x60427c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60427cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604280: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604280u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604284: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x604284u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604288: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604288u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
    // 0x60428c: 0x1914d0  .word       0x001914D0                   # mfhi        $v0 # 001904C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60428cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x604290: 0x2b65b0  tge         $at, $t3, 406
    ctx->pc = 0x604290u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604294: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604294u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604298: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x604298u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x60429c: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60429cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x6042a0: 0x0  nop
    ctx->pc = 0x6042a0u;
    // NOP
    // 0x6042a4: 0x0  nop
    ctx->pc = 0x6042a4u;
    // NOP
    // 0x6042a8: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x6042ac: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
    // 0x6042b0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6042b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6042b4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6042b8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6042bc: 0x1915b0  tge         $zero, $t9, 86
    ctx->pc = 0x6042bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6042c0: 0x2b5c80  .word       0x002B5C80                   # sll         $t3, $t3, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 18));
    // 0x6042c4: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x6042c8: 0x2b5cc0  .word       0x002B5CC0                   # sll         $t3, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
    // 0x6042cc: 0x191820  add         $v1, $zero, $t9
    ctx->pc = 0x6042ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x6042d0: 0x191870  tge         $zero, $t9, 97
    ctx->pc = 0x6042d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6042d4: 0x1918c0  sll         $v1, $t9, 3
    ctx->pc = 0x6042d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x6042d8: 0x191910  .word       0x00191910                   # mfhi        $v1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6042dc: 0x191620  .word       0x00191620                   # add         $v0, $zero, $t9 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042e0: 0x191660  .word       0x00191660                   # add         $v0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042e4: 0x1916a0  .word       0x001916A0                   # add         $v0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042e8: 0x1916e0  .word       0x001916E0                   # add         $v0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042ec: 0x191720  .word       0x00191720                   # add         $v0, $zero, $t9 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042f0: 0x191760  .word       0x00191760                   # add         $v0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042f4: 0x1917a0  .word       0x001917A0                   # add         $v0, $zero, $t9 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042f8: 0x1917e0  .word       0x001917E0                   # add         $v0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6042fc: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6042fcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604300: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604300u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604304: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x604304u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604308: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604308u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
    // 0x60430c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60430cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604310: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604310u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604314: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x604314u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x604318: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604318u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
    // 0x60431c: 0x2b6590  .word       0x002B6590                   # mfhi        $t4 # 002B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60431cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604320: 0x191960  .word       0x00191960                   # add         $v1, $zero, $t9 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604320u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x604324: 0x191c80  sll         $v1, $t9, 18
    ctx->pc = 0x604324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
    // 0x604328: 0x191cb0  tge         $zero, $t9, 114
    ctx->pc = 0x604328u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x60432c: 0x191ce0  .word       0x00191CE0                   # add         $v1, $zero, $t9 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60432cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x604330: 0x0  nop
    ctx->pc = 0x604330u;
    // NOP
    // 0x604334: 0x0  nop
    ctx->pc = 0x604334u;
    // NOP
    // 0x604338: 0x1929d0  .word       0x001929D0                   # mfhi        $a1 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604338u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x60433c: 0x192b70  tge         $zero, $t9, 173
    ctx->pc = 0x60433cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604340: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604340u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604344: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604344u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604348: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604348u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60434c: 0x1925c0  sll         $a0, $t9, 23
    ctx->pc = 0x60434cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 23));
    // 0x604350: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604350u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604354: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604358: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60435c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60435cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604360: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604360u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604364: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x604364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604368: 0x1926c0  sll         $a0, $t9, 27
    ctx->pc = 0x604368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x60436c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60436cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604370: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604370u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604374: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604378: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604378u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x60437c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60437cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604380: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604380u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604384: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604388: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60438c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60438cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604390: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604390u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604394: 0x192930  tge         $zero, $t9, 164
    ctx->pc = 0x604394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604398: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x604398u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x60439c: 0x1932c0  sll         $a2, $t9, 11
    ctx->pc = 0x60439cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 11));
    // 0x6043a0: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x6043a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x6043a4: 0x193410  .word       0x00193410                   # mfhi        $a2 # 00190400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x6043a8: 0x193420  .word       0x00193420                   # add         $a2, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x6043ac: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043acu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6043b0: 0x1939c0  sll         $a3, $t9, 7
    ctx->pc = 0x6043b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
    // 0x6043b4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6043b8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x6043b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x6043bc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6043c0: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x6043c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x6043c4: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x6043c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6043c8: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6043cc: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x6043ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x6043d0: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6043d4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6043d8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x6043d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x6043dc: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x6043dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6043e0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6043e4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6043e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6043e8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x6043e8u;
    
    // 0x6043ec: 0x0  nop
    ctx->pc = 0x6043ecu;
    // NOP
    // 0x6043f0: 0x0  nop
    ctx->pc = 0x6043f0u;
    // NOP
    // 0x6043f4: 0x0  nop
    ctx->pc = 0x6043f4u;
    // NOP
    // 0x6043f8: 0x194800  sll         $t1, $t9, 0
    ctx->pc = 0x6043f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 0));
    // 0x6043fc: 0x194830  tge         $zero, $t9, 288
    ctx->pc = 0x6043fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604400: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604400u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604404: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604404u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604408: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604408u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60440c: 0x194750  .word       0x00194750                   # mfhi        $t0 # 00190740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60440cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604410: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604410u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604414: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604418: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60441c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60441cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604420: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604420u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604424: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x604424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604428: 0x1926c0  sll         $a0, $t9, 27
    ctx->pc = 0x604428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x60442c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60442cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604430: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604430u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604434: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604438: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x60443c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60443cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604440: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604440u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604444: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604448: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60444c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60444cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604450: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604450u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604454: 0x1947c0  sll         $t0, $t9, 31
    ctx->pc = 0x604454u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 31));
    // 0x604458: 0x194860  .word       0x00194860                   # add         $t1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x60445c: 0x194890  .word       0x00194890                   # mfhi        $t1 # 00190080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60445cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x604460: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604464: 0x1948c0  sll         $t1, $t9, 3
    ctx->pc = 0x604464u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x604468: 0x1948d0  .word       0x001948D0                   # mfhi        $t1 # 001900C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604468u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x60446c: 0x1948f0  tge         $zero, $t9, 291
    ctx->pc = 0x60446cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604470: 0x194900  sll         $t1, $t9, 4
    ctx->pc = 0x604470u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604474: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604478: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604478u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60447c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60447cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604480: 0x194910  .word       0x00194910                   # mfhi        $t1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604480u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x604484: 0x194950  .word       0x00194950                   # mfhi        $t1 # 00190140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604484u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x604488: 0x194990  .word       0x00194990                   # mfhi        $t1 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604488u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x60448c: 0x1949d0  .word       0x001949D0                   # mfhi        $t1 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60448cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x604490: 0x194a00  sll         $t1, $t9, 8
    ctx->pc = 0x604490u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604494: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604498: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x60449c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60449cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6044a0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6044a4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044a4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6044a8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x6044a8u;
    
    // 0x6044ac: 0x0  nop
    ctx->pc = 0x6044acu;
    // NOP
    // 0x6044b0: 0x0  nop
    ctx->pc = 0x6044b0u;
    // NOP
    // 0x6044b4: 0x0  nop
    ctx->pc = 0x6044b4u;
    // NOP
    // 0x6044b8: 0x195780  sll         $t2, $t9, 30
    ctx->pc = 0x6044b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 30));
    // 0x6044bc: 0x1957d0  .word       0x001957D0                   # mfhi        $t2 # 001907C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044bcu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x6044c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6044c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6044c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6044c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6044cc: 0x1956a0  .word       0x001956A0                   # add         $t2, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_6044d0:
    // 0x6044d0: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_6044d4:
    // 0x6044d4: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x6044d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_6044d8:
    // 0x6044d8: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x6044d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
label_6044dc:
    // 0x6044dc: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_6044e0:
    // 0x6044e0: 0x1959c0  sll         $t3, $t9, 7
    ctx->pc = 0x6044e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
label_6044e4:
    // 0x6044e4: 0x195a00  sll         $t3, $t9, 8
    ctx->pc = 0x6044e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
label_6044e8:
    // 0x6044e8: 0x195a40  sll         $t3, $t9, 9
    ctx->pc = 0x6044e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
label_6044ec:
    // 0x6044ec: 0x195a80  sll         $t3, $t9, 10
    ctx->pc = 0x6044ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 10));
label_6044f0:
    // 0x6044f0: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_6044f4:
    // 0x6044f4: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_6044f8:
    // 0x6044f8: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_6044fc:
    // 0x6044fc: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6044fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_604500:
    // 0x604500: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604500u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_604504:
    // 0x604504: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_604508:
    // 0x604508: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
label_60450c:
    // 0x60450c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60450cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604510: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604510u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604514: 0x195830  tge         $zero, $t9, 352
    ctx->pc = 0x604514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604518: 0x19b6b0  tge         $zero, $t9, 730
    ctx->pc = 0x604518u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x60451c: 0x195870  tge         $zero, $t9, 353
    ctx->pc = 0x60451cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604520: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604520u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604524: 0x195990  .word       0x00195990                   # mfhi        $t3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604524u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x604528: 0x1959a0  .word       0x001959A0                   # add         $t3, $zero, $t9 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604528u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x60452c: 0x19b890  .word       0x0019B890                   # mfhi        $s7 # 00190080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60452cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x604530: 0x19bfd0  .word       0x0019BFD0                   # mfhi        $s7 # 001907C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604530u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x604534: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604534u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604538: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60453c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60453cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604540: 0x19b480  sll         $s6, $t9, 18
    ctx->pc = 0x604540u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
    // 0x604544: 0x19b4c0  sll         $s6, $t9, 19
    ctx->pc = 0x604544u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 25), 19));
    // 0x604548: 0x19b500  sll         $s6, $t9, 20
    ctx->pc = 0x604548u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 25), 20));
    // 0x60454c: 0x19b540  sll         $s6, $t9, 21
    ctx->pc = 0x60454cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 25), 21));
    // 0x604550: 0x19b680  sll         $s6, $t9, 26
    ctx->pc = 0x604550u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x604554: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604558: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604558u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x60455c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60455cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604560: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604560u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604564: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604564u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604568: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604568u;
    
    // 0x60456c: 0x0  nop
    ctx->pc = 0x60456cu;
    // NOP
    // 0x604570: 0x0  nop
    ctx->pc = 0x604570u;
    // NOP
label_604574:
    // 0x604574: 0x0  nop
    ctx->pc = 0x604574u;
    // NOP
    // 0x604578: 0x1a0870  tge         $zero, $k0, 33
    ctx->pc = 0x604578u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x60457c: 0x1a0fa0  .word       0x001A0FA0                   # add         $at, $zero, $k0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60457cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x604580: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604580u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604584: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604584u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604588: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604588u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60458c: 0x19edd0  .word       0x0019EDD0                   # mfhi        $sp # 001905C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60458cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x604590: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604594: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604598: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60459c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60459cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6045a0: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6045a4: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x6045a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6045a8: 0x1926c0  sll         $a0, $t9, 27
    ctx->pc = 0x6045a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6045ac: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6045b0: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6045b4: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6045b8: 0x19ee80  sll         $sp, $t9, 26
    ctx->pc = 0x6045b8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x6045bc: 0x19ef90  .word       0x0019EF90                   # mfhi        $sp # 00190780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045bcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x6045c0: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x6045c4: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x6045c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6045c8: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x6045c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x6045cc: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x6045d0: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x6045d4: 0x192930  tge         $zero, $t9, 164
    ctx->pc = 0x6045d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6045d8: 0x1a11b0  tge         $zero, $k0, 70
    ctx->pc = 0x6045d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6045dc: 0x19f090  .word       0x0019F090                   # mfhi        $fp # 00190080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045dcu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x6045e0: 0x1a0600  sll         $zero, $k0, 24
    ctx->pc = 0x6045e0u;
    
label_6045e4:
    // 0x6045e4: 0x1a0760  .word       0x001A0760                   # add         $zero, $zero, $k0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6045e8: 0x19ee60  .word       0x0019EE60                   # add         $sp, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x6045ec: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045ecu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6045f0: 0x1a11e0  .word       0x001A11E0                   # add         $v0, $zero, $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6045f4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6045f8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x6045f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x6045fc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6045fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604600: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x604600u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x604604: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x604604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604608: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x60460c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x60460cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604610: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604610u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604614: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604618: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604618u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x60461c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60461cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604620: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604620u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604624: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604624u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604628: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604628u;
    
    // 0x60462c: 0x0  nop
    ctx->pc = 0x60462cu;
    // NOP
    // 0x604630: 0x0  nop
    ctx->pc = 0x604630u;
    // NOP
    // 0x604634: 0x0  nop
    ctx->pc = 0x604634u;
    // NOP
    // 0x604638: 0x1a3bd0  .word       0x001A3BD0                   # mfhi        $a3 # 001A03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604638u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x60463c: 0x1a3c20  .word       0x001A3C20                   # add         $a3, $zero, $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60463cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604640: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604640u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604644: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604644u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604648: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604648u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60464c: 0x1a22d0  .word       0x001A22D0                   # mfhi        $a0 # 001A02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60464cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604650: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604650u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604654: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604658: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60465c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60465cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604660: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604660u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604664: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x604664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604668: 0x1a5d00  sll         $t3, $k0, 20
    ctx->pc = 0x604668u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 26), 20));
    // 0x60466c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60466cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604670: 0x1a53e0  .word       0x001A53E0                   # add         $t2, $zero, $k0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604670u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x604674: 0x1a5540  sll         $t2, $k0, 21
    ctx->pc = 0x604674u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 26), 21));
    // 0x604678: 0x1a5630  tge         $zero, $k0, 344
    ctx->pc = 0x604678u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x60467c: 0x1a5730  tge         $zero, $k0, 348
    ctx->pc = 0x60467cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x604680: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604680u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604684: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604688: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60468c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60468cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604690: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604690u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604694: 0x1a2390  .word       0x001A2390                   # mfhi        $a0 # 001A0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604694u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604698: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x604698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x60469c: 0x1a3ca0  .word       0x001A3CA0                   # add         $a3, $zero, $k0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60469cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6046a0: 0x1a4a40  sll         $t1, $k0, 9
    ctx->pc = 0x6046a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 26), 9));
    // 0x6046a4: 0x1a4990  .word       0x001A4990                   # mfhi        $t1 # 001A0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6046a8: 0x1a4a20  .word       0x001A4A20                   # add         $t1, $zero, $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6046ac: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046acu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6046b0: 0x1a6a90  .word       0x001A6A90                   # mfhi        $t5 # 001A0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046b0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x6046b4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6046b8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x6046b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x6046bc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6046c0: 0x1a6c30  tge         $zero, $k0, 432
    ctx->pc = 0x6046c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6046c4: 0x1a6c70  tge         $zero, $k0, 433
    ctx->pc = 0x6046c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6046c8: 0x1a6cb0  tge         $zero, $k0, 434
    ctx->pc = 0x6046c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6046cc: 0x1a6cf0  tge         $zero, $k0, 435
    ctx->pc = 0x6046ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6046d0: 0x1a6d20  .word       0x001A6D20                   # add         $t5, $zero, $k0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x6046d4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6046d8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x6046d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x6046dc: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x6046dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6046e0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6046e4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6046e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6046e8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x6046e8u;
    
    // 0x6046ec: 0x0  nop
    ctx->pc = 0x6046ecu;
    // NOP
    // 0x6046f0: 0x0  nop
    ctx->pc = 0x6046f0u;
    // NOP
    // 0x6046f4: 0x0  nop
    ctx->pc = 0x6046f4u;
    // NOP
    // 0x6046f8: 0x1aabb0  tge         $zero, $k0, 686
    ctx->pc = 0x6046f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6046fc: 0x1ab300  sll         $s6, $k0, 12
    ctx->pc = 0x6046fcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 26), 12));
    // 0x604700: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604700u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604704: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604704u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604708: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604708u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60470c: 0x1a8210  .word       0x001A8210                   # mfhi        $s0 # 001A0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60470cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x604710: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604710u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604714: 0x1ac560  .word       0x001AC560                   # add         $t8, $zero, $k0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x604718: 0x1ac810  .word       0x001AC810                   # mfhi        $t9 # 001A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604718u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x60471c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60471cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604720: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604724: 0x1a82a0  .word       0x001A82A0                   # add         $s0, $zero, $k0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x604728: 0x1a8330  tge         $zero, $k0, 524
    ctx->pc = 0x604728u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x60472c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60472cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604730: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604730u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604734: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604738: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x60473c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60473cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604740: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604740u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604744: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604748: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60474c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60474cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604750: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604750u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604754: 0x1a8620  .word       0x001A8620                   # add         $s0, $zero, $k0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x604758: 0x1ab3c0  sll         $s6, $k0, 15
    ctx->pc = 0x604758u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 26), 15));
    // 0x60475c: 0x1ab7a0  .word       0x001AB7A0                   # add         $s6, $zero, $k0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60475cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604760: 0x1ac120  .word       0x001AC120                   # add         $t8, $zero, $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604760u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x604764: 0x1ac860  .word       0x001AC860                   # add         $t9, $zero, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x604768: 0x1aca70  tge         $zero, $k0, 809
    ctx->pc = 0x604768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x60476c: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60476cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604770: 0x1ad500  sll         $k0, $k0, 20
    ctx->pc = 0x604770u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 26), 20));
label_604774:
    // 0x604774: 0x1ad5a0  .word       0x001AD5A0                   # add         $k0, $zero, $k0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x604778: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604778u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60477c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60477cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604780: 0x1ae050  .word       0x001AE050                   # mfhi        $gp # 001A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604780u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x604784: 0x1ae090  .word       0x001AE090                   # mfhi        $gp # 001A0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604784u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x604788: 0x1ae3e0  .word       0x001AE3E0                   # add         $gp, $zero, $k0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x60478c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x60478cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604790: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604790u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604794: 0x1ae840  sll         $sp, $k0, 1
    ctx->pc = 0x604794u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 26), 1));
    // 0x604798: 0x1ae800  sll         $sp, $k0, 0
    ctx->pc = 0x604798u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 26), 0));
    // 0x60479c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60479cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6047a0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6047a4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047a4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6047a8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x6047a8u;
    
    // 0x6047ac: 0x0  nop
    ctx->pc = 0x6047acu;
    // NOP
    // 0x6047b0: 0x0  nop
    ctx->pc = 0x6047b0u;
    // NOP
    // 0x6047b4: 0x0  nop
    ctx->pc = 0x6047b4u;
    // NOP
    // 0x6047b8: 0x1af770  tge         $zero, $k0, 989
    ctx->pc = 0x6047b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6047bc: 0x1af820  add         $ra, $zero, $k0
    ctx->pc = 0x6047bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x6047c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6047c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6047c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6047c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6047cc: 0x1af630  tge         $zero, $k0, 984
    ctx->pc = 0x6047ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x6047d0: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6047d4: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x6047d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6047d8: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x6047d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x6047dc: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6047e0: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6047e4: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x6047e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6047e8: 0x1b1550  .word       0x001B1550                   # mfhi        $v0 # 001B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x6047ec: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6047f0: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6047f4: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6047f8: 0x1b16d0  .word       0x001B16D0                   # mfhi        $v0 # 001B06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x6047fc: 0x1b1760  .word       0x001B1760                   # add         $v0, $zero, $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6047fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604800: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604800u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604804: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604808: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60480c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60480cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604810: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604810u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604814: 0x1af730  tge         $zero, $k0, 988
    ctx->pc = 0x604814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x604818: 0x1b5790  .word       0x001B5790                   # mfhi        $t2 # 001B0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604818u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x60481c: 0x1af9a0  .word       0x001AF9A0                   # add         $ra, $zero, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60481cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x604820: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604820u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604824: 0x1b17f0  tge         $zero, $k1, 95
    ctx->pc = 0x604824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604828: 0x1b1800  sll         $v1, $k1, 0
    ctx->pc = 0x604828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 27), 0));
    // 0x60482c: 0x1b5a70  tge         $zero, $k1, 361
    ctx->pc = 0x60482cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604830: 0x1b5c50  .word       0x001B5C50                   # mfhi        $t3 # 001B0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604830u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x604834: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604834u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604838: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604838u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60483c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60483cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604840: 0x1b5b30  tge         $zero, $k1, 364
    ctx->pc = 0x604840u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604844: 0x1b5b70  tge         $zero, $k1, 365
    ctx->pc = 0x604844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604848: 0x1b5bb0  tge         $zero, $k1, 366
    ctx->pc = 0x604848u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x60484c: 0x1b5bf0  tge         $zero, $k1, 367
    ctx->pc = 0x60484cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604850: 0x1b5c20  .word       0x001B5C20                   # add         $t3, $zero, $k1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604850u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x604854: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604858: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604858u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
label_60485c:
    // 0x60485c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604860: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604860u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604864: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604864u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604868: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604868u;
    
    // 0x60486c: 0x0  nop
    ctx->pc = 0x60486cu;
    // NOP
    // 0x604870: 0x0  nop
    ctx->pc = 0x604870u;
    // NOP
    // 0x604874: 0x0  nop
    ctx->pc = 0x604874u;
    // NOP
    // 0x604878: 0x1ba360  .word       0x001BA360                   # add         $s4, $zero, $k1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604878u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x60487c: 0x1ba3a0  .word       0x001BA3A0                   # add         $s4, $zero, $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60487cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x604880: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604880u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604884: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604884u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604888: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604888u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60488c: 0x1b9bf0  tge         $zero, $k1, 623
    ctx->pc = 0x60488cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x604890: 0x1ba400  sll         $s4, $k1, 16
    ctx->pc = 0x604890u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 27), 16));
    // 0x604894: 0x1ba410  .word       0x001BA410                   # mfhi        $s4 # 001B0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604894u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x604898: 0x1ba480  sll         $s4, $k1, 18
    ctx->pc = 0x604898u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 27), 18));
    // 0x60489c: 0x1ba500  sll         $s4, $k1, 20
    ctx->pc = 0x60489cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 27), 20));
    // 0x6048a0: 0x1ba580  sll         $s4, $k1, 22
    ctx->pc = 0x6048a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
    // 0x6048a4: 0x1ba590  .word       0x001BA590                   # mfhi        $s4 # 001B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x6048a8: 0x1ba5d0  .word       0x001BA5D0                   # mfhi        $s4 # 001B05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048a8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x6048ac: 0x1ba610  .word       0x001BA610                   # mfhi        $s4 # 001B0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048acu;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x6048b0: 0x1ba620  .word       0x001BA620                   # add         $s4, $zero, $k1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x6048b4: 0x1ba630  tge         $zero, $k1, 664
    ctx->pc = 0x6048b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048b8: 0x1ba6d0  .word       0x001BA6D0                   # mfhi        $s4 # 001B06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048b8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x6048bc: 0x1ba7b0  tge         $zero, $k1, 670
    ctx->pc = 0x6048bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048c0: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x6048c4: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x6048c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048c8: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x6048c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x6048cc: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x6048d0: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x6048d4: 0x1b9ce0  .word       0x001B9CE0                   # add         $s3, $zero, $k1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x6048d8: 0x1ba8b0  tge         $zero, $k1, 674
    ctx->pc = 0x6048d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048dc: 0x1baeb0  tge         $zero, $k1, 698
    ctx->pc = 0x6048dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048e0: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x6048e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x6048e4: 0x193410  .word       0x00193410                   # mfhi        $a2 # 00190400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x6048e8: 0x1bb1f0  tge         $zero, $k1, 711
    ctx->pc = 0x6048e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
    // 0x6048ec: 0x1baa40  sll         $s5, $k1, 9
    ctx->pc = 0x6048ecu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 27), 9));
    // 0x6048f0: 0x1bbda0  .word       0x001BBDA0                   # add         $s7, $zero, $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x6048f4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6048f8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x6048f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x6048fc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6048fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604900: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x604900u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x604904: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x604904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604908: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604908u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x60490c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x60490cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604910: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604910u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604914: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_604918:
    // 0x604918: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604918u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x60491c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60491cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604920: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604920u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604924: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604924u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604928: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604928u;
    
    // 0x60492c: 0x0  nop
    ctx->pc = 0x60492cu;
    // NOP
    // 0x604930: 0x0  nop
    ctx->pc = 0x604930u;
    // NOP
    // 0x604934: 0x0  nop
    ctx->pc = 0x604934u;
    // NOP
    // 0x604938: 0x1c56f0  tge         $zero, $gp, 347
    ctx->pc = 0x604938u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x60493c: 0x1c70a0  .word       0x001C70A0                   # add         $t6, $zero, $gp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60493cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x604940: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604940u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604944: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604944u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604948: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604948u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60494c: 0x1c5610  .word       0x001C5610                   # mfhi        $t2 # 001C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60494cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x604950: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604950u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604954: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604958: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60495c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60495cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604960: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604960u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604964: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x604964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604968: 0x1c8050  .word       0x001C8050                   # mfhi        $s0 # 001C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604968u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x60496c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60496cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604970: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604974: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604978: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x60497c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60497cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604980: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604984: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604988: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60498c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60498cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604990: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604990u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604994: 0x1c5680  sll         $t2, $gp, 26
    ctx->pc = 0x604994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 28), 26));
    // 0x604998: 0x1c71f0  tge         $zero, $gp, 455
    ctx->pc = 0x604998u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x60499c: 0x1c7220  .word       0x001C7220                   # add         $t6, $zero, $gp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60499cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x6049a0: 0x1c80b0  tge         $zero, $gp, 514
    ctx->pc = 0x6049a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x6049a4: 0x1c8190  .word       0x001C8190                   # mfhi        $s0 # 001C0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x6049a8: 0x1c7630  tge         $zero, $gp, 472
    ctx->pc = 0x6049a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x6049ac: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049acu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6049b0: 0x1c7710  .word       0x001C7710                   # mfhi        $t6 # 001C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049b0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_6049b4:
    // 0x6049b4: 0x1c7650  .word       0x001C7650                   # mfhi        $t6 # 001C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x6049b8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x6049b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x6049bc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6049c0: 0x1c7800  sll         $t7, $gp, 0
    ctx->pc = 0x6049c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 28), 0));
    // 0x6049c4: 0x1c7840  sll         $t7, $gp, 1
    ctx->pc = 0x6049c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 28), 1));
    // 0x6049c8: 0x1c7b70  tge         $zero, $gp, 493
    ctx->pc = 0x6049c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x6049cc: 0x1c7ff0  tge         $zero, $gp, 511
    ctx->pc = 0x6049ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x6049d0: 0x1c8020  add         $s0, $zero, $gp
    ctx->pc = 0x6049d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x6049d4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6049d8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x6049d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x6049dc: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x6049dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6049e0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6049e4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6049e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6049e8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x6049e8u;
    
    // 0x6049ec: 0x0  nop
    ctx->pc = 0x6049ecu;
    // NOP
    // 0x6049f0: 0x0  nop
    ctx->pc = 0x6049f0u;
    // NOP
    // 0x6049f4: 0x0  nop
    ctx->pc = 0x6049f4u;
    // NOP
    // 0x6049f8: 0x1cd6b0  tge         $zero, $gp, 858
    ctx->pc = 0x6049f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x6049fc: 0x0  nop
    ctx->pc = 0x6049fcu;
    // NOP
    // 0x604a00: 0x0  nop
    ctx->pc = 0x604a00u;
    // NOP
label_604a04:
    // 0x604a04: 0x0  nop
    ctx->pc = 0x604a04u;
    // NOP
    // 0x604a08: 0x1ca3c0  sll         $s4, $gp, 15
    ctx->pc = 0x604a08u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 28), 15));
    // 0x604a0c: 0x1ca470  tge         $zero, $gp, 657
    ctx->pc = 0x604a0cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a10: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604a10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a14: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a14u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604a18: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604a1c: 0x1c9910  .word       0x001C9910                   # mfhi        $s3 # 001C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a1cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x604a20: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604a24: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a28: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x604a2c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604a30: 0x1cc480  sll         $t8, $gp, 18
    ctx->pc = 0x604a30u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 18));
    // 0x604a34: 0x1cc4c0  sll         $t8, $gp, 19
    ctx->pc = 0x604a34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 19));
    // 0x604a38: 0x1cc500  sll         $t8, $gp, 20
    ctx->pc = 0x604a38u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 20));
    // 0x604a3c: 0x1cc710  .word       0x001CC710                   # mfhi        $t8 # 001C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a3cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x604a40: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604a44: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604a48: 0x1cc380  sll         $t8, $gp, 14
    ctx->pc = 0x604a48u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 14));
    // 0x604a4c: 0x1cc400  sll         $t8, $gp, 16
    ctx->pc = 0x604a4cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 28), 16));
    // 0x604a50: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604a54: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a58: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604a5c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604a60: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604a64: 0x1c99a0  .word       0x001C99A0                   # add         $s3, $zero, $gp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x604a68: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x604a68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a6c: 0x1ca560  .word       0x001CA560                   # add         $s4, $zero, $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a6cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x604a70: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604a74: 0x1cc0e0  .word       0x001CC0E0                   # add         $t8, $zero, $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x604a78: 0x1cc360  .word       0x001CC360                   # add         $t8, $zero, $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x604a7c: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a7cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604a80: 0x1cd510  .word       0x001CD510                   # mfhi        $k0 # 001C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a80u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x604a84: 0x1cd4b0  tge         $zero, $gp, 850
    ctx->pc = 0x604a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x604a88: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604a88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604a8c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604a90: 0x1cd520  .word       0x001CD520                   # add         $k0, $zero, $gp # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x604a94: 0x1cd560  .word       0x001CD560                   # add         $k0, $zero, $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x604a98: 0x1cd5a0  .word       0x001CD5A0                   # add         $k0, $zero, $gp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x604a9c: 0x1cd5e0  .word       0x001CD5E0                   # add         $k0, $zero, $gp # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604a9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x604aa0: 0x1cd610  .word       0x001CD610                   # mfhi        $k0 # 001C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604aa0u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x604aa4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604aa8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604aac: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604ab0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ab0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604ab4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ab4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604ab8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604ab8u;
    
    // 0x604abc: 0x0  nop
    ctx->pc = 0x604abcu;
    // NOP
    // 0x604ac0: 0x0  nop
    ctx->pc = 0x604ac0u;
    // NOP
    // 0x604ac4: 0x0  nop
    ctx->pc = 0x604ac4u;
    // NOP
    // 0x604ac8: 0x1929d0  .word       0x001929D0                   # mfhi        $a1 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ac8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604acc: 0x192b70  tge         $zero, $t9, 173
    ctx->pc = 0x604accu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ad0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604ad0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ad4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604ad8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604adc: 0x1ceb80  sll         $sp, $gp, 14
    ctx->pc = 0x604adcu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 28), 14));
    // 0x604ae0: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ae0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604ae4: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604ae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ae8: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x604aec: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604aecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604af0: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604af0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604af4: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x604af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604af8: 0x1926c0  sll         $a0, $t9, 27
    ctx->pc = 0x604af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604afc: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604afcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604b00: 0x1d1620  .word       0x001D1620                   # add         $v0, $zero, $sp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b04: 0x1d1660  .word       0x001D1660                   # add         $v0, $zero, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b08: 0x1d16a0  .word       0x001D16A0                   # add         $v0, $zero, $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b0c: 0x1d16e0  .word       0x001D16E0                   # add         $v0, $zero, $sp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b10: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604b14: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604b14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604b18: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604b18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604b1c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b1cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604b20: 0x1d1720  .word       0x001D1720                   # add         $v0, $zero, $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b24: 0x1d0b00  sll         $at, $sp, 12
    ctx->pc = 0x604b24u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 29), 12));
    // 0x604b28: 0x1cee30  tge         $zero, $gp, 952
    ctx->pc = 0x604b28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x604b2c: 0x1cf0d0  .word       0x001CF0D0                   # mfhi        $fp # 001C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b2cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x604b30: 0x1d14d0  .word       0x001D14D0                   # mfhi        $v0 # 001D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x604b34: 0x1d1590  .word       0x001D1590                   # mfhi        $v0 # 001D0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x604b38: 0x1d14b0  tge         $zero, $sp, 82
    ctx->pc = 0x604b38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604b3c: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b3cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604b40: 0x1d1760  .word       0x001D1760                   # add         $v0, $zero, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604b44: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604b48: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604b48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604b4c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b4cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604b50: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x604b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x604b54: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x604b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604b58: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604b5c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x604b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604b60: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b60u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604b64: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604b68: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604b68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604b6c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604b70: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604b74: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b74u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604b78: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604b78u;
    
    // 0x604b7c: 0x0  nop
    ctx->pc = 0x604b7cu;
    // NOP
    // 0x604b80: 0x0  nop
    ctx->pc = 0x604b80u;
    // NOP
    // 0x604b84: 0x0  nop
    ctx->pc = 0x604b84u;
    // NOP
    // 0x604b88: 0x1d1ad0  .word       0x001D1AD0                   # mfhi        $v1 # 001D02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604b8c: 0x1d1b50  .word       0x001D1B50                   # mfhi        $v1 # 001D0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604b90: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604b90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604b94: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604b98: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b98u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604b9c: 0x1d1a20  .word       0x001D1A20                   # add         $v1, $zero, $sp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604b9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x604ba0: 0x1d3a60  .word       0x001D3A60                   # add         $a3, $zero, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ba0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604ba4: 0x1d3aa0  .word       0x001D3AA0                   # add         $a3, $zero, $sp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604ba8: 0x1d3ae0  .word       0x001D3AE0                   # add         $a3, $zero, $sp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604bac: 0x1d3af0  tge         $zero, $sp, 235
    ctx->pc = 0x604bacu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604bb0: 0x1d34a0  .word       0x001D34A0                   # add         $a2, $zero, $sp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x604bb4: 0x1d34e0  .word       0x001D34E0                   # add         $a2, $zero, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x604bb8: 0x1d3520  .word       0x001D3520                   # add         $a2, $zero, $sp # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x604bbc: 0x1d3560  .word       0x001D3560                   # add         $a2, $zero, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bbcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x604bc0: 0x1d3b00  sll         $a3, $sp, 12
    ctx->pc = 0x604bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 29), 12));
    // 0x604bc4: 0x1d3b10  .word       0x001D3B10                   # mfhi        $a3 # 001D0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bc4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604bc8: 0x1d3b20  .word       0x001D3B20                   # add         $a3, $zero, $sp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604bcc: 0x1d3b30  tge         $zero, $sp, 236
    ctx->pc = 0x604bccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604bd0: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604bd4: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604bd8: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604bdc: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bdcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604be0: 0x1d3b40  sll         $a3, $sp, 13
    ctx->pc = 0x604be0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 29), 13));
    // 0x604be4: 0x1d2e40  sll         $a1, $sp, 25
    ctx->pc = 0x604be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 29), 25));
    // 0x604be8: 0x1d1db0  tge         $zero, $sp, 118
    ctx->pc = 0x604be8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604bec: 0x1d2730  tge         $zero, $sp, 156
    ctx->pc = 0x604becu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604bf0: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
label_604bf4:
    // 0x604bf4: 0x1d2fa0  .word       0x001D2FA0                   # add         $a1, $zero, $sp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604bf8: 0x1d3360  .word       0x001D3360                   # add         $a2, $zero, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x604bfc: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604bfcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604c00: 0x1939c0  sll         $a3, $t9, 7
    ctx->pc = 0x604c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 7));
    // 0x604c04: 0x1d39e0  .word       0x001D39E0                   # add         $a3, $zero, $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604c08: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604c0c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604c10: 0x1d3380  sll         $a2, $sp, 14
    ctx->pc = 0x604c10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 29), 14));
    // 0x604c14: 0x1d33c0  sll         $a2, $sp, 15
    ctx->pc = 0x604c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 29), 15));
    // 0x604c18: 0x1d3400  sll         $a2, $sp, 16
    ctx->pc = 0x604c18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 29), 16));
    // 0x604c1c: 0x1d3440  sll         $a2, $sp, 17
    ctx->pc = 0x604c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 29), 17));
    // 0x604c20: 0x1d3470  tge         $zero, $sp, 209
    ctx->pc = 0x604c20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c24: 0x1d3a40  sll         $a3, $sp, 9
    ctx->pc = 0x604c24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 29), 9));
    // 0x604c28: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604c28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604c2c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604c30: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604c34: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c34u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604c38: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604c38u;
    
    // 0x604c3c: 0x0  nop
    ctx->pc = 0x604c3cu;
    // NOP
    // 0x604c40: 0x0  nop
    ctx->pc = 0x604c40u;
    // NOP
    // 0x604c44: 0x0  nop
    ctx->pc = 0x604c44u;
    // NOP
    // 0x604c48: 0x1d40a0  .word       0x001D40A0                   # add         $t0, $zero, $sp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604c4c: 0x1d5b90  .word       0x001D5B90                   # mfhi        $t3 # 001D0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c4cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x604c50: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604c50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c54: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604c58: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c58u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604c5c: 0x1e7070  tge         $zero, $fp, 449
    ctx->pc = 0x604c5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c60: 0x1d6ba0  .word       0x001D6BA0                   # add         $t5, $zero, $sp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x604c64: 0x1d6bb0  tge         $zero, $sp, 430
    ctx->pc = 0x604c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c68: 0x1d6bc0  sll         $t5, $sp, 15
    ctx->pc = 0x604c68u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 29), 15));
    // 0x604c6c: 0x1d6bd0  .word       0x001D6BD0                   # mfhi        $t5 # 001D03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c6cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x604c70: 0x1d6be0  .word       0x001D6BE0                   # add         $t5, $zero, $sp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x604c74: 0x1d6c50  .word       0x001D6C50                   # mfhi        $t5 # 001D0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c74u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x604c78: 0x1d6cc0  sll         $t5, $sp, 19
    ctx->pc = 0x604c78u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 29), 19));
label_604c7c:
    // 0x604c7c: 0x1d6d30  tge         $zero, $sp, 436
    ctx->pc = 0x604c7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c80: 0x1d6da0  .word       0x001D6DA0                   # add         $t5, $zero, $sp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x604c84: 0x1d6e70  tge         $zero, $sp, 441
    ctx->pc = 0x604c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c88: 0x1d6f40  sll         $t5, $sp, 29
    ctx->pc = 0x604c88u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 29), 29));
    // 0x604c8c: 0x1d7010  .word       0x001D7010                   # mfhi        $t6 # 001D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c8cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x604c90: 0x1d70e0  .word       0x001D70E0                   # add         $t6, $zero, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x604c94: 0x1d71b0  tge         $zero, $sp, 454
    ctx->pc = 0x604c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604c98: 0x1d7280  sll         $t6, $sp, 10
    ctx->pc = 0x604c98u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 29), 10));
    // 0x604c9c: 0x1d7350  .word       0x001D7350                   # mfhi        $t6 # 001D0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604c9cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x604ca0: 0x1d7420  .word       0x001D7420                   # add         $t6, $zero, $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ca0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x604ca4: 0x1d8790  .word       0x001D8790                   # mfhi        $s0 # 001D0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ca4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x604ca8: 0x1d7430  tge         $zero, $sp, 464
    ctx->pc = 0x604ca8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604cac: 0x1d74d0  .word       0x001D74D0                   # mfhi        $t6 # 001D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cacu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x604cb0: 0x1d7ca0  .word       0x001D7CA0                   # add         $t7, $zero, $sp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x604cb4: 0x1d7f10  .word       0x001D7F10                   # mfhi        $t7 # 001D0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cb4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x604cb8: 0x1d84d0  .word       0x001D84D0                   # mfhi        $s0 # 001D04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cb8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x604cbc: 0x1d88d0  .word       0x001D88D0                   # mfhi        $s1 # 001D00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cbcu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x604cc0: 0x1d8960  .word       0x001D8960                   # add         $s1, $zero, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x604cc4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cc4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604cc8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604ccc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604cd0: 0x1d84f0  tge         $zero, $sp, 531
    ctx->pc = 0x604cd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604cd4: 0x1d85b0  tge         $zero, $sp, 534
    ctx->pc = 0x604cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604cd8: 0x1d8670  tge         $zero, $sp, 537
    ctx->pc = 0x604cd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604cdc: 0x1d8730  tge         $zero, $sp, 540
    ctx->pc = 0x604cdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ce0: 0x1d8760  .word       0x001D8760                   # add         $s0, $zero, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ce0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x604ce4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604ce8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604cec: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604cf0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cf0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604cf4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604cf4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604cf8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604cf8u;
    
    // 0x604cfc: 0x0  nop
    ctx->pc = 0x604cfcu;
    // NOP
    // 0x604d00: 0x0  nop
    ctx->pc = 0x604d00u;
    // NOP
    // 0x604d04: 0x0  nop
    ctx->pc = 0x604d04u;
    // NOP
    // 0x604d08: 0x1ea2d0  .word       0x001EA2D0                   # mfhi        $s4 # 001E02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d08u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x604d0c: 0x1eae20  .word       0x001EAE20                   # add         $s5, $zero, $fp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x604d10: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604d10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d14: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d14u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604d18: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604d1c: 0x1ea1c0  sll         $s4, $fp, 7
    ctx->pc = 0x604d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
    // 0x604d20: 0x1eb040  sll         $s6, $fp, 1
    ctx->pc = 0x604d20u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x604d24: 0x1eb050  .word       0x001EB050                   # mfhi        $s6 # 001E0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x604d28: 0x1eb060  .word       0x001EB060                   # add         $s6, $zero, $fp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604d2c: 0x1eb070  tge         $zero, $fp, 705
    ctx->pc = 0x604d2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d30: 0x1eb080  sll         $s6, $fp, 2
    ctx->pc = 0x604d30u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x604d34: 0x1eb100  sll         $s6, $fp, 4
    ctx->pc = 0x604d34u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x604d38: 0x1eb180  sll         $s6, $fp, 6
    ctx->pc = 0x604d38u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x604d3c: 0x1eb200  sll         $s6, $fp, 8
    ctx->pc = 0x604d3cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 8));
    // 0x604d40: 0x1eb280  sll         $s6, $fp, 10
    ctx->pc = 0x604d40u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 10));
    // 0x604d44: 0x1eb290  .word       0x001EB290                   # mfhi        $s6 # 001E0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d44u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x604d48: 0x1eb2a0  .word       0x001EB2A0                   # add         $s6, $zero, $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604d4c: 0x1eb2b0  tge         $zero, $fp, 714
    ctx->pc = 0x604d4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d50: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604d54: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d58: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604d5c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604d60: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604d64: 0x1ea270  tge         $zero, $fp, 649
    ctx->pc = 0x604d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d68: 0x1eb2c0  sll         $s6, $fp, 11
    ctx->pc = 0x604d68u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 11));
    // 0x604d6c: 0x1ebab0  tge         $zero, $fp, 746
    ctx->pc = 0x604d6cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d70: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604d74: 0x193410  .word       0x00193410                   # mfhi        $a2 # 00190400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d74u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x604d78: 0x1ed3d0  .word       0x001ED3D0                   # mfhi        $k0 # 001E03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x604d7c: 0x1eb2d0  .word       0x001EB2D0                   # mfhi        $s6 # 001E02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d7cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x604d80: 0x1ed3f0  tge         $zero, $fp, 847
    ctx->pc = 0x604d80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d84: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d84u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604d88: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604d88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604d8c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604d90: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x604d90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x604d94: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x604d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604d98: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604d9c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x604d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604da0: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604da0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604da4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604da4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604da8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604da8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604dac: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604db0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604db0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604db4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604db4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604db8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604db8u;
    
    // 0x604dbc: 0x0  nop
    ctx->pc = 0x604dbcu;
    // NOP
    // 0x604dc0: 0x0  nop
    ctx->pc = 0x604dc0u;
    // NOP
    // 0x604dc4: 0x0  nop
    ctx->pc = 0x604dc4u;
    // NOP
    // 0x604dc8: 0x1f1220  .word       0x001F1220                   # add         $v0, $zero, $ra # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x604dcc: 0x1f3b40  sll         $a3, $ra, 13
    ctx->pc = 0x604dccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 31), 13));
    // 0x604dd0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604dd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604dd4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604dd8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604dd8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604ddc: 0x1f0d10  .word       0x001F0D10                   # mfhi        $at # 001F0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ddcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x604de0: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604de0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604de4: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604de8: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x604dec: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604decu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604df0: 0x1f5a90  .word       0x001F5A90                   # mfhi        $t3 # 001F0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604df0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x604df4: 0x1f5bc0  sll         $t3, $ra, 15
    ctx->pc = 0x604df4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 31), 15));
    // 0x604df8: 0x1f5cf0  tge         $zero, $ra, 371
    ctx->pc = 0x604df8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604dfc: 0x1f5e20  .word       0x001F5E20                   # add         $t3, $zero, $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604dfcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x604e00: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604e04: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604e08: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604e0c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604e10: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604e14: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604e14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e18: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604e1c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e1cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604e20: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604e24: 0x1f0e70  tge         $zero, $ra, 57
    ctx->pc = 0x604e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e28: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x604e28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e2c: 0x1f3bb0  tge         $zero, $ra, 238
    ctx->pc = 0x604e2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e30: 0x1f5f50  .word       0x001F5F50                   # mfhi        $t3 # 001F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e30u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x604e34: 0x1f61a0  .word       0x001F61A0                   # add         $t4, $zero, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x604e38: 0x1f5a70  tge         $zero, $ra, 361
    ctx->pc = 0x604e38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e3c: 0x1f63b0  tge         $zero, $ra, 398
    ctx->pc = 0x604e3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e40: 0x1f6640  sll         $t4, $ra, 25
    ctx->pc = 0x604e40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 31), 25));
    // 0x604e44: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604e48: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604e48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604e4c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e4cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604e50: 0x1f66d0  .word       0x001F66D0                   # mfhi        $t4 # 001F06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e50u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604e54: 0x1f6710  .word       0x001F6710                   # mfhi        $t4 # 001F0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604e58: 0x1f6750  .word       0x001F6750                   # mfhi        $t4 # 001F0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e58u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604e5c: 0x1f6790  .word       0x001F6790                   # mfhi        $t4 # 001F0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e5cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x604e60: 0x1f67c0  sll         $t4, $ra, 31
    ctx->pc = 0x604e60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 31), 31));
    // 0x604e64: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604e68: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604e68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604e6c: 0x1f98b0  tge         $zero, $ra, 610
    ctx->pc = 0x604e6cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e70: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604e74: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e74u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604e78: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604e78u;
    
    // 0x604e7c: 0x0  nop
    ctx->pc = 0x604e7cu;
    // NOP
    // 0x604e80: 0x0  nop
    ctx->pc = 0x604e80u;
    // NOP
    // 0x604e84: 0x0  nop
    ctx->pc = 0x604e84u;
    // NOP
    // 0x604e88: 0x1fa000  sll         $s4, $ra, 0
    ctx->pc = 0x604e88u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
    // 0x604e8c: 0x1fa790  .word       0x001FA790                   # mfhi        $s4 # 001F0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e8cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x604e90: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604e90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604e94: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604e98: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604e98u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604e9c: 0x1f9ec0  sll         $s3, $ra, 27
    ctx->pc = 0x604e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 31), 27));
    // 0x604ea0: 0x1fa910  .word       0x001FA910                   # mfhi        $s5 # 001F0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ea0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x604ea4: 0x1faa50  .word       0x001FAA50                   # mfhi        $s5 # 001F0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ea4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x604ea8: 0x1fab70  tge         $zero, $ra, 685
    ctx->pc = 0x604ea8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604eac: 0x1fac90  .word       0x001FAC90                   # mfhi        $s5 # 001F0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604eacu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x604eb0: 0x1fadc0  sll         $s5, $ra, 23
    ctx->pc = 0x604eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 31), 23));
    // 0x604eb4: 0x1fadd0  .word       0x001FADD0                   # mfhi        $s5 # 001F05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604eb4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x604eb8: 0x1fade0  .word       0x001FADE0                   # add         $s5, $zero, $ra # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x604ebc: 0x1fb030  tge         $zero, $ra, 704
    ctx->pc = 0x604ebcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ec0: 0x1fb040  sll         $s6, $ra, 1
    ctx->pc = 0x604ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 1));
    // 0x604ec4: 0x1fb080  sll         $s6, $ra, 2
    ctx->pc = 0x604ec4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 2));
    // 0x604ec8: 0x1fb0c0  sll         $s6, $ra, 3
    ctx->pc = 0x604ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 3));
    // 0x604ecc: 0x1fb100  sll         $s6, $ra, 4
    ctx->pc = 0x604eccu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 4));
    // 0x604ed0: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ed0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604ed4: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604ed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604ed8: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604edc: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604edcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604ee0: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604ee4: 0x1f9f90  .word       0x001F9F90                   # mfhi        $s3 # 001F0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ee4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x604ee8: 0x1fb140  sll         $s6, $ra, 5
    ctx->pc = 0x604ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 5));
    // 0x604eec: 0x1fb360  .word       0x001FB360                   # add         $s6, $zero, $ra # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604eecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604ef0: 0x193400  sll         $a2, $t9, 16
    ctx->pc = 0x604ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
    // 0x604ef4: 0x193410  .word       0x00193410                   # mfhi        $a2 # 00190400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ef4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x604ef8: 0x1fa8f0  tge         $zero, $ra, 675
    ctx->pc = 0x604ef8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604efc: 0x1fb180  sll         $s6, $ra, 6
    ctx->pc = 0x604efcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 31), 6));
    // 0x604f00: 0x1fcba0  .word       0x001FCBA0                   # add         $t9, $zero, $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x604f04: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604f08: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604f08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604f0c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604f10: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x604f10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x604f14: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x604f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604f18: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604f1c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x604f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x604f20: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f20u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x604f24: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604f28: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604f28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604f2c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604f30: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604f34: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f34u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604f38: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604f38u;
    
    // 0x604f3c: 0x0  nop
    ctx->pc = 0x604f3cu;
    // NOP
    // 0x604f40: 0x0  nop
    ctx->pc = 0x604f40u;
    // NOP
    // 0x604f44: 0x0  nop
    ctx->pc = 0x604f44u;
    // NOP
    // 0x604f48: 0x1ff770  tge         $zero, $ra, 989
    ctx->pc = 0x604f48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604f4c: 0x1ff7c0  sll         $fp, $ra, 31
    ctx->pc = 0x604f4cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 31), 31));
    // 0x604f50: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x604f50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x604f54: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x604f58: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f58u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x604f5c: 0x1ff650  .word       0x001FF650                   # mfhi        $fp # 001F0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f5cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x604f60: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f64: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x604f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604f68: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x604f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x604f6c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x604f70: 0x202720  .word       0x00202720                   # add         $a0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f74: 0x202760  .word       0x00202760                   # add         $a0, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f78: 0x2027a0  .word       0x002027A0                   # add         $a0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f78u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f7c: 0x2027e0  .word       0x002027E0                   # add         $a0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f80: 0x1926e0  .word       0x001926E0                   # add         $a0, $zero, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f84: 0x192760  .word       0x00192760                   # add         $a0, $zero, $t9 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f88: 0x1927e0  .word       0x001927E0                   # add         $a0, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x604f8c: 0x192860  .word       0x00192860                   # add         $a1, $zero, $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604f90: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604f94: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x604f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604f98: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x604f98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x604f9c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604f9cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x604fa0: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fa0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604fa4: 0x1ff730  tge         $zero, $ra, 988
    ctx->pc = 0x604fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
    // 0x604fa8: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x604fa8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x604fac: 0x1ff820  add         $ra, $zero, $ra
    ctx->pc = 0x604facu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x604fb0: 0x200550  .word       0x00200550                   # mfhi        $zero # 00200540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fb0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604fb4: 0x200560  .word       0x00200560                   # add         $zero, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x604fb8: 0x200770  tge         $at, $zero, 29
    ctx->pc = 0x604fb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x604fbc: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fbcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604fc0: 0x202aa0  .word       0x00202AA0                   # add         $a1, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x604fc4: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fc4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x604fc8: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x604fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x604fcc: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x604fd0: 0x202c40  .word       0x00202C40                   # sll         $a1, $zero, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
    // 0x604fd4: 0x202c80  .word       0x00202C80                   # sll         $a1, $zero, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
    // 0x604fd8: 0x202cc0  .word       0x00202CC0                   # sll         $a1, $zero, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
    // 0x604fdc: 0x202d00  .word       0x00202D00                   # sll         $a1, $zero, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
    // 0x604fe0: 0x202d30  tge         $at, $zero, 180
    ctx->pc = 0x604fe0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x604fe4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x604fe8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x604fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x604fec: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x604fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x604ff0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ff0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x604ff4: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x604ff4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x604ff8: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x604ff8u;
    
    // 0x604ffc: 0x0  nop
    ctx->pc = 0x604ffcu;
    // NOP
    // 0x605000: 0x0  nop
    ctx->pc = 0x605000u;
    // NOP
    // 0x605004: 0x0  nop
    ctx->pc = 0x605004u;
    // NOP
    // 0x605008: 0x203ee0  .word       0x00203EE0                   # add         $a3, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605008u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x60500c: 0x204b70  tge         $at, $zero, 301
    ctx->pc = 0x60500cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605010: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605010u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605014: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605014u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605018: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605018u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60501c: 0x203e50  .word       0x00203E50                   # mfhi        $a3 # 00200640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60501cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605020: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605020u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x605024: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x605024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x605028: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x605028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x60502c: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60502cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x605030: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605030u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x605034: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x605034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x605038: 0x204dc0  .word       0x00204DC0                   # sll         $t1, $zero, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605038u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
    // 0x60503c: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60503cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x605040: 0x204ca0  .word       0x00204CA0                   # add         $t1, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605040u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x605044: 0x204cf0  tge         $at, $zero, 307
    ctx->pc = 0x605044u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605048: 0x204d30  tge         $at, $zero, 308
    ctx->pc = 0x605048u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x60504c: 0x204d70  tge         $at, $zero, 309
    ctx->pc = 0x60504cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605050: 0x1928e0  .word       0x001928E0                   # add         $a1, $zero, $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605050u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x605054: 0x1928f0  tge         $zero, $t9, 163
    ctx->pc = 0x605054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x605058: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x605058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60505c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60505cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x605060: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605060u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x605064: 0x204dd0  .word       0x00204DD0                   # mfhi        $t1 # 002005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605064u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605068: 0x192bb0  tge         $zero, $t9, 174
    ctx->pc = 0x605068u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x60506c: 0x204e10  .word       0x00204E10                   # mfhi        $t1 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60506cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605070: 0x2060c0  .word       0x002060C0                   # sll         $t4, $zero, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605070u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
    // 0x605074: 0x2060f0  tge         $at, $zero, 387
    ctx->pc = 0x605074u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605078: 0x206100  .word       0x00206100                   # sll         $t4, $zero, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605078u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
    // 0x60507c: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60507cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605080: 0x207620  .word       0x00207620                   # add         $t6, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605080u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x605084: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605084u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605088: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x605088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60508c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60508cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605090: 0x2076c0  .word       0x002076C0                   # sll         $t6, $zero, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605090u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
    // 0x605094: 0x207700  .word       0x00207700                   # sll         $t6, $zero, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605094u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
    // 0x605098: 0x207740  .word       0x00207740                   # sll         $t6, $zero, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605098u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
    // 0x60509c: 0x207780  .word       0x00207780                   # sll         $t6, $zero, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60509cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
    // 0x6050a0: 0x2077b0  tge         $at, $zero, 478
    ctx->pc = 0x6050a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050a4: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6050a8: 0x194440  sll         $t0, $t9, 17
    ctx->pc = 0x6050a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
    // 0x6050ac: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x6050acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6050b0: 0x191ed0  .word       0x00191ED0                   # mfhi        $v1 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6050b4: 0x2077e0  .word       0x002077E0                   # add         $t6, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x6050b8: 0x207810  .word       0x00207810                   # mfhi        $t7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050b8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x6050bc: 0x0  nop
    ctx->pc = 0x6050bcu;
    // NOP
    // 0x6050c0: 0x0  nop
    ctx->pc = 0x6050c0u;
    // NOP
    // 0x6050c4: 0x0  nop
    ctx->pc = 0x6050c4u;
    // NOP
    // 0x6050c8: 0x2086b0  tge         $at, $zero, 538
    ctx->pc = 0x6050c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050cc: 0x20b270  tge         $at, $zero, 713
    ctx->pc = 0x6050ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6050d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6050d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6050dc: 0x2085d0  .word       0x002085D0                   # mfhi        $s0 # 002005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050dcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x6050e0: 0x192660  .word       0x00192660                   # add         $a0, $zero, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6050e4: 0x192670  tge         $zero, $t9, 153
    ctx->pc = 0x6050e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050e8: 0x192680  sll         $a0, $t9, 26
    ctx->pc = 0x6050e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
    // 0x6050ec: 0x192690  .word       0x00192690                   # mfhi        $a0 # 00190680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6050f0: 0x1926a0  .word       0x001926A0                   # add         $a0, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6050f4: 0x1926b0  tge         $zero, $t9, 154
    ctx->pc = 0x6050f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x6050f8: 0x1926c0  sll         $a0, $t9, 27
    ctx->pc = 0x6050f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x6050fc: 0x1926d0  .word       0x001926D0                   # mfhi        $a0 # 001906C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6050fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x605100: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605100u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x605104: 0x20d690  .word       0x0020D690                   # mfhi        $k0 # 00200680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605104u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x605108: 0x20d710  .word       0x0020D710                   # mfhi        $k0 # 00200700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605108u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x60510c: 0x20d7a0  .word       0x0020D7A0                   # add         $k0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60510cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x605110: 0x20d830  tge         $at, $zero, 864
    ctx->pc = 0x605110u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605114: 0x20d840  .word       0x0020D840                   # sll         $k1, $zero, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605114u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
    // 0x605118: 0x192900  sll         $a1, $t9, 4
    ctx->pc = 0x605118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x60511c: 0x192910  .word       0x00192910                   # mfhi        $a1 # 00190100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60511cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x605120: 0x192920  .word       0x00192920                   # add         $a1, $zero, $t9 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605120u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x605124: 0x20dbb0  tge         $at, $zero, 878
    ctx->pc = 0x605124u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605128: 0x20d850  .word       0x0020D850                   # mfhi        $k1 # 00200040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605128u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x60512c: 0x20b870  tge         $at, $zero, 737
    ctx->pc = 0x60512cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605130: 0x20d310  .word       0x0020D310                   # mfhi        $k0 # 00200300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605130u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x605134: 0x20d470  tge         $at, $zero, 849
    ctx->pc = 0x605134u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x605138: 0x20d5f0  tge         $at, $zero, 855
    ctx->pc = 0x605138u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x60513c: 0x193990  .word       0x00193990                   # mfhi        $a3 # 00190180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60513cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605140: 0x20db10  .word       0x0020DB10                   # mfhi        $k1 # 00200300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605140u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x605144: 0x1939d0  .word       0x001939D0                   # mfhi        $a3 # 001901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605144u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605148: 0x193a00  sll         $a3, $t9, 8
    ctx->pc = 0x605148u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x60514c: 0x193a20  .word       0x00193A20                   # add         $a3, $zero, $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60514cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605150: 0x193a40  sll         $a3, $t9, 9
    ctx->pc = 0x605150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 9));
    // 0x605154: 0x193cb0  tge         $zero, $t9, 242
    ctx->pc = 0x605154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x605158: 0x193fe0  .word       0x00193FE0                   # add         $a3, $zero, $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605158u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x60515c: 0x1943c0  sll         $t0, $t9, 15
    ctx->pc = 0x60515cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 15));
    // 0x605160: 0x1943d0  .word       0x001943D0                   # mfhi        $t0 # 001903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605160u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605164: 0x194420  .word       0x00194420                   # add         $t0, $zero, $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605168: 0x20dcc0  .word       0x0020DCC0                   # sll         $k1, $zero, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605168u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
    // 0x60516c: 0x191ec0  sll         $v1, $t9, 27
    ctx->pc = 0x60516cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 27));
    // 0x605170: 0x20e2c0  .word       0x0020E2C0                   # sll         $gp, $zero, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605170u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
    // 0x605174: 0x170110  .word       0x00170110                   # mfhi        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605174u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x605178: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x605178u;
    
    // 0x60517c: 0x0  nop
    ctx->pc = 0x60517cu;
    // NOP
    // 0x605180: 0x0  nop
    ctx->pc = 0x605180u;
    // NOP
    // 0x605184: 0x0  nop
    ctx->pc = 0x605184u;
    // NOP
    // 0x605188: 0x2128a0  .word       0x002128A0                   # add         $a1, $at, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605188u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x60518c: 0x0  nop
    ctx->pc = 0x60518cu;
    // NOP
    // 0x605190: 0x0  nop
    ctx->pc = 0x605190u;
    // NOP
    // 0x605194: 0x0  nop
    ctx->pc = 0x605194u;
    // NOP
    // 0x605198: 0x213b00  .word       0x00213B00                   # sll         $a3, $at, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
    // 0x60519c: 0x213b30  tge         $at, $at, 236
    ctx->pc = 0x60519cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051a0: 0x213b60  .word       0x00213B60                   # add         $a3, $at, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6051a4: 0x213b90  .word       0x00213B90                   # mfhi        $a3 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051a4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6051a8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6051ac: 0x213a90  .word       0x00213A90                   # mfhi        $a3 # 00210280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051acu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x6051b0: 0x0  nop
    ctx->pc = 0x6051b0u;
    // NOP
    // 0x6051b4: 0x0  nop
    ctx->pc = 0x6051b4u;
    // NOP
    // 0x6051b8: 0x214080  .word       0x00214080                   # sll         $t0, $at, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
    // 0x6051bc: 0x214810  .word       0x00214810                   # mfhi        $t1 # 00210000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051bcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6051c0: 0x214ab0  tge         $at, $at, 298
    ctx->pc = 0x6051c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051c4: 0x214ae0  .word       0x00214AE0                   # add         $t1, $at, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6051c8: 0x214b10  .word       0x00214B10                   # mfhi        $t1 # 00210300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051c8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6051cc: 0x213ff0  tge         $at, $at, 255
    ctx->pc = 0x6051ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051d0: 0x214b40  .word       0x00214B40                   # sll         $t1, $at, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
    // 0x6051d4: 0x214b50  .word       0x00214B50                   # mfhi        $t1 # 00210340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6051d8: 0x214b70  tge         $at, $at, 301
    ctx->pc = 0x6051d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051dc: 0x214b90  .word       0x00214B90                   # mfhi        $t1 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051dcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6051e0: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6051e4: 0x214be0  .word       0x00214BE0                   # add         $t1, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6051e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6051e8: 0x214bf0  tge         $at, $at, 303
    ctx->pc = 0x6051e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051ec: 0x0  nop
    ctx->pc = 0x6051ecu;
    // NOP
    // 0x6051f0: 0x0  nop
    ctx->pc = 0x6051f0u;
    // NOP
    // 0x6051f4: 0x0  nop
    ctx->pc = 0x6051f4u;
    // NOP
    // 0x6051f8: 0x215370  tge         $at, $at, 333
    ctx->pc = 0x6051f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x6051fc: 0x2153b0  tge         $at, $at, 334
    ctx->pc = 0x6051fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x605200: 0x2153e0  .word       0x002153E0                   # add         $t2, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605200u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605204: 0x215410  .word       0x00215410                   # mfhi        $t2 # 00210400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605204u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x605208: 0x215440  .word       0x00215440                   # sll         $t2, $at, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605208u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
    // 0x60520c: 0x2152e0  .word       0x002152E0                   # add         $t2, $at, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60520cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605210: 0x0  nop
    ctx->pc = 0x605210u;
    // NOP
    // 0x605214: 0x0  nop
    ctx->pc = 0x605214u;
    // NOP
    // 0x605218: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605218u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60521c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60521cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605220: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605224: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605224u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605228: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605228u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60522c: 0x216990  .word       0x00216990                   # mfhi        $t5 # 00210180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60522cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605230: 0x0  nop
    ctx->pc = 0x605230u;
    // NOP
    // 0x605234: 0x0  nop
    ctx->pc = 0x605234u;
    // NOP
    // 0x605238: 0x217b00  .word       0x00217B00                   # sll         $t7, $at, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605238u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
    // 0x60523c: 0x217b30  tge         $at, $at, 492
    ctx->pc = 0x60523cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x605240: 0x217db0  tge         $at, $at, 502
    ctx->pc = 0x605240u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x605244: 0x217e10  .word       0x00217E10                   # mfhi        $t7 # 00210600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605244u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x605248: 0x217e40  .word       0x00217E40                   # sll         $t7, $at, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605248u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
    // 0x60524c: 0x217a70  tge         $at, $at, 489
    ctx->pc = 0x60524cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x605250: 0x0  nop
    ctx->pc = 0x605250u;
    // NOP
    // 0x605254: 0x0  nop
    ctx->pc = 0x605254u;
    // NOP
    // 0x605258: 0x218680  .word       0x00218680                   # sll         $s0, $at, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605258u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
    // 0x60525c: 0x220420  .word       0x00220420                   # add         $zero, $at, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60525cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605260: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x605260u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605264: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605264u;
    
    // 0x605268: 0x2204d0  .word       0x002204D0                   # mfhi        $zero # 002204C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605268u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x60526c: 0x2204e0  .word       0x002204E0                   # add         $zero, $at, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60526cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605270: 0x220500  .word       0x00220500                   # sll         $zero, $v0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605270u;
    
    // 0x605274: 0x220520  .word       0x00220520                   # add         $zero, $at, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605274u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605278: 0x220540  .word       0x00220540                   # sll         $zero, $v0, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605278u;
    
    // 0x60527c: 0x220560  .word       0x00220560                   # add         $zero, $at, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60527cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605280: 0x220580  .word       0x00220580                   # sll         $zero, $v0, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605280u;
    
    // 0x605284: 0x2205a0  .word       0x002205A0                   # add         $zero, $at, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605284u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605288: 0x220620  .word       0x00220620                   # add         $zero, $at, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605288u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x60528c: 0x220690  .word       0x00220690                   # mfhi        $zero # 00220680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60528cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x605290: 0x220700  .word       0x00220700                   # sll         $zero, $v0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605290u;
    
    // 0x605294: 0x220770  tge         $at, $v0, 29
    ctx->pc = 0x605294u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605298: 0x2207e0  .word       0x002207E0                   # add         $zero, $at, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605298u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x60529c: 0x220800  .word       0x00220800                   # sll         $at, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60529cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x6052a0: 0x0  nop
    ctx->pc = 0x6052a0u;
    // NOP
    // 0x6052a4: 0x0  nop
    ctx->pc = 0x6052a4u;
    // NOP
    // 0x6052a8: 0x221ed0  .word       0x00221ED0                   # mfhi        $v1 # 002206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x6052ac: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6052b0: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x6052b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6052b4: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052b4u;
    
    // 0x6052b8: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052b8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6052bc: 0x224130  tge         $at, $v0, 260
    ctx->pc = 0x6052bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6052c0: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052c0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6052c4: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6052c8: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6052cc: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x6052ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6052d0: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052d0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6052d4: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6052d8: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x6052dc: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x6052e0: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x6052e4: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x6052e8: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x6052e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6052ec: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_6052f0:
    // 0x6052f0: 0x0  nop
    ctx->pc = 0x6052f0u;
    // NOP
    // 0x6052f4: 0x0  nop
    ctx->pc = 0x6052f4u;
    // NOP
    // 0x6052f8: 0x225d90  .word       0x00225D90                   # mfhi        $t3 # 00220580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6052f8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x6052fc: 0x225df0  tge         $at, $v0, 375
    ctx->pc = 0x6052fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605300: 0x225e40  .word       0x00225E40                   # sll         $t3, $v0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605300u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x605304: 0x225e70  tge         $at, $v0, 377
    ctx->pc = 0x605304u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605308: 0x225ed0  .word       0x00225ED0                   # mfhi        $t3 # 002206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605308u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x60530c: 0x225f20  .word       0x00225F20                   # add         $t3, $at, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60530cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x605310: 0x225f80  .word       0x00225F80                   # sll         $t3, $v0, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605310u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
    // 0x605314: 0x225fd0  .word       0x00225FD0                   # mfhi        $t3 # 002207C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605314u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x605318: 0x226050  .word       0x00226050                   # mfhi        $t4 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605318u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x60531c: 0x2260a0  .word       0x002260A0                   # add         $t4, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60531cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x605320: 0x2267b0  tge         $at, $v0, 414
    ctx->pc = 0x605320u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605324: 0x0  nop
    ctx->pc = 0x605324u;
    // NOP
    // 0x605328: 0x0  nop
    ctx->pc = 0x605328u;
    // NOP
label_60532c:
    // 0x60532c: 0x0  nop
    ctx->pc = 0x60532cu;
    // NOP
    // 0x605330: 0x0  nop
    ctx->pc = 0x605330u;
    // NOP
    // 0x605334: 0x0  nop
    ctx->pc = 0x605334u;
    // NOP
    // 0x605338: 0x227dd0  .word       0x00227DD0                   # mfhi        $t7 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605338u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x60533c: 0x2281b0  tge         $at, $v0, 518
    ctx->pc = 0x60533cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605340: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605340u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605344: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605344u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605348: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605348u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60534c: 0x228920  .word       0x00228920                   # add         $s1, $at, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60534cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x605350: 0x0  nop
    ctx->pc = 0x605350u;
    // NOP
    // 0x605354: 0x0  nop
    ctx->pc = 0x605354u;
    // NOP
    // 0x605358: 0x22cc10  .word       0x0022CC10                   # mfhi        $t9 # 00220400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605358u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x60535c: 0x22cc40  .word       0x0022CC40                   # sll         $t9, $v0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60535cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x605360: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605360u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605364: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605364u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605368: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605368u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60536c: 0x22d490  .word       0x0022D490                   # mfhi        $k0 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60536cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x605370: 0x22d4e0  .word       0x0022D4E0                   # add         $k0, $at, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605370u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x605374: 0x0  nop
    ctx->pc = 0x605374u;
    // NOP
    // 0x605378: 0x0  nop
    ctx->pc = 0x605378u;
    // NOP
    // 0x60537c: 0x0  nop
    ctx->pc = 0x60537cu;
    // NOP
    // 0x605380: 0x0  nop
    ctx->pc = 0x605380u;
    // NOP
    // 0x605384: 0x0  nop
    ctx->pc = 0x605384u;
    // NOP
    // 0x605388: 0x232fe0  .word       0x00232FE0                   # add         $a1, $at, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605388u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x60538c: 0x233020  add         $a2, $at, $v1
    ctx->pc = 0x60538cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x605390: 0x233060  .word       0x00233060                   # add         $a2, $at, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605390u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x605394: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605394u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605398: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605398u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60539c: 0x232f50  .word       0x00232F50                   # mfhi        $a1 # 00230740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60539cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x6053a0: 0x2333d0  .word       0x002333D0                   # mfhi        $a2 # 002303C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053a0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x6053a4: 0x0  nop
    ctx->pc = 0x6053a4u;
    // NOP
    // 0x6053a8: 0x0  nop
    ctx->pc = 0x6053a8u;
    // NOP
    // 0x6053ac: 0x0  nop
    ctx->pc = 0x6053acu;
    // NOP
    // 0x6053b0: 0x0  nop
    ctx->pc = 0x6053b0u;
    // NOP
    // 0x6053b4: 0x0  nop
    ctx->pc = 0x6053b4u;
    // NOP
    // 0x6053b8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6053b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6053bc: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6053c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6053c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6053c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6053c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6053cc: 0x233430  tge         $at, $v1, 208
    ctx->pc = 0x6053ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6053d0: 0x233570  tge         $at, $v1, 213
    ctx->pc = 0x6053d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6053d4: 0x233510  .word       0x00233510                   # mfhi        $a2 # 00230500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x6053d8: 0x0  nop
    ctx->pc = 0x6053d8u;
    // NOP
    // 0x6053dc: 0x0  nop
    ctx->pc = 0x6053dcu;
    // NOP
    // 0x6053e0: 0x0  nop
    ctx->pc = 0x6053e0u;
    // NOP
    // 0x6053e4: 0x0  nop
    ctx->pc = 0x6053e4u;
    // NOP
    // 0x6053e8: 0x234040  .word       0x00234040                   # sll         $t0, $v1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x6053ec: 0x234220  .word       0x00234220                   # add         $t0, $at, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x6053f0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6053f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6053f4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6053f8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6053f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6053fc: 0x0  nop
    ctx->pc = 0x6053fcu;
    // NOP
    // 0x605400: 0x0  nop
    ctx->pc = 0x605400u;
    // NOP
    // 0x605404: 0x0  nop
    ctx->pc = 0x605404u;
    // NOP
    // 0x605408: 0x234ae0  .word       0x00234AE0                   # add         $t1, $at, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605408u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x60540c: 0x234c10  .word       0x00234C10                   # mfhi        $t1 # 00230400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60540cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605410: 0x0  nop
    ctx->pc = 0x605410u;
    // NOP
    // 0x605414: 0x0  nop
    ctx->pc = 0x605414u;
    // NOP
    // 0x605418: 0x235170  tge         $at, $v1, 325
    ctx->pc = 0x605418u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60541c: 0x2351b0  tge         $at, $v1, 326
    ctx->pc = 0x60541cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605420: 0x2351f0  tge         $at, $v1, 327
    ctx->pc = 0x605420u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605424: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605424u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605428: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605428u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60542c: 0x2350e0  .word       0x002350E0                   # add         $t2, $at, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60542cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605430: 0x235560  .word       0x00235560                   # add         $t2, $at, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605430u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605434: 0x0  nop
    ctx->pc = 0x605434u;
    // NOP
    // 0x605438: 0x0  nop
    ctx->pc = 0x605438u;
    // NOP
    // 0x60543c: 0x0  nop
    ctx->pc = 0x60543cu;
    // NOP
    // 0x605440: 0x0  nop
    ctx->pc = 0x605440u;
    // NOP
    // 0x605444: 0x0  nop
    ctx->pc = 0x605444u;
    // NOP
    // 0x605448: 0x2355d0  .word       0x002355D0                   # mfhi        $t2 # 002305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605448u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x60544c: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60544cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605450: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x605450u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605454: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605454u;
    
    // 0x605458: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605458u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x60545c: 0x224130  tge         $at, $v0, 260
    ctx->pc = 0x60545cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605460: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605460u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605464: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605464u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605468: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605468u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x60546c: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x60546cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605470: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605470u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605474: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605474u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605478: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605478u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x60547c: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60547cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x605480: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605480u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x605484: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605484u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x605488: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x605488u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x60548c: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60548cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x605490: 0x2356c0  .word       0x002356C0                   # sll         $t2, $v1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605490u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
    // 0x605494: 0x0  nop
    ctx->pc = 0x605494u;
    // NOP
    // 0x605498: 0x0  nop
    ctx->pc = 0x605498u;
    // NOP
    // 0x60549c: 0x0  nop
    ctx->pc = 0x60549cu;
    // NOP
    // 0x6054a0: 0x0  nop
    ctx->pc = 0x6054a0u;
    // NOP
    // 0x6054a4: 0x0  nop
    ctx->pc = 0x6054a4u;
    // NOP
    // 0x6054a8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6054a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054ac: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6054b0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6054b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054b4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6054b8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6054bc: 0x2359f0  tge         $at, $v1, 359
    ctx->pc = 0x6054bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054c0: 0x235ad0  .word       0x00235AD0                   # mfhi        $t3 # 002302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054c0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x6054c4: 0x0  nop
    ctx->pc = 0x6054c4u;
    // NOP
    // 0x6054c8: 0x0  nop
    ctx->pc = 0x6054c8u;
    // NOP
    // 0x6054cc: 0x0  nop
    ctx->pc = 0x6054ccu;
    // NOP
    // 0x6054d0: 0x0  nop
    ctx->pc = 0x6054d0u;
    // NOP
    // 0x6054d4: 0x0  nop
    ctx->pc = 0x6054d4u;
    // NOP
    // 0x6054d8: 0x235b30  tge         $at, $v1, 364
    ctx->pc = 0x6054d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054dc: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6054e0: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x6054e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054e4: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054e4u;
    
    // 0x6054e8: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054e8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6054ec: 0x224130  tge         $at, $v0, 260
    ctx->pc = 0x6054ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6054f0: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054f0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6054f4: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6054f8: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6054f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6054fc: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x6054fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605500: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605500u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605504: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605504u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605508: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605508u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x60550c: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60550cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x605510: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x605514: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605514u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x605518: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x605518u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x60551c: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60551cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x605520: 0x0  nop
    ctx->pc = 0x605520u;
    // NOP
    // 0x605524: 0x0  nop
    ctx->pc = 0x605524u;
    // NOP
    // 0x605528: 0x235d30  tge         $at, $v1, 372
    ctx->pc = 0x605528u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60552c: 0x235f30  tge         $at, $v1, 380
    ctx->pc = 0x60552cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605530: 0x236230  tge         $at, $v1, 392
    ctx->pc = 0x605530u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605534: 0x2362a0  .word       0x002362A0                   # add         $t4, $at, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605534u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x605538: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605538u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60553c: 0x0  nop
    ctx->pc = 0x60553cu;
    // NOP
    // 0x605540: 0x0  nop
    ctx->pc = 0x605540u;
    // NOP
    // 0x605544: 0x0  nop
    ctx->pc = 0x605544u;
    // NOP
    // 0x605548: 0x236a20  .word       0x00236A20                   # add         $t5, $at, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605548u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x60554c: 0x0  nop
    ctx->pc = 0x60554cu;
    // NOP
    // 0x605550: 0x0  nop
    ctx->pc = 0x605550u;
    // NOP
    // 0x605554: 0x0  nop
    ctx->pc = 0x605554u;
    // NOP
    // 0x605558: 0x0  nop
    ctx->pc = 0x605558u;
    // NOP
    // 0x60555c: 0x0  nop
    ctx->pc = 0x60555cu;
    // NOP
    // 0x605560: 0x0  nop
    ctx->pc = 0x605560u;
    // NOP
    // 0x605564: 0x0  nop
    ctx->pc = 0x605564u;
    // NOP
    // 0x605568: 0x236b20  .word       0x00236B20                   # add         $t5, $at, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605568u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x60556c: 0x236b90  .word       0x00236B90                   # mfhi        $t5 # 00230380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60556cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605570: 0x236c80  .word       0x00236C80                   # sll         $t5, $v1, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605570u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
    // 0x605574: 0x236e90  .word       0x00236E90                   # mfhi        $t5 # 00230680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605574u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605578: 0x0  nop
    ctx->pc = 0x605578u;
    // NOP
    // 0x60557c: 0x0  nop
    ctx->pc = 0x60557cu;
    // NOP
    // 0x605580: 0x0  nop
    ctx->pc = 0x605580u;
    // NOP
    // 0x605584: 0x0  nop
    ctx->pc = 0x605584u;
    // NOP
    // 0x605588: 0x237520  .word       0x00237520                   # add         $t6, $at, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605588u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x60558c: 0x237020  add         $t6, $at, $v1
    ctx->pc = 0x60558cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x605590: 0x237050  .word       0x00237050                   # mfhi        $t6 # 00230040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605590u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x605594: 0x2372b0  tge         $at, $v1, 458
    ctx->pc = 0x605594u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605598: 0x0  nop
    ctx->pc = 0x605598u;
    // NOP
    // 0x60559c: 0x0  nop
    ctx->pc = 0x60559cu;
    // NOP
    // 0x6055a0: 0x0  nop
    ctx->pc = 0x6055a0u;
    // NOP
    // 0x6055a4: 0x0  nop
    ctx->pc = 0x6055a4u;
    // NOP
    // 0x6055a8: 0x237650  .word       0x00237650                   # mfhi        $t6 # 00230640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055a8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x6055ac: 0x237700  .word       0x00237700                   # sll         $t6, $v1, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x6055b0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6055b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6055b4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6055b8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6055bc: 0x0  nop
    ctx->pc = 0x6055bcu;
    // NOP
    // 0x6055c0: 0x0  nop
    ctx->pc = 0x6055c0u;
    // NOP
    // 0x6055c4: 0x0  nop
    ctx->pc = 0x6055c4u;
    // NOP
    // 0x6055c8: 0x239100  .word       0x00239100                   # sll         $s2, $v1, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x6055cc: 0x2391e0  .word       0x002391E0                   # add         $s2, $at, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x6055d0: 0x2392c0  .word       0x002392C0                   # sll         $s2, $v1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x6055d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6055d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6055dc: 0x239070  tge         $at, $v1, 577
    ctx->pc = 0x6055dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6055e0: 0x0  nop
    ctx->pc = 0x6055e0u;
    // NOP
    // 0x6055e4: 0x0  nop
    ctx->pc = 0x6055e4u;
    // NOP
    // 0x6055e8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6055e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6055ec: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6055f0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6055f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6055f4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6055f8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6055f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6055fc: 0x0  nop
    ctx->pc = 0x6055fcu;
    // NOP
    // 0x605600: 0x0  nop
    ctx->pc = 0x605600u;
    // NOP
    // 0x605604: 0x0  nop
    ctx->pc = 0x605604u;
    // NOP
    // 0x605608: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605608u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60560c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60560cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605610: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605610u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605614: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605614u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605618: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605618u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60561c: 0x23b630  tge         $at, $v1, 728
    ctx->pc = 0x60561cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605620: 0x23b6c0  .word       0x0023B6C0                   # sll         $s6, $v1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605620u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
    // 0x605624: 0x23b720  .word       0x0023B720                   # add         $s6, $at, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605624u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605628: 0x0  nop
    ctx->pc = 0x605628u;
    // NOP
    // 0x60562c: 0x0  nop
    ctx->pc = 0x60562cu;
    // NOP
    // 0x605630: 0x0  nop
    ctx->pc = 0x605630u;
    // NOP
    // 0x605634: 0x0  nop
    ctx->pc = 0x605634u;
    // NOP
    // 0x605638: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605638u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x60563c: 0x23b9f0  tge         $at, $v1, 743
    ctx->pc = 0x60563cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605640: 0x23bb50  .word       0x0023BB50                   # mfhi        $s7 # 00230340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605640u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x605644: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605644u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605648: 0x23bb80  .word       0x0023BB80                   # sll         $s7, $v1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605648u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x60564c: 0x23b8a0  .word       0x0023B8A0                   # add         $s7, $at, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60564cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x605650: 0x23bbb0  tge         $at, $v1, 750
    ctx->pc = 0x605650u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605654: 0x23bc30  tge         $at, $v1, 752
    ctx->pc = 0x605654u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605658: 0x0  nop
    ctx->pc = 0x605658u;
    // NOP
    // 0x60565c: 0x0  nop
    ctx->pc = 0x60565cu;
    // NOP
    // 0x605660: 0x0  nop
    ctx->pc = 0x605660u;
    // NOP
    // 0x605664: 0x0  nop
    ctx->pc = 0x605664u;
    // NOP
    // 0x605668: 0x23c810  .word       0x0023C810                   # mfhi        $t9 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605668u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x60566c: 0x23c840  .word       0x0023C840                   # sll         $t9, $v1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60566cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x605670: 0x23c870  tge         $at, $v1, 801
    ctx->pc = 0x605670u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605674: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605674u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605678: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605678u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60567c: 0x23c770  tge         $at, $v1, 797
    ctx->pc = 0x60567cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605680: 0x0  nop
    ctx->pc = 0x605680u;
    // NOP
    // 0x605684: 0x0  nop
    ctx->pc = 0x605684u;
    // NOP
    // 0x605688: 0x23f7e0  .word       0x0023F7E0                   # add         $fp, $at, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605688u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x60568c: 0x23f820  add         $ra, $at, $v1
    ctx->pc = 0x60568cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x605690: 0x23f860  .word       0x0023F860                   # add         $ra, $at, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605690u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x605694: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605694u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605698: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605698u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x60569c: 0x23f750  .word       0x0023F750                   # mfhi        $fp # 00230740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60569cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x6056a0: 0x0  nop
    ctx->pc = 0x6056a0u;
    // NOP
    // 0x6056a4: 0x0  nop
    ctx->pc = 0x6056a4u;
    // NOP
    // 0x6056a8: 0x240330  tge         $at, $a0, 12
    ctx->pc = 0x6056a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6056ac: 0x240550  .word       0x00240550                   # mfhi        $zero # 00240540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056acu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6056b0: 0x240800  .word       0x00240800                   # sll         $at, $a0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056b0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x6056b4: 0x240930  tge         $at, $a0, 36
    ctx->pc = 0x6056b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6056b8: 0x240960  .word       0x00240960                   # add         $at, $at, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x6056bc: 0x2402a0  .word       0x002402A0                   # add         $zero, $at, $a0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x6056c0: 0x240990  .word       0x00240990                   # mfhi        $at # 00240180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056c0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x6056c4: 0x240a30  tge         $at, $a0, 40
    ctx->pc = 0x6056c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6056c8: 0x241050  .word       0x00241050                   # mfhi        $v0 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x6056cc: 0x242380  .word       0x00242380                   # sll         $a0, $a0, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
    // 0x6056d0: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6056d4: 0x241440  .word       0x00241440                   # sll         $v0, $a0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 17));
    // 0x6056d8: 0x2414e0  .word       0x002414E0                   # add         $v0, $at, $a0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x6056dc: 0x0  nop
    ctx->pc = 0x6056dcu;
    // NOP
    // 0x6056e0: 0x0  nop
    ctx->pc = 0x6056e0u;
    // NOP
    // 0x6056e4: 0x0  nop
    ctx->pc = 0x6056e4u;
    // NOP
    // 0x6056e8: 0x243640  .word       0x00243640                   # sll         $a2, $a0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 25));
    // 0x6056ec: 0x243670  tge         $at, $a0, 217
    ctx->pc = 0x6056ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6056f0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6056f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6056f4: 0x2436e0  .word       0x002436E0                   # add         $a2, $at, $a0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x6056f8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6056f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6056fc: 0x242af0  tge         $at, $a0, 171
    ctx->pc = 0x6056fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605700: 0x2436b0  tge         $at, $a0, 218
    ctx->pc = 0x605700u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605704: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605704u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605708: 0x0  nop
    ctx->pc = 0x605708u;
    // NOP
    // 0x60570c: 0x0  nop
    ctx->pc = 0x60570cu;
    // NOP
    // 0x605710: 0x0  nop
    ctx->pc = 0x605710u;
    // NOP
    // 0x605714: 0x0  nop
    ctx->pc = 0x605714u;
    // NOP
    // 0x605718: 0x243a80  .word       0x00243A80                   # sll         $a3, $a0, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x60571c: 0x243ad0  .word       0x00243AD0                   # mfhi        $a3 # 002402C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60571cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605720: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605720u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605724: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605724u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605728: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605728u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60572c:
    // 0x60572c: 0x243a10  .word       0x00243A10                   # mfhi        $a3 # 00240200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60572cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605730: 0x243b20  .word       0x00243B20                   # add         $a3, $at, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605730u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605734: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605734u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605738: 0x0  nop
    ctx->pc = 0x605738u;
    // NOP
    // 0x60573c: 0x0  nop
    ctx->pc = 0x60573cu;
    // NOP
    // 0x605740: 0x0  nop
    ctx->pc = 0x605740u;
    // NOP
    // 0x605744: 0x0  nop
    ctx->pc = 0x605744u;
    // NOP
    // 0x605748: 0x244690  .word       0x00244690                   # mfhi        $t0 # 00240680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605748u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x60574c: 0x2446f0  tge         $at, $a0, 283
    ctx->pc = 0x60574cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605750: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605750u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605754: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605754u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605758: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60575c: 0x244620  .word       0x00244620                   # add         $t0, $at, $a0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60575cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605760: 0x244770  tge         $at, $a0, 285
    ctx->pc = 0x605760u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605764: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605764u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605768: 0x0  nop
    ctx->pc = 0x605768u;
    // NOP
    // 0x60576c: 0x0  nop
    ctx->pc = 0x60576cu;
    // NOP
    // 0x605770: 0x0  nop
    ctx->pc = 0x605770u;
    // NOP
    // 0x605774: 0x0  nop
    ctx->pc = 0x605774u;
    // NOP
label_605778:
    // 0x605778: 0x2448d0  .word       0x002448D0                   # mfhi        $t1 # 002400C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605778u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x60577c: 0x244940  .word       0x00244940                   # sll         $t1, $a0, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60577cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x605780: 0x2449a0  .word       0x002449A0                   # add         $t1, $at, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605780u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x605784: 0x244b60  .word       0x00244B60                   # add         $t1, $at, $a0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605784u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x605788: 0x215440  .word       0x00215440                   # sll         $t2, $at, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605788u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
    // 0x60578c: 0x104370  tge         $zero, $s0, 269
    ctx->pc = 0x60578cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x605790: 0x2449d0  .word       0x002449D0                   # mfhi        $t1 # 002401C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605790u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605794: 0x0  nop
    ctx->pc = 0x605794u;
    // NOP
    // 0x605798: 0x0  nop
    ctx->pc = 0x605798u;
    // NOP
    // 0x60579c: 0x0  nop
    ctx->pc = 0x60579cu;
    // NOP
    // 0x6057a0: 0x0  nop
    ctx->pc = 0x6057a0u;
    // NOP
    // 0x6057a4: 0x0  nop
    ctx->pc = 0x6057a4u;
    // NOP
    // 0x6057a8: 0x2454d0  .word       0x002454D0                   # mfhi        $t2 # 002404C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057a8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x6057ac: 0x245500  .word       0x00245500                   # sll         $t2, $a0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x6057b0: 0x245540  .word       0x00245540                   # sll         $t2, $a0, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 21));
    // 0x6057b4: 0x245570  tge         $at, $a0, 341
    ctx->pc = 0x6057b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6057b8: 0x2455a0  .word       0x002455A0                   # add         $t2, $at, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x6057bc: 0x0  nop
    ctx->pc = 0x6057bcu;
    // NOP
    // 0x6057c0: 0x0  nop
    ctx->pc = 0x6057c0u;
    // NOP
    // 0x6057c4: 0x0  nop
    ctx->pc = 0x6057c4u;
    // NOP
    // 0x6057c8: 0x2465c0  .word       0x002465C0                   # sll         $t4, $a0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x6057cc: 0x2465f0  tge         $at, $a0, 407
    ctx->pc = 0x6057ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6057d0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6057d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6057d4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6057d4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6057d8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6057dc: 0x246500  .word       0x00246500                   # sll         $t4, $a0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x6057e0: 0x246620  .word       0x00246620                   # add         $t4, $at, $a0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x6057e4: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6057e8: 0x0  nop
    ctx->pc = 0x6057e8u;
    // NOP
    // 0x6057ec: 0x0  nop
    ctx->pc = 0x6057ecu;
    // NOP
    // 0x6057f0: 0x0  nop
    ctx->pc = 0x6057f0u;
    // NOP
    // 0x6057f4: 0x0  nop
    ctx->pc = 0x6057f4u;
    // NOP
    // 0x6057f8: 0x2471a0  .word       0x002471A0                   # add         $t6, $at, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6057f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x6057fc: 0x2471f0  tge         $at, $a0, 455
    ctx->pc = 0x6057fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605800: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605800u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605804: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605804u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605808: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605808u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60580c: 0x247110  .word       0x00247110                   # mfhi        $t6 # 00240100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60580cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x605810: 0x247230  tge         $at, $a0, 456
    ctx->pc = 0x605810u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605814: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605814u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605818: 0x0  nop
    ctx->pc = 0x605818u;
    // NOP
    // 0x60581c: 0x0  nop
    ctx->pc = 0x60581cu;
    // NOP
    // 0x605820: 0x0  nop
    ctx->pc = 0x605820u;
    // NOP
    // 0x605824: 0x0  nop
    ctx->pc = 0x605824u;
    // NOP
    // 0x605828: 0x248180  .word       0x00248180                   # sll         $s0, $a0, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605828u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x60582c: 0x2481c0  .word       0x002481C0                   # sll         $s0, $a0, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60582cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x605830: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605830u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605834: 0x2485c0  .word       0x002485C0                   # sll         $s0, $a0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605834u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x605838: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605838u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60583c: 0x2480e0  .word       0x002480E0                   # add         $s0, $at, $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60583cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x605840: 0x2482e0  .word       0x002482E0                   # add         $s0, $at, $a0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605840u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x605844: 0x24dc50  .word       0x0024DC50                   # mfhi        $k1 # 00240440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605844u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x605848: 0x0  nop
    ctx->pc = 0x605848u;
    // NOP
    // 0x60584c: 0x0  nop
    ctx->pc = 0x60584cu;
    // NOP
    // 0x605850: 0x0  nop
    ctx->pc = 0x605850u;
    // NOP
    // 0x605854: 0x0  nop
    ctx->pc = 0x605854u;
    // NOP
    // 0x605858: 0x2500a0  .word       0x002500A0                   # add         $zero, $at, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605858u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x60585c: 0x2500e0  .word       0x002500E0                   # add         $zero, $at, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60585cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605860: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605860u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605864: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605864u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605868: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60586c: 0x250010  .word       0x00250010                   # mfhi        $zero # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60586cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x605870: 0x250120  .word       0x00250120                   # add         $zero, $at, $a1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605870u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605874: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605874u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605878: 0x0  nop
    ctx->pc = 0x605878u;
    // NOP
    // 0x60587c: 0x0  nop
    ctx->pc = 0x60587cu;
    // NOP
    // 0x605880: 0x0  nop
    ctx->pc = 0x605880u;
    // NOP
    // 0x605884: 0x0  nop
    ctx->pc = 0x605884u;
    // NOP
    // 0x605888: 0x2506e0  .word       0x002506E0                   # add         $zero, $at, $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605888u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x60588c: 0x2507a0  .word       0x002507A0                   # add         $zero, $at, $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60588cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x605890: 0x0  nop
    ctx->pc = 0x605890u;
    // NOP
    // 0x605894: 0x0  nop
    ctx->pc = 0x605894u;
    // NOP
    // 0x605898: 0x254bd0  .word       0x00254BD0                   # mfhi        $t1 # 002503C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605898u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x60589c: 0x254c10  .word       0x00254C10                   # mfhi        $t1 # 00250400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60589cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6058a0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6058a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058a4: 0x256c20  .word       0x00256C20                   # add         $t5, $at, $a1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x6058a8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6058ac: 0x254b30  tge         $at, $a1, 300
    ctx->pc = 0x6058acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058b0: 0x0  nop
    ctx->pc = 0x6058b0u;
    // NOP
    // 0x6058b4: 0x0  nop
    ctx->pc = 0x6058b4u;
    // NOP
    // 0x6058b8: 0x254fb0  tge         $at, $a1, 318
    ctx->pc = 0x6058b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058bc: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x6058c0: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x6058c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058c4: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058c4u;
    
    // 0x6058c8: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058c8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6058cc: 0x254140  .word       0x00254140                   # sll         $t0, $a1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x6058d0: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6058d4: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x6058d8: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x6058dc: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x6058dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058e0: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058e0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6058e4: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x6058e8: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x6058ec: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x6058f0: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x6058f4: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x6058f8: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x6058f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x6058fc: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6058fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x605900: 0x0  nop
    ctx->pc = 0x605900u;
    // NOP
    // 0x605904: 0x0  nop
    ctx->pc = 0x605904u;
    // NOP
    // 0x605908: 0x259c30  tge         $at, $a1, 624
    ctx->pc = 0x605908u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x60590c: 0x259c70  tge         $at, $a1, 625
    ctx->pc = 0x60590cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x605910: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605910u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605914: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605914u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605918: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605918u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60591c: 0x259940  .word       0x00259940                   # sll         $s3, $a1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60591cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x605920: 0x259de0  .word       0x00259DE0                   # add         $s3, $at, $a1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605920u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x605924: 0x25ae00  .word       0x0025AE00                   # sll         $s5, $a1, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605924u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x605928: 0x0  nop
    ctx->pc = 0x605928u;
    // NOP
    // 0x60592c: 0x0  nop
    ctx->pc = 0x60592cu;
    // NOP
    // 0x605930: 0x0  nop
    ctx->pc = 0x605930u;
    // NOP
    // 0x605934: 0x0  nop
    ctx->pc = 0x605934u;
    // NOP
    // 0x605938: 0x25d000  .word       0x0025D000                   # sll         $k0, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605938u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x60593c: 0x25d040  .word       0x0025D040                   # sll         $k0, $a1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60593cu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x605940: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605940u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605944: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605944u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605948: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605948u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60594c: 0x25cf70  tge         $at, $a1, 829
    ctx->pc = 0x60594cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x605950: 0x25d080  .word       0x0025D080                   # sll         $k0, $a1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605950u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x605954: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605954u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605958: 0x0  nop
    ctx->pc = 0x605958u;
    // NOP
    // 0x60595c: 0x0  nop
    ctx->pc = 0x60595cu;
    // NOP
    // 0x605960: 0x0  nop
    ctx->pc = 0x605960u;
    // NOP
    // 0x605964: 0x0  nop
    ctx->pc = 0x605964u;
    // NOP
    // 0x605968: 0x25d300  .word       0x0025D300                   # sll         $k0, $a1, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605968u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x60596c: 0x25d340  .word       0x0025D340                   # sll         $k0, $a1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60596cu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 13));
    // 0x605970: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605970u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605974: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605974u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605978: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605978u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60597c: 0x25d270  tge         $at, $a1, 841
    ctx->pc = 0x60597cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    // 0x605980: 0x25d380  .word       0x0025D380                   # sll         $k0, $a1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605980u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x605984: 0x25ecc0  .word       0x0025ECC0                   # sll         $sp, $a1, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605984u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 5), 19));
    // 0x605988: 0x0  nop
    ctx->pc = 0x605988u;
    // NOP
    // 0x60598c: 0x0  nop
    ctx->pc = 0x60598cu;
    // NOP
    // 0x605990: 0x0  nop
    ctx->pc = 0x605990u;
    // NOP
    // 0x605994: 0x0  nop
    ctx->pc = 0x605994u;
    // NOP
    // 0x605998: 0x25f700  .word       0x0025F700                   # sll         $fp, $a1, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605998u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x60599c: 0x25fd40  .word       0x0025FD40                   # sll         $ra, $a1, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60599cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 5), 21));
    // 0x6059a0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6059a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6059a4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6059a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x6059a8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x6059ac: 0x25f660  .word       0x0025F660                   # add         $fp, $at, $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x6059b0: 0x25ff80  .word       0x0025FF80                   # sll         $ra, $a1, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059b0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x6059b4: 0x260030  tge         $at, $a2, 0
    ctx->pc = 0x6059b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
    // 0x6059b8: 0x0  nop
    ctx->pc = 0x6059b8u;
    // NOP
    // 0x6059bc: 0x0  nop
    ctx->pc = 0x6059bcu;
    // NOP
    // 0x6059c0: 0x0  nop
    ctx->pc = 0x6059c0u;
    // NOP
    // 0x6059c4: 0x0  nop
    ctx->pc = 0x6059c4u;
    // NOP
    // 0x6059c8: 0x261fe0  .word       0x00261FE0                   # add         $v1, $at, $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x6059cc: 0x2625d0  .word       0x002625D0                   # mfhi        $a0 # 002605C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x6059d0: 0x262020  add         $a0, $at, $a2
    ctx->pc = 0x6059d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x6059d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x6059d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x6059dc: 0x0  nop
    ctx->pc = 0x6059dcu;
    // NOP
    // 0x6059e0: 0x0  nop
    ctx->pc = 0x6059e0u;
    // NOP
    // 0x6059e4: 0x0  nop
    ctx->pc = 0x6059e4u;
    // NOP
    // 0x6059e8: 0x265f40  .word       0x00265F40                   # sll         $t3, $a2, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6059e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 29));
    // 0x6059ec: 0x0  nop
    ctx->pc = 0x6059ecu;
    // NOP
    // 0x6059f0: 0x0  nop
    ctx->pc = 0x6059f0u;
    // NOP
    // 0x6059f4: 0x0  nop
    ctx->pc = 0x6059f4u;
    // NOP
    // 0x6059f8: 0x2686f0  tge         $at, $a2, 539
    ctx->pc = 0x6059f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
    // 0x6059fc: 0x268af0  tge         $at, $a2, 555
    ctx->pc = 0x6059fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a00: 0x268d20  .word       0x00268D20                   # add         $s1, $at, $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a00u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x605a04: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605a08: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a08u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605a0c: 0x268660  .word       0x00268660                   # add         $s0, $at, $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a0cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x605a10: 0x0  nop
    ctx->pc = 0x605a10u;
    // NOP
    // 0x605a14: 0x0  nop
    ctx->pc = 0x605a14u;
    // NOP
    // 0x605a18: 0x26b420  .word       0x0026B420                   # add         $s6, $at, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a18u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605a1c: 0x26b450  .word       0x0026B450                   # mfhi        $s6 # 00260440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a1cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x605a20: 0x26b490  .word       0x0026B490                   # mfhi        $s6 # 00260480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a20u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x605a24: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605a24u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a28: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x605a2c: 0x26b310  .word       0x0026B310                   # mfhi        $s6 # 00260300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a2cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x605a30: 0x26e7c0  .word       0x0026E7C0                   # sll         $gp, $a2, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a30u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 6), 31));
    // 0x605a34: 0x26d880  .word       0x0026D880                   # sll         $k1, $a2, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a34u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x605a38: 0x0  nop
    ctx->pc = 0x605a38u;
    // NOP
    // 0x605a3c: 0x0  nop
    ctx->pc = 0x605a3cu;
    // NOP
    // 0x605a40: 0x0  nop
    ctx->pc = 0x605a40u;
    // NOP
    // 0x605a44: 0x0  nop
    ctx->pc = 0x605a44u;
    // NOP
    // 0x605a48: 0x26ffa0  .word       0x0026FFA0                   # add         $ra, $at, $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x605a4c: 0x26ffe0  .word       0x0026FFE0                   # add         $ra, $at, $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x605a50: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605a50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a54: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605a54u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a58: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x605a5c: 0x26ff10  .word       0x0026FF10                   # mfhi        $ra # 00260700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a5cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x605a60: 0x270030  tge         $at, $a3, 0
    ctx->pc = 0x605a60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a64: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a64u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605a68: 0x2701b0  tge         $at, $a3, 6
    ctx->pc = 0x605a68u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a6c: 0x0  nop
    ctx->pc = 0x605a6cu;
    // NOP
    // 0x605a70: 0x0  nop
    ctx->pc = 0x605a70u;
    // NOP
    // 0x605a74: 0x0  nop
    ctx->pc = 0x605a74u;
    // NOP
    // 0x605a78: 0x271b80  .word       0x00271B80                   # sll         $v1, $a3, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
    // 0x605a7c: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605a80: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x605a80u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605a84: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a84u;
    
    // 0x605a88: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a88u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605a8c: 0x273950  .word       0x00273950                   # mfhi        $a3 # 00270140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a8cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x605a90: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a90u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605a94: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605a98: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605a98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x605a9c: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x605a9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605aa0: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605aa0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605aa4: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605aa4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605aa8: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x605aac: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605aacu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x605ab0: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x605ab4: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x605ab8: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x605ab8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605abc: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605abcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x605ac0: 0x0  nop
    ctx->pc = 0x605ac0u;
    // NOP
    // 0x605ac4: 0x0  nop
    ctx->pc = 0x605ac4u;
    // NOP
    // 0x605ac8: 0x274260  .word       0x00274260                   # add         $t0, $at, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605acc: 0x223fa0  .word       0x00223FA0                   # add         $a3, $at, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605accu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    // 0x605ad0: 0x220430  tge         $at, $v0, 16
    ctx->pc = 0x605ad0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ad4: 0x220480  .word       0x00220480                   # sll         $zero, $v0, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ad4u;
    
    // 0x605ad8: 0x224050  .word       0x00224050                   # mfhi        $t0 # 00220040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ad8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605adc: 0x2743b0  tge         $at, $a3, 270
    ctx->pc = 0x605adcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ae0: 0x2245d0  .word       0x002245D0                   # mfhi        $t0 # 002205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ae0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605ae4: 0x224750  .word       0x00224750                   # mfhi        $t0 # 00220740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ae4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605ae8: 0x2248a0  .word       0x002248A0                   # add         $t1, $at, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x605aec: 0x2249f0  tge         $at, $v0, 295
    ctx->pc = 0x605aecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605af0: 0x224b50  .word       0x00224B50                   # mfhi        $t1 # 00220340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605af0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605af4: 0x224c90  .word       0x00224C90                   # mfhi        $t1 # 00220480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605af4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605af8: 0x224dc0  .word       0x00224DC0                   # sll         $t1, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605af8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
    // 0x605afc: 0x224ec0  .word       0x00224EC0                   # sll         $t1, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605afcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x605b00: 0x224fc0  .word       0x00224FC0                   # sll         $t1, $v0, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
    // 0x605b04: 0x2250c0  .word       0x002250C0                   # sll         $t2, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x605b08: 0x2251b0  tge         $at, $v0, 326
    ctx->pc = 0x605b08u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b0c: 0x225240  .word       0x00225240                   # sll         $t2, $v0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x605b10: 0x0  nop
    ctx->pc = 0x605b10u;
    // NOP
    // 0x605b14: 0x0  nop
    ctx->pc = 0x605b14u;
    // NOP
    // 0x605b18: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605b18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b1c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b1cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605b20: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605b20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605b28: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b28u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605b2c: 0x274540  .word       0x00274540                   # sll         $t0, $a3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x605b30: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605b30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b34: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605b38: 0x2747d0  .word       0x002747D0                   # mfhi        $t0 # 002707C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b38u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605b3c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605b40: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605b44: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605b44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b48: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605b4c: 0x0  nop
    ctx->pc = 0x605b4cu;
    // NOP
    // 0x605b50: 0x0  nop
    ctx->pc = 0x605b50u;
    // NOP
    // 0x605b54: 0x0  nop
    ctx->pc = 0x605b54u;
    // NOP
    // 0x605b58: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605b58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b5c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b5cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605b60: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605b60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b64: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605b68: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b68u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605b6c: 0x275130  tge         $at, $a3, 324
    ctx->pc = 0x605b6cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b70: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605b70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b74: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605b78: 0x274a50  .word       0x00274A50                   # mfhi        $t1 # 00270240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b78u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605b7c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605b80: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605b84: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605b84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b88: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605b8c: 0x0  nop
    ctx->pc = 0x605b8cu;
    // NOP
    // 0x605b90: 0x0  nop
    ctx->pc = 0x605b90u;
    // NOP
    // 0x605b94: 0x0  nop
    ctx->pc = 0x605b94u;
    // NOP
    // 0x605b98: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605b98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605b9c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605b9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605ba0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605ba0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ba4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605ba8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605bac: 0x275620  .word       0x00275620                   # add         $t2, $at, $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605bb0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605bb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605bb4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605bb8: 0x2751e0  .word       0x002751E0                   # add         $t2, $at, $a3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x605bbc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605bc0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605bc4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605bc4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605bc8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605bcc: 0x0  nop
    ctx->pc = 0x605bccu;
    // NOP
    // 0x605bd0: 0x0  nop
    ctx->pc = 0x605bd0u;
    // NOP
    // 0x605bd4: 0x0  nop
    ctx->pc = 0x605bd4u;
    // NOP
    // 0x605bd8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605bd8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605bdc: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605be0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605be0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605be4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605be4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605be8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605be8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605bec: 0x2759e0  .word       0x002759E0                   # add         $t3, $at, $a3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605becu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x605bf0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605bf0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605bf4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bf4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605bf8: 0x2756d0  .word       0x002756D0                   # mfhi        $t2 # 002706C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bf8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x605bfc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605c00: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605c04: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605c04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c08: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605c0c: 0x0  nop
    ctx->pc = 0x605c0cu;
    // NOP
    // 0x605c10: 0x0  nop
    ctx->pc = 0x605c10u;
    // NOP
    // 0x605c14: 0x0  nop
    ctx->pc = 0x605c14u;
    // NOP
    // 0x605c18: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605c18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c1c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c1cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605c20: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605c20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605c28: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c28u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605c2c: 0x275b80  .word       0x00275B80                   # sll         $t3, $a3, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
    // 0x605c30: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605c30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c34: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605c38: 0x275a90  .word       0x00275A90                   # mfhi        $t3 # 00270280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c38u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x605c3c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605c40: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605c44: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605c44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c48: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605c4c: 0x0  nop
    ctx->pc = 0x605c4cu;
    // NOP
    // 0x605c50: 0x0  nop
    ctx->pc = 0x605c50u;
    // NOP
    // 0x605c54: 0x0  nop
    ctx->pc = 0x605c54u;
    // NOP
    // 0x605c58: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605c58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c5c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c5cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605c60: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605c60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c64: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605c68: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c68u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605c6c: 0x275da0  .word       0x00275DA0                   # add         $t3, $at, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x605c70: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605c70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c74: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605c78: 0x275c30  tge         $at, $a3, 368
    ctx->pc = 0x605c78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c7c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605c80: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605c84: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605c84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c88: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605c8c: 0x0  nop
    ctx->pc = 0x605c8cu;
    // NOP
    // 0x605c90: 0x0  nop
    ctx->pc = 0x605c90u;
    // NOP
    // 0x605c94: 0x0  nop
    ctx->pc = 0x605c94u;
    // NOP
    // 0x605c98: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605c98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605c9c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605c9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605ca0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605ca0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ca4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605ca8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605cac: 0x275f00  .word       0x00275F00                   # sll         $t3, $a3, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 28));
    // 0x605cb0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605cb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605cb4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605cb8: 0x275e50  .word       0x00275E50                   # mfhi        $t3 # 00270640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cb8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x605cbc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605cc0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605cc4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605cc4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605cc8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605ccc: 0x0  nop
    ctx->pc = 0x605cccu;
    // NOP
    // 0x605cd0: 0x0  nop
    ctx->pc = 0x605cd0u;
    // NOP
    // 0x605cd4: 0x0  nop
    ctx->pc = 0x605cd4u;
    // NOP
    // 0x605cd8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605cd8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605cdc: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605ce0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605ce0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ce4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605ce8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605cec: 0x276120  .word       0x00276120                   # add         $t4, $at, $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x605cf0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605cf0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605cf4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cf4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605cf8: 0x275fb0  tge         $at, $a3, 382
    ctx->pc = 0x605cf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605cfc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605d00: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605d04: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605d04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d08: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605d0c: 0x0  nop
    ctx->pc = 0x605d0cu;
    // NOP
    // 0x605d10: 0x0  nop
    ctx->pc = 0x605d10u;
    // NOP
    // 0x605d14: 0x0  nop
    ctx->pc = 0x605d14u;
    // NOP
    // 0x605d18: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605d18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d1c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d1cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605d20: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605d20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605d28: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d28u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605d2c: 0x276600  .word       0x00276600                   # sll         $t4, $a3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x605d30: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605d30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d34: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605d38: 0x276210  .word       0x00276210                   # mfhi        $t4 # 00270200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d38u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x605d3c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605d40: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605d44: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605d44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d48: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605d4c: 0x0  nop
    ctx->pc = 0x605d4cu;
    // NOP
    // 0x605d50: 0x0  nop
    ctx->pc = 0x605d50u;
    // NOP
    // 0x605d54: 0x0  nop
    ctx->pc = 0x605d54u;
    // NOP
    // 0x605d58: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605d58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d5c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d5cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605d60: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605d60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d64: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605d68: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d68u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605d6c: 0x2767e0  .word       0x002767E0                   # add         $t4, $at, $a3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x605d70: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605d70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d74: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605d78: 0x276670  tge         $at, $a3, 409
    ctx->pc = 0x605d78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d7c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605d80: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605d84: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605d84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d88: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605d8c: 0x0  nop
    ctx->pc = 0x605d8cu;
    // NOP
    // 0x605d90: 0x0  nop
    ctx->pc = 0x605d90u;
    // NOP
    // 0x605d94: 0x0  nop
    ctx->pc = 0x605d94u;
    // NOP
    // 0x605d98: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605d98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605d9c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605d9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605da0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605da0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605da4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605da4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605da8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605da8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605dac: 0x276c50  .word       0x00276C50                   # mfhi        $t5 # 00270440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605dacu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605db0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605db0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605db4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605db4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605db8: 0x276890  .word       0x00276890                   # mfhi        $t5 # 00270080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605db8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605dbc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605dc0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605dc4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605dc4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605dc8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605dcc: 0x0  nop
    ctx->pc = 0x605dccu;
    // NOP
    // 0x605dd0: 0x0  nop
    ctx->pc = 0x605dd0u;
    // NOP
    // 0x605dd4: 0x0  nop
    ctx->pc = 0x605dd4u;
    // NOP
    // 0x605dd8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605dd8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ddc: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ddcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605de0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605de0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605de4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605de4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605de8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605de8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605dec: 0x277020  add         $t6, $at, $a3
    ctx->pc = 0x605decu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x605df0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605df0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605df4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605df4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605df8: 0x276d00  .word       0x00276D00                   # sll         $t5, $a3, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605df8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x605dfc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605e00: 0x276e90  .word       0x00276E90                   # mfhi        $t5 # 00270680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e00u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x605e04: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605e04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e08: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605e0c: 0x0  nop
    ctx->pc = 0x605e0cu;
    // NOP
    // 0x605e10: 0x0  nop
    ctx->pc = 0x605e10u;
    // NOP
    // 0x605e14: 0x0  nop
    ctx->pc = 0x605e14u;
    // NOP
    // 0x605e18: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605e18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e1c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e1cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605e20: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605e20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605e28: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e28u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605e2c: 0x277280  .word       0x00277280                   # sll         $t6, $a3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e2cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x605e30: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605e30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e34: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605e38: 0x2770d0  .word       0x002770D0                   # mfhi        $t6 # 002700C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e38u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x605e3c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605e40: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605e44: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605e44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e48: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605e4c: 0x0  nop
    ctx->pc = 0x605e4cu;
    // NOP
    // 0x605e50: 0x0  nop
    ctx->pc = 0x605e50u;
    // NOP
    // 0x605e54: 0x0  nop
    ctx->pc = 0x605e54u;
    // NOP
    // 0x605e58: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605e58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e5c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e5cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605e60: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605e60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e64: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605e68: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e68u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605e6c: 0x277580  .word       0x00277580                   # sll         $t6, $a3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 7), 22));
    // 0x605e70: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605e70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e74: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605e78: 0x2773b0  tge         $at, $a3, 462
    ctx->pc = 0x605e78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e7c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605e80: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605e84: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605e84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e88: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605e8c: 0x0  nop
    ctx->pc = 0x605e8cu;
    // NOP
    // 0x605e90: 0x0  nop
    ctx->pc = 0x605e90u;
    // NOP
    // 0x605e94: 0x0  nop
    ctx->pc = 0x605e94u;
    // NOP
    // 0x605e98: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605e98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605e9c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605e9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605ea0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605ea0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ea4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605ea8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605eac: 0x2775f0  tge         $at, $a3, 471
    ctx->pc = 0x605eacu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605eb0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605eb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605eb4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605eb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605eb8: 0x2772f0  tge         $at, $a3, 459
    ctx->pc = 0x605eb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ebc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605ec0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605ec4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605ec4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ec8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605ecc: 0x0  nop
    ctx->pc = 0x605eccu;
    // NOP
    // 0x605ed0: 0x0  nop
    ctx->pc = 0x605ed0u;
    // NOP
    // 0x605ed4: 0x0  nop
    ctx->pc = 0x605ed4u;
    // NOP
    // 0x605ed8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605ed8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605edc: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605edcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605ee0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605ee0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ee4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605ee8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605eec: 0x277ef0  tge         $at, $a3, 507
    ctx->pc = 0x605eecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ef0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605ef0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ef4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ef4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605ef8: 0x2776a0  .word       0x002776A0                   # add         $t6, $at, $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ef8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x605efc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605efcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605f00: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605f04: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605f04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f08: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605f0c: 0x0  nop
    ctx->pc = 0x605f0cu;
    // NOP
    // 0x605f10: 0x0  nop
    ctx->pc = 0x605f10u;
    // NOP
    // 0x605f14: 0x0  nop
    ctx->pc = 0x605f14u;
    // NOP
    // 0x605f18: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x605f18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f1c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f1cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x605f20: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x605f20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f24: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x605f28: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f28u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x605f2c: 0x278110  .word       0x00278110                   # mfhi        $s0 # 00270100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f2cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x605f30: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x605f30u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f34: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x605f38: 0x277f60  .word       0x00277F60                   # add         $t7, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x605f3c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x605f40: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x605f44: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x605f44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f48: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x605f4c: 0x0  nop
    ctx->pc = 0x605f4cu;
    // NOP
    // 0x605f50: 0x0  nop
    ctx->pc = 0x605f50u;
    // NOP
    // 0x605f54: 0x0  nop
    ctx->pc = 0x605f54u;
    // NOP
    // 0x605f58: 0x2792c0  .word       0x002792C0                   # sll         $s2, $a3, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x605f5c: 0x279940  .word       0x00279940                   # sll         $s3, $a3, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_605f60:
    // 0x605f60: 0x279bc0  .word       0x00279BC0                   # sll         $s3, $a3, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f60u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x605f64: 0x279f60  .word       0x00279F60                   # add         $s3, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x605f68: 0x279f90  .word       0x00279F90                   # mfhi        $s3 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f68u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x605f6c: 0x2791f0  tge         $at, $a3, 583
    ctx->pc = 0x605f6cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f70: 0x279fc0  .word       0x00279FC0                   # sll         $s3, $a3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f70u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 7), 31));
    // 0x605f74: 0x279ff0  tge         $at, $a3, 639
    ctx->pc = 0x605f74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f78: 0x27acb0  tge         $at, $a3, 690
    ctx->pc = 0x605f78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f7c: 0x27bed0  .word       0x0027BED0                   # mfhi        $s7 # 002706C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f7cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x605f80: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x605f84: 0x27b280  .word       0x0027B280                   # sll         $s6, $a3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605f84u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x605f88: 0x27b7f0  tge         $at, $a3, 735
    ctx->pc = 0x605f88u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f8c: 0x0  nop
    ctx->pc = 0x605f8cu;
    // NOP
    // 0x605f90: 0x0  nop
    ctx->pc = 0x605f90u;
    // NOP
    // 0x605f94: 0x0  nop
    ctx->pc = 0x605f94u;
    // NOP
    // 0x605f98: 0x284530  tge         $at, $t0, 276
    ctx->pc = 0x605f98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x605f9c: 0x284570  tge         $at, $t0, 277
    ctx->pc = 0x605f9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fa0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605fa0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fa4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605fa4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fa8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x605fac: 0x2844c0  .word       0x002844C0                   # sll         $t0, $t0, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605facu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 19));
    // 0x605fb0: 0x284670  tge         $at, $t0, 281
    ctx->pc = 0x605fb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fb4: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x605fb8: 0x0  nop
    ctx->pc = 0x605fb8u;
    // NOP
    // 0x605fbc: 0x0  nop
    ctx->pc = 0x605fbcu;
    // NOP
    // 0x605fc0: 0x0  nop
    ctx->pc = 0x605fc0u;
    // NOP
    // 0x605fc4: 0x0  nop
    ctx->pc = 0x605fc4u;
    // NOP
    // 0x605fc8: 0x285920  .word       0x00285920                   # add         $t3, $at, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fc8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x605fcc: 0x285960  .word       0x00285960                   # add         $t3, $at, $t0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x605fd0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x605fd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fd4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x605fd4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fd8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x605fdc: 0x285870  tge         $at, $t0, 353
    ctx->pc = 0x605fdcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fe0: 0x286140  .word       0x00286140                   # sll         $t4, $t0, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x605fe4: 0x286370  tge         $at, $t0, 397
    ctx->pc = 0x605fe4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x605fe8: 0x0  nop
    ctx->pc = 0x605fe8u;
    // NOP
    // 0x605fec: 0x0  nop
    ctx->pc = 0x605fecu;
    // NOP
    // 0x605ff0: 0x0  nop
    ctx->pc = 0x605ff0u;
    // NOP
    // 0x605ff4: 0x0  nop
    ctx->pc = 0x605ff4u;
    // NOP
    // 0x605ff8: 0x290d70  tge         $at, $t1, 53
    ctx->pc = 0x605ff8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
    // 0x605ffc: 0x290c90  .word       0x00290C90                   # mfhi        $at # 00290480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x605ffcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
    ctx->pc = 0x606000u;
}
