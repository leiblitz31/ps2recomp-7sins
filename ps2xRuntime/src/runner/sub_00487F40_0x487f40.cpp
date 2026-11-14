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

// Function: sub_00487F40
// Address: 0x487f40 - 0x488160
void sub_00487F40_0x487f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487F40_0x487f40");
#endif

    switch (ctx->pc) {
        case 0x487f98u: goto label_487f98;
        case 0x487fa4u: goto label_487fa4;
        case 0x488010u: goto label_488010;
        case 0x488030u: goto label_488030;
        case 0x488050u: goto label_488050;
        case 0x488060u: goto label_488060;
        case 0x4880a8u: goto label_4880a8;
        case 0x4880b8u: goto label_4880b8;
        case 0x4880ccu: goto label_4880cc;
        case 0x4880e4u: goto label_4880e4;
        case 0x4880f4u: goto label_4880f4;
        case 0x488104u: goto label_488104;
        default: break;
    }

    ctx->pc = 0x487f40u;

    // 0x487f40: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x487f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x487f44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x487f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x487f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x487f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x487f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x487f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x487f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x487f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x487f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487f5c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x487f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x487f60: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x487f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
    // 0x487f64: 0xc7808218  lwc1        $f0, -0x7DE8($gp)
    ctx->pc = 0x487f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487f68: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x487f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x487f6c: 0xe4407c28  swc1        $f0, 0x7C28($v0)
    ctx->pc = 0x487f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x657C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657C28u, _value); } while (0); }
    // 0x487f70: 0xc780821c  lwc1        $f0, -0x7DE4($gp)
    ctx->pc = 0x487f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487f74: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x487f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x487f78: 0xe4407c20  swc1        $f0, 0x7C20($v0)
    ctx->pc = 0x487f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x657C20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657C20u, _value); } while (0); }
    // 0x487f7c: 0xc780821c  lwc1        $f0, -0x7DE4($gp)
    ctx->pc = 0x487f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x487f80: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x487f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x487f84: 0xe4407c24  swc1        $f0, 0x7C24($v0)
    ctx->pc = 0x487f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x657C24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657C24u, _value); } while (0); }
    // 0x487f88: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x487f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x487f8c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x487f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x487f90: 0xc1220ec  jal         func_4883B0
    ctx->pc = 0x487F90u;
    SET_GPR_U32(ctx, 31, 0x487F98u);
    ctx->pc = 0x4883B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4883B0u, 0x487F90u, 0x487F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F98u;
label_487f98:
    // 0x487f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x487f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487f9c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x487F9Cu;
    {
        const bool branch_taken_0x487f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487f9c) {
            ctx->pc = 0x48811Cu;
            goto label_48811c;
        }
    }
    ctx->pc = 0x487FA4u;
label_487fa4:
    // 0x487fa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x487fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487fa8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x487fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x487fac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x487fb0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x487fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x487fb4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x487fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x487fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x487fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x487fbc: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x487fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x487fc0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x487fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x487fc4: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x487fc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x487fc8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x487FC8u;
    {
        const bool branch_taken_0x487fc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x487fc8) {
            ctx->pc = 0x487FE4u;
            goto label_487fe4;
        }
    }
    ctx->pc = 0x487FD0u;
    // 0x487fd0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x487fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x487fd4: 0x2442fc18  addiu       $v0, $v0, -0x3E8
    ctx->pc = 0x487fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
    // 0x487fd8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x487fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x487fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x487fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487fe0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x487fe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_487fe4:
    // 0x487fe4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x487fe8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x487fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x487fec: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x487fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x487ff0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x487ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x487ff4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x487ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x487ff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x487ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x487ffc: 0x2453004c  addiu       $s3, $v0, 0x4C
    ctx->pc = 0x487ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x488000: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x488000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x488004: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x488004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x488008: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x488008u;
    SET_GPR_U32(ctx, 31, 0x488010u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x488008u, 0x488010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488010u;
label_488010:
    // 0x488010: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x488010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x488014: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x488014u;
    {
        const bool branch_taken_0x488014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488014) {
            ctx->pc = 0x488038u;
            goto label_488038;
        }
    }
    ctx->pc = 0x48801Cu;
    // 0x48801c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x48801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x488020: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x488020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x488024: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x488024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x488028: 0xc121f78  jal         func_487DE0
    ctx->pc = 0x488028u;
    SET_GPR_U32(ctx, 31, 0x488030u);
    ctx->pc = 0x487DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487DE0u, 0x488028u, 0x488030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488030u;
