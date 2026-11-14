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

// Function: sub_0029E140
// Address: 0x29e140 - 0x29e320
void sub_0029E140_0x29e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E140_0x29e140");
#endif

    switch (ctx->pc) {
        case 0x29e190u: goto label_29e190;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e200u: goto label_29e200;
        case 0x29e228u: goto label_29e228;
        case 0x29e244u: goto label_29e244;
        case 0x29e270u: goto label_29e270;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e2d8u: goto label_29e2d8;
        case 0x29e2f8u: goto label_29e2f8;
        default: break;
    }

    ctx->pc = 0x29e140u;

    // 0x29e140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29e144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29e148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e14c: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x29e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x29e150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29e154: 0x3e00008  jr          $ra
    ctx->pc = 0x29E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E15Cu;
    // 0x29e15c: 0x0  nop
    ctx->pc = 0x29e15cu;
    // NOP
    // 0x29e160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29e164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e170: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29e170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x29e174: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x29e174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x29e178: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x29e178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x29e17c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e180: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29e184: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e188: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29E188u;
    SET_GPR_U32(ctx, 31, 0x29E190u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29E188u, 0x29E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E190u;
label_29e190:
    // 0x29e190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e194: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x29E194u;
    {
        const bool branch_taken_0x29e194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e194) {
            ctx->pc = 0x29E294u;
            goto label_29e294;
        }
    }
    ctx->pc = 0x29E19Cu;
    // 0x29e19c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x29e1a0: 0x24c6d8f0  addiu       $a2, $a2, -0x2710
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957296));
    // 0x29e1a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29e1a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x29e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29e1ac:
    // 0x29e1ac: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x29e1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e1b0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x29e1b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x29e1b4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x29e1b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e1bc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x29e1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e1c0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x29e1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e1c4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x29e1c8: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29E1C8u;
    {
        const bool branch_taken_0x29e1c8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x29e1c8) {
            ctx->pc = 0x29E1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e1ac;
        }
    }
    ctx->pc = 0x29E1D0u;
    // 0x29e1d0: 0x83a20060  lb          $v0, 0x60($sp)
    ctx->pc = 0x29e1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e1d4: 0xa3a2003a  sb          $v0, 0x3A($sp)
    ctx->pc = 0x29e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e1d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e1dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e1e0: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29E1E0u;
    {
        const bool branch_taken_0x29e1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e1e0) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E1E8u;
    // 0x29e1e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e1ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29e1f0: 0x2405056d  addiu       $a1, $zero, 0x56D
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1389));
    // 0x29e1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1f8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x29E1F8u;
    SET_GPR_U32(ctx, 31, 0x29E200u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x29E1F8u, 0x29E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E200u;
label_29e200:
    // 0x29e200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29e200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e204: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x29e204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29e208: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x29E208u;
    {
        const bool branch_taken_0x29e208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e208) {
            ctx->pc = 0x29E24Cu;
            goto label_29e24c;
        }
    }
    ctx->pc = 0x29E210u;
    // 0x29e210: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e214: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29e218: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29e21c: 0x2786a38c  addiu       $a2, $gp, -0x5C74
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943628));
    // 0x29e220: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x29E220u;
    SET_GPR_U32(ctx, 31, 0x29E228u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29E220u, 0x29E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E228u;
label_29e228:
    // 0x29e228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e22c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e230: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e234: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29e234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e23c: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x29E23Cu;
    SET_GPR_U32(ctx, 31, 0x29E244u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x29E23Cu, 0x29E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E244u;
label_29e244:
    // 0x29e244: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29E244u;
    {
        const bool branch_taken_0x29e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e244) {
            ctx->pc = 0x29E298u;
            goto label_29e298;
        }
    }
    ctx->pc = 0x29E24Cu;
label_29e24c:
    // 0x29e24c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e250: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29E250u;
    {
        const bool branch_taken_0x29e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e250) {
            ctx->pc = 0x29E298u;
            goto label_29e298;
        }
    }
    ctx->pc = 0x29E258u;
label_29e258:
    // 0x29e258: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e25c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29e260: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x29e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29e264: 0x2786a38c  addiu       $a2, $gp, -0x5C74
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943628));
    // 0x29e268: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x29E268u;
    SET_GPR_U32(ctx, 31, 0x29E270u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29E268u, 0x29E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E270u;
label_29e270:
    // 0x29e270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e278: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x29e278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e27c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e284: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x29E284u;
    SET_GPR_U32(ctx, 31, 0x29E28Cu);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x29E284u, 0x29E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E28Cu;
label_29e28c:
    // 0x29e28c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29E28Cu;
    {
        const bool branch_taken_0x29e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e28c) {
            ctx->pc = 0x29E298u;
            goto label_29e298;
        }
    }
    ctx->pc = 0x29E294u;
label_29e294:
    // 0x29e294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e298:
    // 0x29e298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e2a4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x29e2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29e2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2B0u;
    // 0x29e2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29e2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e2bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29e2c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29e2c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e2c8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29e2cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e2d0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29E2D0u;
    SET_GPR_U32(ctx, 31, 0x29E2D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29E2D0u, 0x29E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2D8u;
label_29e2d8:
    // 0x29e2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2dc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E2DCu;
    {
        const bool branch_taken_0x29e2dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2dc) {
            ctx->pc = 0x29E300u;
            goto label_29e300;
        }
    }
    ctx->pc = 0x29E2E4u;
    // 0x29e2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2f0: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x29E2F0u;
    SET_GPR_U32(ctx, 31, 0x29E2F8u);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x29E2F0u, 0x29E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2F8u;
label_29e2f8:
    // 0x29e2f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29E2F8u;
    {
        const bool branch_taken_0x29e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2f8) {
            ctx->pc = 0x29E304u;
            goto label_29e304;
        }
    }
    ctx->pc = 0x29E300u;
label_29e300:
    // 0x29e300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e304:
    // 0x29e304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e30c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29e30cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e310: 0x3e00008  jr          $ra
    ctx->pc = 0x29E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E318u;
    // 0x29e318: 0x0  nop
    ctx->pc = 0x29e318u;
    // NOP
    // 0x29e31c: 0x0  nop
    ctx->pc = 0x29e31cu;
    // NOP
    ctx->pc = 0x29e320u;
}
