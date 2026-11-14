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

// Function: sub_00292F90
// Address: 0x292f90 - 0x293250
void sub_00292F90_0x292f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292F90_0x292f90");
#endif

    switch (ctx->pc) {
        case 0x292ff0u: goto label_292ff0;
        case 0x293010u: goto label_293010;
        case 0x293020u: goto label_293020;
        default: break;
    }

    ctx->pc = 0x292f90u;

    // 0x292f90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x292f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x292f94: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x292f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x292f98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x292f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x292f9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x292f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x292fa0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x292fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x292fa4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x292fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x292fa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292fb8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x292fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x292fbc: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x292fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x292fc0: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x292fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x292fc4: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x292fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x292fc8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x292fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x292fcc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x292fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x292fd0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x292fd4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x292fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292fd8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x292fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x292fdc: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292fe0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x292fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x292fe4: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x292fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x292fe8: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x292FE8u;
    SET_GPR_U32(ctx, 31, 0x292FF0u);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x292FE8u, 0x292FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF0u;
label_292ff0:
    // 0x292ff0: 0x2e2082b  sltu        $at, $s7, $v0
    ctx->pc = 0x292ff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x292ff4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x292FF4u;
    {
        const bool branch_taken_0x292ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ff4) {
            ctx->pc = 0x293020u;
            goto label_293020;
        }
    }
    ctx->pc = 0x292FFCu;
    // 0x292ffc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x292ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293000: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x293000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x293004: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x293004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293008: 0xc0a4aa4  jal         func_292A90
    ctx->pc = 0x293008u;
    SET_GPR_U32(ctx, 31, 0x293010u);
    ctx->pc = 0x292A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292A90u, 0x293008u, 0x293010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293010u;
label_293010:
    // 0x293010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293014: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293018: 0xc052608  jal         func_149820
    ctx->pc = 0x293018u;
    SET_GPR_U32(ctx, 31, 0x293020u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x293018u, 0x293020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293020u;
label_293020:
    // 0x293020: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x293020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293024: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x293028: 0x1003007b  beq         $zero, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x293028u;
    {
        const bool branch_taken_0x293028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x293028) {
            ctx->pc = 0x293218u;
            goto label_293218;
        }
    }
    ctx->pc = 0x293030u;
    // 0x293030: 0x171840  sll         $v1, $s7, 1
    ctx->pc = 0x293030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x293034: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x293034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x293038: 0x3b040  sll         $s6, $v1, 1
    ctx->pc = 0x293038u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29303c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x29303cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293040: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x293044: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x293044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x293048: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29304c: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x29304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x293050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293054: 0x2475000c  addiu       $s5, $v1, 0xC
    ctx->pc = 0x293054u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x293058: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29305c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29305cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293060: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x293060u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293064: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293068: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x293068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x29306c: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x29306cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293070: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293074: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x293074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293078: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x293078u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29307c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293080: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x293080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x293084: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x293084u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293088: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x293088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29308c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x29308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x293090: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x293090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x293094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293098: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x293098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29309c: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x29309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2930a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2930a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2930a4: 0x2474000c  addiu       $s4, $v1, 0xC
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2930a8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2930ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2930acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2930b0: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2930b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2930b4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2930b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2930b8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2930b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2930bc: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x2930bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2930c0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2930c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2930c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2930c8: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x2930c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2930cc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2930ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2930d0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2930d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2930d4: 0xa2830003  sb          $v1, 0x3($s4)
    ctx->pc = 0x2930d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2930d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2930d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2930dc: 0x26c40002  addiu       $a0, $s6, 0x2
    ctx->pc = 0x2930dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x2930e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2930e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2930e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2930e8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2930e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2930ec: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x2930ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2930f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2930f4: 0x2473000c  addiu       $s3, $v1, 0xC
    ctx->pc = 0x2930f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2930f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2930f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2930fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2930fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293100: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x293100u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293104: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293108: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x293108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x29310c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x29310cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293110: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293114: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x293114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293118: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x293118u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29311c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x29311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293120: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x293120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x293124: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x293124u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293128: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29312c: 0x26c40003  addiu       $a0, $s6, 0x3
    ctx->pc = 0x29312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x293130: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x293130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x293134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293138: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x293138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29313c: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x293140: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293144: 0x2472000c  addiu       $s2, $v1, 0xC
    ctx->pc = 0x293144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x293148: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29314c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29314cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293150: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x293150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x293154: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293158: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x293158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x29315c: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x29315cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293160: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293164: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x293164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293168: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x293168u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29316c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x29316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293170: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x293170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x293174: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x293174u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x293178: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x293178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29317c: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x29317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x293180: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x293180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x293184: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293188: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29318c: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x29318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x293190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293194: 0x2471000c  addiu       $s1, $v1, 0xC
    ctx->pc = 0x293194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x293198: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29319c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29319cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2931a0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2931a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2931a4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2931a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2931a8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2931a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2931ac: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2931acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2931b0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2931b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2931b4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2931b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2931b8: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x2931b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2931bc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2931bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2931c0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2931c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2931c4: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x2931c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2931c8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2931cc: 0x26c40005  addiu       $a0, $s6, 0x5
    ctx->pc = 0x2931ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5));
    // 0x2931d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2931d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2931d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2931d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2931d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2931d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2931dc: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x2931dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2931e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2931e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2931e4: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x2931e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2931e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2931ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2931ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2931f0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2931f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2931f4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2931f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2931f8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2931f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2931fc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2931fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x293200: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x293200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293204: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x293204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293208: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x293208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29320c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x293210: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x293210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x293214: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x293214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_293218:
    // 0x293218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29321c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29321cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293220: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x293220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x293224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x293228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29322c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29322cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29323c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x29323cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x293240: 0x3e00008  jr          $ra
    ctx->pc = 0x293240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293248u;
    // 0x293248: 0x0  nop
    ctx->pc = 0x293248u;
    // NOP
    // 0x29324c: 0x0  nop
    ctx->pc = 0x29324cu;
    // NOP
    ctx->pc = 0x293250u;
}