label_488030:
    // 0x488030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x488030u;
    {
        const bool branch_taken_0x488030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488030) {
            ctx->pc = 0x488050u;
            goto label_488050;
        }
    }
    ctx->pc = 0x488038u;
label_488038:
    // 0x488038: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x488038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x48803c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x48803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x488040: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x488040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x488044: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x488044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488048: 0xc121f2c  jal         func_487CB0
    ctx->pc = 0x488048u;
    SET_GPR_U32(ctx, 31, 0x488050u);
    ctx->pc = 0x487CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487CB0u, 0x488048u, 0x488050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488050u;
label_488050:
    // 0x488050: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x488050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x488054: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x488054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x488058: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x488058u;
    SET_GPR_U32(ctx, 31, 0x488060u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x488058u, 0x488060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488060u;
label_488060:
    // 0x488060: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x488060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x488064: 0x1051001b  beq         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x488064u;
    {
        const bool branch_taken_0x488064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x488064) {
            ctx->pc = 0x4880D4u;
            goto label_4880d4;
        }
    }
    ctx->pc = 0x48806Cu;
    // 0x48806c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x48806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x488070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488074: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x488074u;
    {
        const bool branch_taken_0x488074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x488074) {
            ctx->pc = 0x4880D4u;
            goto label_4880d4;
        }
    }
    ctx->pc = 0x48807Cu;
    // 0x48807c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x488080: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x488080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x488084: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x488084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x488088: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x488088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x48808c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x488090: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x488090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x488094: 0x2454004c  addiu       $s4, $v0, 0x4C
    ctx->pc = 0x488094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x488098: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x488098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x48809c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x48809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x4880a0: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x4880A0u;
    SET_GPR_U32(ctx, 31, 0x4880A8u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x4880A0u, 0x4880A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880A8u;
label_4880a8:
    // 0x4880a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4880a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4880ac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4880acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4880b0: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x4880B0u;
    SET_GPR_U32(ctx, 31, 0x4880B8u);
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x4880B0u, 0x4880B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880B8u;
label_4880b8:
    // 0x4880b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4880b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4880bc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4880bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x4880c0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x4880c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4880c4: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x4880C4u;
    SET_GPR_U32(ctx, 31, 0x4880CCu);
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x4880C4u, 0x4880CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880CCu;
label_4880cc:
    // 0x4880cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4880CCu;
    {
        const bool branch_taken_0x4880cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4880cc) {
            ctx->pc = 0x4880E4u;
            goto label_4880e4;
        }
    }
    ctx->pc = 0x4880D4u;
label_4880d4:
    // 0x4880d4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4880d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4880d8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4880d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x4880dc: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x4880DCu;
    SET_GPR_U32(ctx, 31, 0x4880E4u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x4880DCu, 0x4880E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880E4u;
label_4880e4:
    // 0x4880e4: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x4880e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4880e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4880e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x4880ec: 0xc10229c  jal         func_408A70
    ctx->pc = 0x4880ECu;
    SET_GPR_U32(ctx, 31, 0x4880F4u);
    ctx->pc = 0x408A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408A70u, 0x4880ECu, 0x4880F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880F4u;
label_4880f4:
    // 0x4880f4: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x4880f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4880f8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4880f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4880fc: 0xc041d58  jal         func_107560
    ctx->pc = 0x4880FCu;
    SET_GPR_U32(ctx, 31, 0x488104u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x4880FCu, 0x488104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488104u;
label_488104:
    // 0x488104: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x488104u;
    {
        const bool branch_taken_0x488104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x488104) {
            ctx->pc = 0x488118u;
            goto label_488118;
        }
    }
    ctx->pc = 0x48810Cu;
    // 0x48810c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x48810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x488110: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x488110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x488114: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x488114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_488118:
    // 0x488118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48811c:
    // 0x48811c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x48811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x488120: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x488120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x488124: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x488124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x488128: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x488128u;
    {
        const bool branch_taken_0x488128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x488128) {
            ctx->pc = 0x487FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487fa4;
        }
    }
    ctx->pc = 0x488130u;
    // 0x488130: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x488130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x488134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x488134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x488138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48813c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48813cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x488140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488148: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x488148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x48814c: 0x3e00008  jr          $ra
    ctx->pc = 0x48814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488154u;
    // 0x488154: 0x0  nop
    ctx->pc = 0x488154u;
    // NOP
    // 0x488158: 0x0  nop
    ctx->pc = 0x488158u;
    // NOP
    // 0x48815c: 0x0  nop
    ctx->pc = 0x48815cu;
    // NOP
    ctx->pc = 0x488160u;
}
