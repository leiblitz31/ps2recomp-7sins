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

// Function: sub_002761D0
// Address: 0x2761d0 - 0x2767a0
void sub_002761D0_0x2761d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002761D0_0x2761d0");
#endif

    switch (ctx->pc) {
        case 0x2761e8u: goto label_2761e8;
        case 0x276244u: goto label_276244;
        case 0x27628cu: goto label_27628c;
        case 0x27629cu: goto label_27629c;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762f4u: goto label_2762f4;
        case 0x276300u: goto label_276300;
        case 0x276310u: goto label_276310;
        case 0x276328u: goto label_276328;
        case 0x276338u: goto label_276338;
        case 0x276348u: goto label_276348;
        case 0x276368u: goto label_276368;
        case 0x27637cu: goto label_27637c;
        case 0x276398u: goto label_276398;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763f8u: goto label_2763f8;
        case 0x276410u: goto label_276410;
        case 0x276424u: goto label_276424;
        case 0x276444u: goto label_276444;
        case 0x276454u: goto label_276454;
        case 0x27646cu: goto label_27646c;
        case 0x276480u: goto label_276480;
        case 0x2764a0u: goto label_2764a0;
        case 0x2764b0u: goto label_2764b0;
        case 0x2764c8u: goto label_2764c8;
        case 0x2764dcu: goto label_2764dc;
        case 0x2764fcu: goto label_2764fc;
        case 0x27650cu: goto label_27650c;
        case 0x276528u: goto label_276528;
        case 0x27653cu: goto label_27653c;
        case 0x27655cu: goto label_27655c;
        case 0x27656cu: goto label_27656c;
        case 0x276578u: goto label_276578;
        case 0x27658cu: goto label_27658c;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765b8u: goto label_2765b8;
        case 0x2765d0u: goto label_2765d0;
        case 0x27663cu: goto label_27663c;
        case 0x27665cu: goto label_27665c;
        case 0x276690u: goto label_276690;
        case 0x2766bcu: goto label_2766bc;
        case 0x2766ccu: goto label_2766cc;
        case 0x2766e4u: goto label_2766e4;
        case 0x276710u: goto label_276710;
        case 0x276730u: goto label_276730;
        case 0x276740u: goto label_276740;
        case 0x276760u: goto label_276760;
        case 0x276770u: goto label_276770;
        case 0x276788u: goto label_276788;
        default: break;
    }

    ctx->pc = 0x2761d0u;

    // 0x2761d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2761d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2761d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2761d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2761d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2761dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2761dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2761e0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2761E0u;
    SET_GPR_U32(ctx, 31, 0x2761E8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2761E0u, 0x2761E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2761E8u;
label_2761e8:
    // 0x2761e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2761e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2761ec: 0x24635d10  addiu       $v1, $v1, 0x5D10
    ctx->pc = 0x2761ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23824));
    // 0x2761f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2761f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2761f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2761f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2761f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2761fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2761fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276200: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x276200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276204: 0x3e00008  jr          $ra
    ctx->pc = 0x276204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27620Cu;
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
    // 0x276210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x276214: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x276214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x276218: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x276218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27621c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x276220: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x276220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x276224: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x276224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x276228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27622c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x276230: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x276230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x276234: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x276234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x276238: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27623c: 0xc09d248  jal         func_274920
    ctx->pc = 0x27623Cu;
    SET_GPR_U32(ctx, 31, 0x276244u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x27623Cu, 0x276244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276244u;
label_276244:
    // 0x276244: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276248: 0x104300dd  beq         $v0, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x276248u;
    {
        const bool branch_taken_0x276248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276248) {
            ctx->pc = 0x2765C0u;
            goto label_2765c0;
        }
    }
    ctx->pc = 0x276250u;
    // 0x276250: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x276250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276254: 0x104300de  beq         $v0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x276254u;
    {
        const bool branch_taken_0x276254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276254) {
            ctx->pc = 0x2765D0u;
            goto label_2765d0;
        }
    }
    ctx->pc = 0x27625Cu;
    // 0x27625c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276260: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276260u;
    {
        const bool branch_taken_0x276260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276260) {
            ctx->pc = 0x276270u;
            goto label_276270;
        }
    }
    ctx->pc = 0x276268u;
    // 0x276268: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x276268u;
    {
        const bool branch_taken_0x276268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276268) {
            ctx->pc = 0x2765D0u;
            goto label_2765d0;
        }
    }
    ctx->pc = 0x276270u;
label_276270:
    // 0x276270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x276270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276274: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276278: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27627c: 0x24a5d198  addiu       $a1, $a1, -0x2E68
    ctx->pc = 0x27627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955416));
    // 0x276280: 0x2786a1d8  addiu       $a2, $gp, -0x5E28
    ctx->pc = 0x276280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943192));
    // 0x276284: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x276284u;
    SET_GPR_U32(ctx, 31, 0x27628Cu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x276284u, 0x27628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27628Cu;
label_27628c:
    // 0x27628c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x276290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276294: 0xc040304  jal         func_100C10
    ctx->pc = 0x276294u;
    SET_GPR_U32(ctx, 31, 0x27629Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x276294u, 0x27629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27629Cu;
label_27629c:
    // 0x27629c: 0xc090864  jal         func_242190
    ctx->pc = 0x27629Cu;
    SET_GPR_U32(ctx, 31, 0x2762A4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27629Cu, 0x2762A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762A4u;
label_2762a4:
    // 0x2762a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2762a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762a8: 0xc090590  jal         func_241640
    ctx->pc = 0x2762A8u;
    SET_GPR_U32(ctx, 31, 0x2762B0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2762A8u, 0x2762B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762B0u;
label_2762b0:
    // 0x2762b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2762b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2762b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2762bc: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2762BCu;
    SET_GPR_U32(ctx, 31, 0x2762C4u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2762BCu, 0x2762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2762c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2762c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762cc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2762CCu;
    {
        const bool branch_taken_0x2762cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2762cc) {
            ctx->pc = 0x276580u;
            goto label_276580;
        }
    }
    ctx->pc = 0x2762D4u;
label_2762d4:
    // 0x2762d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2762d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2762d8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2762D8u;
    SET_GPR_U32(ctx, 31, 0x2762E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2762D8u, 0x2762E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762E0u;
label_2762e0:
    // 0x2762e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2762e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2762e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2762e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762ec: 0xc0744b0  jal         func_1D12C0
    ctx->pc = 0x2762ECu;
    SET_GPR_U32(ctx, 31, 0x2762F4u);
    ctx->pc = 0x1D12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12C0u, 0x2762ECu, 0x2762F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762F4u;
label_2762f4:
    // 0x2762f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2762f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2762f8: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2762F8u;
    SET_GPR_U32(ctx, 31, 0x276300u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2762F8u, 0x276300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276300u;
label_276300:
    // 0x276300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x276300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276308: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x276308u;
    SET_GPR_U32(ctx, 31, 0x276310u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x276308u, 0x276310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276310u;
label_276310:
    // 0x276310: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x276310u;
    {
        const bool branch_taken_0x276310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276310) {
            ctx->pc = 0x27657Cu;
            goto label_27657c;
        }
    }
    ctx->pc = 0x276318u;
    // 0x276318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27631c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276320: 0xc0744b0  jal         func_1D12C0
    ctx->pc = 0x276320u;
    SET_GPR_U32(ctx, 31, 0x276328u);
    ctx->pc = 0x1D12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12C0u, 0x276320u, 0x276328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276328u;
label_276328:
    // 0x276328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27632c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x27632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x276330: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276330u;
    SET_GPR_U32(ctx, 31, 0x276338u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276330u, 0x276338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276338u;
label_276338:
    // 0x276338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27633c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276340: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x276340u;
    SET_GPR_U32(ctx, 31, 0x276348u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x276340u, 0x276348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276348u;
label_276348:
    // 0x276348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27634c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x27634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276354: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276358: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27635c: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x27635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x276360: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276360u;
    SET_GPR_U32(ctx, 31, 0x276368u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276360u, 0x276368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276368u;
label_276368:
    // 0x276368: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276368u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27636c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276370: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276374: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276374u;
    SET_GPR_U32(ctx, 31, 0x27637Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276374u, 0x27637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27637Cu;
label_27637c:
    // 0x27637c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276384: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x276384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x276388: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27638c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276390: 0xc0b6a7c  jal         func_2DA9F0
    ctx->pc = 0x276390u;
    SET_GPR_U32(ctx, 31, 0x276398u);
    ctx->pc = 0x2DA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9F0u, 0x276390u, 0x276398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276398u;
label_276398:
    // 0x276398: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x276398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27639c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27639cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2763a0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2763a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2763a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2763a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2763a8: 0x24a5d1b8  addiu       $a1, $a1, -0x2E48
    ctx->pc = 0x2763a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955448));
    // 0x2763ac: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2763ACu;
    SET_GPR_U32(ctx, 31, 0x2763B4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2763ACu, 0x2763B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763B4u;
label_2763b4:
    // 0x2763b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2763b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2763b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2763b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763bc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2763bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2763c0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2763C0u;
    SET_GPR_U32(ctx, 31, 0x2763C8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2763C0u, 0x2763C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763C8u;
label_2763c8:
    // 0x2763c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2763c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2763cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2763ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2763d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2763d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2763d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2763d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2763d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763dc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2763dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2763e0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2763E0u;
    SET_GPR_U32(ctx, 31, 0x2763E8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2763E0u, 0x2763E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763E8u;
label_2763e8:
    // 0x2763e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2763ec: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2763ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2763f0: 0xc09d864  jal         func_276190
    ctx->pc = 0x2763F0u;
    SET_GPR_U32(ctx, 31, 0x2763F8u);
    ctx->pc = 0x276190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276190u, 0x2763F0u, 0x2763F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2763F8u;
label_2763f8:
    // 0x2763f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2763f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2763fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2763fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276400: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276404: 0x2785a1e0  addiu       $a1, $gp, -0x5E20
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943200));
    // 0x276408: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276408u;
    SET_GPR_U32(ctx, 31, 0x276410u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276408u, 0x276410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276410u;
label_276410:
    // 0x276410: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276410u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276418: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27641c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x27641Cu;
    SET_GPR_U32(ctx, 31, 0x276424u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x27641Cu, 0x276424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276424u;
label_276424:
    // 0x276424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276428: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27642c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27642cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x276430: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276438: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27643c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x27643Cu;
    SET_GPR_U32(ctx, 31, 0x276444u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x27643Cu, 0x276444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276444u;
label_276444:
    // 0x276444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276448: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x276448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27644c: 0xc09d864  jal         func_276190
    ctx->pc = 0x27644Cu;
    SET_GPR_U32(ctx, 31, 0x276454u);
    ctx->pc = 0x276190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276190u, 0x27644Cu, 0x276454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276454u;
label_276454:
    // 0x276454: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x276454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27645c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x27645cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276460: 0x2785a1e8  addiu       $a1, $gp, -0x5E18
    ctx->pc = 0x276460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943208));
    // 0x276464: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276464u;
    SET_GPR_U32(ctx, 31, 0x27646Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276464u, 0x27646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27646Cu;
label_27646c:
    // 0x27646c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27646cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276478: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 31, 0x276480u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276478u, 0x276480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276480u;
label_276480:
    // 0x276480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276484: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276488: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x276488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27648c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276498: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276498u;
    SET_GPR_U32(ctx, 31, 0x2764A0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276498u, 0x2764A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764A0u;
label_2764a0:
    // 0x2764a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2764a4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2764a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2764a8: 0xc09d864  jal         func_276190
    ctx->pc = 0x2764A8u;
    SET_GPR_U32(ctx, 31, 0x2764B0u);
    ctx->pc = 0x276190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276190u, 0x2764A8u, 0x2764B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764B0u;
label_2764b0:
    // 0x2764b0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2764b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2764b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2764b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2764b8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2764b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2764bc: 0x2785a1f0  addiu       $a1, $gp, -0x5E10
    ctx->pc = 0x2764bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943216));
    // 0x2764c0: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2764C0u;
    SET_GPR_U32(ctx, 31, 0x2764C8u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2764C0u, 0x2764C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764C8u;
label_2764c8:
    // 0x2764c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2764c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2764cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2764ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2764d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2764d4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2764D4u;
    SET_GPR_U32(ctx, 31, 0x2764DCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2764D4u, 0x2764DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764DCu;
label_2764dc:
    // 0x2764dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2764dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2764e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2764e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2764e4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2764e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2764e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2764e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2764ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2764ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2764f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2764f4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2764F4u;
    SET_GPR_U32(ctx, 31, 0x2764FCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2764F4u, 0x2764FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764FCu;
label_2764fc:
    // 0x2764fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276500: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x276500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x276504: 0xc09d864  jal         func_276190
    ctx->pc = 0x276504u;
    SET_GPR_U32(ctx, 31, 0x27650Cu);
    ctx->pc = 0x276190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276190u, 0x276504u, 0x27650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27650Cu;
label_27650c:
    // 0x27650c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x27650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276514: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276518: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x27651c: 0x24a5d1c8  addiu       $a1, $a1, -0x2E38
    ctx->pc = 0x27651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955464));
    // 0x276520: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276520u;
    SET_GPR_U32(ctx, 31, 0x276528u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276520u, 0x276528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276528u;
label_276528:
    // 0x276528: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276528u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27652c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27652cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276534: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276534u;
    SET_GPR_U32(ctx, 31, 0x27653Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276534u, 0x27653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27653Cu;
label_27653c:
    // 0x27653c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276540: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276544: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x276544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x276548: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27654c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276554: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276554u;
    SET_GPR_U32(ctx, 31, 0x27655Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276554u, 0x27655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27655Cu;
label_27655c:
    // 0x27655c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276560: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x276560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x276564: 0xc09d864  jal         func_276190
    ctx->pc = 0x276564u;
    SET_GPR_U32(ctx, 31, 0x27656Cu);
    ctx->pc = 0x276190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276190u, 0x276564u, 0x27656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27656Cu;
label_27656c:
    // 0x27656c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276570: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x276570u;
    SET_GPR_U32(ctx, 31, 0x276578u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x276570u, 0x276578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276578u;
label_276578:
    // 0x276578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x276578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27657c:
    // 0x27657c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27657cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_276580:
    // 0x276580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276584: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x276584u;
    SET_GPR_U32(ctx, 31, 0x27658Cu);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x276584u, 0x27658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27658Cu;
label_27658c:
    // 0x27658c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x27658cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x276590: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x276590u;
    {
        const bool branch_taken_0x276590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276590) {
            ctx->pc = 0x2762D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2762d4;
        }
    }
    ctx->pc = 0x276598u;
    // 0x276598: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x276598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27659c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2765a0: 0xc09d250  jal         func_274940
    ctx->pc = 0x2765A0u;
    SET_GPR_U32(ctx, 31, 0x2765A8u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2765A0u, 0x2765A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2765a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2765ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2765acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2765b0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2765B0u;
    SET_GPR_U32(ctx, 31, 0x2765B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2765B0u, 0x2765B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765B8u;
label_2765b8:
    // 0x2765b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2765B8u;
    {
        const bool branch_taken_0x2765b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2765b8) {
            ctx->pc = 0x2765D0u;
            goto label_2765d0;
        }
    }
    ctx->pc = 0x2765C0u;
label_2765c0:
    // 0x2765c0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2765c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2765c8: 0xc09d250  jal         func_274940
    ctx->pc = 0x2765C8u;
    SET_GPR_U32(ctx, 31, 0x2765D0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2765C8u, 0x2765D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765D0u;
label_2765d0:
    // 0x2765d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2765d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2765d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2765d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2765d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2765d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2765dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2765dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2765e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2765e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2765e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2765e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2765e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2765e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2765ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2765ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2765f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2765f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2765f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2765F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2765F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2765FCu;
    // 0x2765fc: 0x0  nop
    ctx->pc = 0x2765fcu;
    // NOP
    // 0x276600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27660c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27660cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x276610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276614: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276614u;
    {
        const bool branch_taken_0x276614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276614) {
            ctx->pc = 0x27665Cu;
            goto label_27665c;
        }
    }
    ctx->pc = 0x27661Cu;
    // 0x27661c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x276620: 0x24635d10  addiu       $v1, $v1, 0x5D10
    ctx->pc = 0x276620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23824));
    // 0x276624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27662c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276634: 0xc09d150  jal         func_274540
    ctx->pc = 0x276634u;
    SET_GPR_U32(ctx, 31, 0x27663Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x276634u, 0x27663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27663Cu;
label_27663c:
    // 0x27663c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27663cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276640: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x276640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x276644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x276644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x276648: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276648u;
    {
        const bool branch_taken_0x276648 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x276648) {
            ctx->pc = 0x27665Cu;
            goto label_27665c;
        }
    }
    ctx->pc = 0x276650u;
    // 0x276650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276654: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x276654u;
    SET_GPR_U32(ctx, 31, 0x27665Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x276654u, 0x27665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27665Cu;
label_27665c:
    // 0x27665c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276664: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276668: 0x3e00008  jr          $ra
    ctx->pc = 0x276668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276670u;
    // 0x276670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27667c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276680: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x276680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x276684: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x276684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276688: 0xc09d248  jal         func_274920
    ctx->pc = 0x276688u;
    SET_GPR_U32(ctx, 31, 0x276690u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x276688u, 0x276690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276690u;
label_276690:
    // 0x276690: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276694: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x276694u;
    {
        const bool branch_taken_0x276694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276694) {
            ctx->pc = 0x276778u;
            goto label_276778;
        }
    }
    ctx->pc = 0x27669Cu;
    // 0x27669c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2766a0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2766A0u;
    {
        const bool branch_taken_0x2766a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2766a0) {
            ctx->pc = 0x2766B0u;
            goto label_2766b0;
        }
    }
    ctx->pc = 0x2766A8u;
    // 0x2766a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2766A8u;
    {
        const bool branch_taken_0x2766a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2766a8) {
            ctx->pc = 0x276788u;
            goto label_276788;
        }
    }
    ctx->pc = 0x2766B0u;
label_2766b0:
    // 0x2766b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2766b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2766b4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2766B4u;
    SET_GPR_U32(ctx, 31, 0x2766BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2766B4u, 0x2766BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766BCu;
label_2766bc:
    // 0x2766bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2766bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2766c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766c4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2766C4u;
    SET_GPR_U32(ctx, 31, 0x2766CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2766C4u, 0x2766CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766CCu;
label_2766cc:
    // 0x2766cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2766ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2766D0u;
    {
        const bool branch_taken_0x2766d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2766d0) {
            ctx->pc = 0x2766E8u;
            goto label_2766e8;
        }
    }
    ctx->pc = 0x2766D8u;
    // 0x2766d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2766d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766dc: 0xc09d9e8  jal         func_2767A0
    ctx->pc = 0x2766DCu;
    SET_GPR_U32(ctx, 31, 0x2766E4u);
    ctx->pc = 0x2767A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2767A0u, 0x2766DCu, 0x2766E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766E4u;
label_2766e4:
    // 0x2766e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2766e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2766e8:
    // 0x2766e8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2766e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766ec: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x2766ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2766f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2766f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2766f4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2766f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2766f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2766fc: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2766fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x276700: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276704: 0x24a5d1e0  addiu       $a1, $a1, -0x2E20
    ctx->pc = 0x276704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955488));
    // 0x276708: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276708u;
    SET_GPR_U32(ctx, 31, 0x276710u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276708u, 0x276710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276710u;
label_276710:
    // 0x276710: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x276710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x276714: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276718: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x27671c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276720: 0x24a5d200  addiu       $a1, $a1, -0x2E00
    ctx->pc = 0x276720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955520));
    // 0x276724: 0x2786a1f8  addiu       $a2, $gp, -0x5E08
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943224));
    // 0x276728: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x276728u;
    SET_GPR_U32(ctx, 31, 0x276730u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x276728u, 0x276730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276730u;
label_276730:
    // 0x276730: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x276730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x276734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276738: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x276738u;
    SET_GPR_U32(ctx, 31, 0x276740u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x276738u, 0x276740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276740u;
label_276740:
    // 0x276740: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x276740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276744: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x276744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x276748: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27674c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27674cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276750: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276758: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x276758u;
    SET_GPR_U32(ctx, 31, 0x276760u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x276758u, 0x276760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276760u;
label_276760:
    // 0x276760: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x276760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276764: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276768: 0xc09d250  jal         func_274940
    ctx->pc = 0x276768u;
    SET_GPR_U32(ctx, 31, 0x276770u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276768u, 0x276770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276770u;
label_276770:
    // 0x276770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276770u;
    {
        const bool branch_taken_0x276770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276770) {
            ctx->pc = 0x276788u;
            goto label_276788;
        }
    }
    ctx->pc = 0x276778u;
label_276778:
    // 0x276778: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27677c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276780: 0xc09d250  jal         func_274940
    ctx->pc = 0x276780u;
    SET_GPR_U32(ctx, 31, 0x276788u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276780u, 0x276788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276788u;
label_276788:
    // 0x276788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27678c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27678cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276794: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x276794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276798: 0x3e00008  jr          $ra
    ctx->pc = 0x276798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2767A0u;
}
