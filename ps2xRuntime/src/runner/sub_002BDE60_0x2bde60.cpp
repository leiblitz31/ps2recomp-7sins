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

// Function: sub_002BDE60
// Address: 0x2bde60 - 0x2be7a0
void sub_002BDE60_0x2bde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE60_0x2bde60");
#endif

    switch (ctx->pc) {
        case 0x2bdea8u: goto label_2bdea8;
        case 0x2bdeb8u: goto label_2bdeb8;
        case 0x2bdec8u: goto label_2bdec8;
        case 0x2bded8u: goto label_2bded8;
        case 0x2bdee8u: goto label_2bdee8;
        case 0x2bdef8u: goto label_2bdef8;
        case 0x2bdf08u: goto label_2bdf08;
        case 0x2bdf18u: goto label_2bdf18;
        case 0x2bdf28u: goto label_2bdf28;
        case 0x2bdf38u: goto label_2bdf38;
        case 0x2bdf48u: goto label_2bdf48;
        case 0x2bdf58u: goto label_2bdf58;
        case 0x2bdf68u: goto label_2bdf68;
        case 0x2bdf74u: goto label_2bdf74;
        case 0x2bdf98u: goto label_2bdf98;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfd0u: goto label_2bdfd0;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2be018u: goto label_2be018;
        case 0x2be02cu: goto label_2be02c;
        case 0x2be048u: goto label_2be048;
        case 0x2be07cu: goto label_2be07c;
        case 0x2be0a4u: goto label_2be0a4;
        case 0x2be0d0u: goto label_2be0d0;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be108u: goto label_2be108;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be150u: goto label_2be150;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1ecu: goto label_2be1ec;
        case 0x2be208u: goto label_2be208;
        case 0x2be21cu: goto label_2be21c;
        case 0x2be244u: goto label_2be244;
        case 0x2be264u: goto label_2be264;
        case 0x2be2b0u: goto label_2be2b0;
        case 0x2be2d0u: goto label_2be2d0;
        case 0x2be304u: goto label_2be304;
        case 0x2be31cu: goto label_2be31c;
        case 0x2be330u: goto label_2be330;
        case 0x2be344u: goto label_2be344;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be358u: goto label_2be358;
        case 0x2be36cu: goto label_2be36c;
        case 0x2be384u: goto label_2be384;
        case 0x2be398u: goto label_2be398;
        case 0x2be3a4u: goto label_2be3a4;
        case 0x2be3b0u: goto label_2be3b0;
        case 0x2be3c8u: goto label_2be3c8;
        case 0x2be3e8u: goto label_2be3e8;
        case 0x2be408u: goto label_2be408;
        case 0x2be414u: goto label_2be414;
        case 0x2be42cu: goto label_2be42c;
        case 0x2be438u: goto label_2be438;
        case 0x2be444u: goto label_2be444;
        case 0x2be450u: goto label_2be450;
        case 0x2be45cu: goto label_2be45c;
        case 0x2be46cu: goto label_2be46c;
        case 0x2be47cu: goto label_2be47c;
        case 0x2be48cu: goto label_2be48c;
        case 0x2be4acu: goto label_2be4ac;
        case 0x2be4c4u: goto label_2be4c4;
        case 0x2be4dcu: goto label_2be4dc;
        case 0x2be4f4u: goto label_2be4f4;
        case 0x2be500u: goto label_2be500;
        case 0x2be514u: goto label_2be514;
        case 0x2be524u: goto label_2be524;
        case 0x2be530u: goto label_2be530;
        case 0x2be540u: goto label_2be540;
        case 0x2be54cu: goto label_2be54c;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be598u: goto label_2be598;
        case 0x2be5e4u: goto label_2be5e4;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be610u: goto label_2be610;
        case 0x2be628u: goto label_2be628;
        case 0x2be63cu: goto label_2be63c;
        case 0x2be654u: goto label_2be654;
        case 0x2be668u: goto label_2be668;
        case 0x2be680u: goto label_2be680;
        case 0x2be694u: goto label_2be694;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6ecu: goto label_2be6ec;
        case 0x2be6fcu: goto label_2be6fc;
        case 0x2be708u: goto label_2be708;
        case 0x2be71cu: goto label_2be71c;
        case 0x2be72cu: goto label_2be72c;
        case 0x2be738u: goto label_2be738;
        case 0x2be74cu: goto label_2be74c;
        case 0x2be75cu: goto label_2be75c;
        case 0x2be76cu: goto label_2be76c;
        default: break;
    }

    ctx->pc = 0x2bde60u;

    // 0x2bde60: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2bde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2bde64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bde64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bde68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2bde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2bde6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2bde70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bde70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bde74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bde78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bde78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bde7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bde7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bde80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bde84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bde84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bde88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bde88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bde8c: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2bde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x2bde90: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x2bde90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x2bde94: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x2bde94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
    // 0x2bde98: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2bde98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bde9c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bde9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bdea0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BDEA0u;
    SET_GPR_U32(ctx, 31, 0x2BDEA8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BDEA0u, 0x2BDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEA8u;
label_2bdea8:
    // 0x2bdea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdeb0: 0xc096814  jal         func_25A050
    ctx->pc = 0x2BDEB0u;
    SET_GPR_U32(ctx, 31, 0x2BDEB8u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x2BDEB0u, 0x2BDEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEB8u;
label_2bdeb8:
    // 0x2bdeb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bdeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdec0: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDEC0u;
    SET_GPR_U32(ctx, 31, 0x2BDEC8u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDEC0u, 0x2BDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEC8u;
label_2bdec8:
    // 0x2bdec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bdeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bded0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2BDED0u;
    SET_GPR_U32(ctx, 31, 0x2BDED8u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2BDED0u, 0x2BDED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDED8u;
label_2bded8:
    // 0x2bded8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2bded8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdedc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bdedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdee0: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDEE0u;
    SET_GPR_U32(ctx, 31, 0x2BDEE8u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDEE0u, 0x2BDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEE8u;
label_2bdee8:
    // 0x2bdee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2bdeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bdef0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2BDEF0u;
    SET_GPR_U32(ctx, 31, 0x2BDEF8u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2BDEF0u, 0x2BDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEF8u;
label_2bdef8:
    // 0x2bdef8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bdef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdefc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf00: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDF00u;
    SET_GPR_U32(ctx, 31, 0x2BDF08u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDF00u, 0x2BDF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF08u;
label_2bdf08:
    // 0x2bdf08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf10: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2BDF10u;
    SET_GPR_U32(ctx, 31, 0x2BDF18u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2BDF10u, 0x2BDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF18u;
label_2bdf18:
    // 0x2bdf18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bdf18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf20: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDF20u;
    SET_GPR_U32(ctx, 31, 0x2BDF28u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDF20u, 0x2BDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF28u;
label_2bdf28:
    // 0x2bdf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2bdf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bdf30: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2BDF30u;
    SET_GPR_U32(ctx, 31, 0x2BDF38u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2BDF30u, 0x2BDF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF38u;
label_2bdf38:
    // 0x2bdf38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bdf38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf40: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDF40u;
    SET_GPR_U32(ctx, 31, 0x2BDF48u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDF40u, 0x2BDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF48u;
label_2bdf48:
    // 0x2bdf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2bdf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bdf50: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2BDF50u;
    SET_GPR_U32(ctx, 31, 0x2BDF58u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2BDF50u, 0x2BDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF58u;
label_2bdf58:
    // 0x2bdf58: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2bdf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2bdf5c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2bdf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2bdf60: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BDF60u;
    SET_GPR_U32(ctx, 31, 0x2BDF68u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BDF60u, 0x2BDF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF68u;
label_2bdf68:
    // 0x2bdf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf6c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2BDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF74u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2BDF6Cu, 0x2BDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF74u;
label_2bdf74:
    // 0x2bdf74: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2bdf74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf78: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x2bdf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x2bdf7c: 0xa3a0016f  sb          $zero, 0x16F($sp)
    ctx->pc = 0x2bdf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bdf80: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x2BDF80u;
    {
        const bool branch_taken_0x2bdf80 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdf80) {
            ctx->pc = 0x2BDFACu;
            goto label_2bdfac;
        }
    }
    ctx->pc = 0x2BDF88u;
    // 0x2bdf88: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2bdf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf8c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bdf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bdf90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BDF90u;
    SET_GPR_U32(ctx, 31, 0x2BDF98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BDF90u, 0x2BDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF98u;
label_2bdf98:
    // 0x2bdf98: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2bdf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x2bdf9c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2bdf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2bdfa0: 0xc0482f0  jal         func_120BC0
    ctx->pc = 0x2BDFA0u;
    SET_GPR_U32(ctx, 31, 0x2BDFA8u);
    ctx->pc = 0x120BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120BC0u, 0x2BDFA0u, 0x2BDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFA8u;
label_2bdfa8:
    // 0x2bdfa8: 0xa3a2016f  sb          $v0, 0x16F($sp)
    ctx->pc = 0x2bdfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 2));
label_2bdfac:
    // 0x2bdfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfb0: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2BDFB0u;
    SET_GPR_U32(ctx, 31, 0x2BDFB8u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2BDFB0u, 0x2BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFB8u;
label_2bdfb8:
    // 0x2bdfb8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BDFB8u;
    {
        const bool branch_taken_0x2bdfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdfb8) {
            ctx->pc = 0x2BE038u;
            goto label_2be038;
        }
    }
    ctx->pc = 0x2BDFC0u;
    // 0x2bdfc0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2bdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bdfc4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bdfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bdfc8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BDFC8u;
    SET_GPR_U32(ctx, 31, 0x2BDFD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BDFC8u, 0x2BDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFD0u;
label_2bdfd0:
    // 0x2bdfd0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2bdfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2bdfd4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bdfd8: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x2bdfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bdfdc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDFDCu;
    {
        const bool branch_taken_0x2bdfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdfdc) {
            ctx->pc = 0x2BDFF8u;
            goto label_2bdff8;
        }
    }
    ctx->pc = 0x2BDFE4u;
    // 0x2bdfe4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2bdfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bdfe8: 0xc0ae184  jal         func_2B8610
    ctx->pc = 0x2BDFE8u;
    SET_GPR_U32(ctx, 31, 0x2BDFF0u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2BDFE8u, 0x2BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFF0u;
label_2bdff0:
    // 0x2bdff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDFF0u;
    {
        const bool branch_taken_0x2bdff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdff0) {
            ctx->pc = 0x2BE000u;
            goto label_2be000;
        }
    }
    ctx->pc = 0x2BDFF8u;
label_2bdff8:
    // 0x2bdff8: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x2BDFF8u;
    {
        const bool branch_taken_0x2bdff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdff8) {
            ctx->pc = 0x2BE76Cu;
            goto label_2be76c;
        }
    }
    ctx->pc = 0x2BE000u;
label_2be000:
    // 0x2be000: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2be000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2be004: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE004u;
    {
        const bool branch_taken_0x2be004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be004) {
            ctx->pc = 0x2BE038u;
            goto label_2be038;
        }
    }
    ctx->pc = 0x2BE00Cu;
    // 0x2be00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be010: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BE010u;
    SET_GPR_U32(ctx, 31, 0x2BE018u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BE010u, 0x2BE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE018u;
label_2be018:
    // 0x2be018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE018u;
    {
        const bool branch_taken_0x2be018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be018) {
            ctx->pc = 0x2BE038u;
            goto label_2be038;
        }
    }
    ctx->pc = 0x2BE020u;
    // 0x2be020: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2be020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2be024: 0xc0976e4  jal         func_25DB90
    ctx->pc = 0x2BE024u;
    SET_GPR_U32(ctx, 31, 0x2BE02Cu);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x2BE024u, 0x2BE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE02Cu;
label_2be02c:
    // 0x2be02c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2be02cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be030: 0x102001ce  beqz        $at, . + 4 + (0x1CE << 2)
    ctx->pc = 0x2BE030u;
    {
        const bool branch_taken_0x2be030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be030) {
            ctx->pc = 0x2BE76Cu;
            goto label_2be76c;
        }
    }
    ctx->pc = 0x2BE038u;
label_2be038:
    // 0x2be038: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2be038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2be03c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x2be03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be040: 0xc0af520  jal         func_2BD480
    ctx->pc = 0x2BE040u;
    SET_GPR_U32(ctx, 31, 0x2BE048u);
    ctx->pc = 0x2BD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD480u, 0x2BE040u, 0x2BE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE048u;
label_2be048:
    // 0x2be048: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2be048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2be04c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2be04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2be050: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2be050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be054: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2be054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be058: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2be058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be05c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2be05cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2be060: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2be060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2be064: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2be064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2be068: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2be068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2be06c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2be06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be070: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE070u;
    {
        const bool branch_taken_0x2be070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be070) {
            ctx->pc = 0x2BE098u;
            goto label_2be098;
        }
    }
    ctx->pc = 0x2BE078u;
    // 0x2be078: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2be07c:
    // 0x2be07c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2be07cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be080: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2be084: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2be084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2be088: 0x0  nop
    ctx->pc = 0x2be088u;
    // NOP
    // 0x2be08c: 0x0  nop
    ctx->pc = 0x2be08cu;
    // NOP
    // 0x2be090: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BE090u;
    {
        const bool branch_taken_0x2be090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be090) {
            ctx->pc = 0x2BE07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be07c;
        }
    }
    ctx->pc = 0x2BE098u;
label_2be098:
    // 0x2be098: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2be098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be09c: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2BE09Cu;
    SET_GPR_U32(ctx, 31, 0x2BE0A4u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2BE09Cu, 0x2BE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0A4u;
label_2be0a4:
    // 0x2be0a4: 0x17c0000d  bnez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE0A4u;
    {
        const bool branch_taken_0x2be0a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be0a4) {
            ctx->pc = 0x2BE0DCu;
            goto label_2be0dc;
        }
    }
    ctx->pc = 0x2BE0ACu;
    // 0x2be0ac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2be0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2be0b0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2be0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2be0b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2be0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be0b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2be0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be0bc: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x2be0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be0c0: 0xc44c00ac  lwc1        $f12, 0xAC($v0)
    ctx->pc = 0x2be0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be0c4: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2be0c8: 0xc0afdd0  jal         func_2BF740
    ctx->pc = 0x2BE0C8u;
    SET_GPR_U32(ctx, 31, 0x2BE0D0u);
    ctx->pc = 0x2BF740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF740u, 0x2BE0C8u, 0x2BE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0D0u;
label_2be0d0:
    // 0x2be0d0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2be0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2be0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE0D4u;
    {
        const bool branch_taken_0x2be0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be0d4) {
            ctx->pc = 0x2BE0E0u;
            goto label_2be0e0;
        }
    }
    ctx->pc = 0x2BE0DCu;
label_2be0dc:
    // 0x2be0dc: 0xafbe00e0  sw          $fp, 0xE0($sp)
    ctx->pc = 0x2be0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 30));
label_2be0e0:
    // 0x2be0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0e4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2be0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2be0e8: 0xc0968b0  jal         func_25A2C0
    ctx->pc = 0x2BE0E8u;
    SET_GPR_U32(ctx, 31, 0x2BE0F0u);
    ctx->pc = 0x25A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2C0u, 0x2BE0E8u, 0x2BE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0F0u;
label_2be0f0:
    // 0x2be0f0: 0x93a2016f  lbu         $v0, 0x16F($sp)
    ctx->pc = 0x2be0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2be0f4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BE0F4u;
    {
        const bool branch_taken_0x2be0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be0f4) {
            ctx->pc = 0x2BE1DCu;
            goto label_2be1dc;
        }
    }
    ctx->pc = 0x2BE0FCu;
    // 0x2be0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be100: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BE100u;
    SET_GPR_U32(ctx, 31, 0x2BE108u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BE100u, 0x2BE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE108u;
label_2be108:
    // 0x2be108: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2be108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2be10c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2be10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2be110: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BE110u;
    {
        const bool branch_taken_0x2be110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be110) {
            ctx->pc = 0x2BE150u;
            goto label_2be150;
        }
    }
    ctx->pc = 0x2BE118u;
    // 0x2be118: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2be118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2be11c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2be11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be120: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2be120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2be124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be128: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2be128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be12c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x2be12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be130: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2be134: 0xc0afdd0  jal         func_2BF740
    ctx->pc = 0x2BE134u;
    SET_GPR_U32(ctx, 31, 0x2BE13Cu);
    ctx->pc = 0x2BF740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF740u, 0x2BE134u, 0x2BE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE13Cu;
label_2be13c:
    // 0x2be13c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2be13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2be140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be144: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x2be144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2be148: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x2BE148u;
    SET_GPR_U32(ctx, 31, 0x2BE150u);
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x2BE148u, 0x2BE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE150u;
label_2be150:
    // 0x2be150: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2be154: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2be154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2be158: 0xa3a2016e  sb          $v0, 0x16E($sp)
    ctx->pc = 0x2be158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be15c: 0x93a2016e  lbu         $v0, 0x16E($sp)
    ctx->pc = 0x2be15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 366)));
    // 0x2be160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE160u;
    {
        const bool branch_taken_0x2be160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be160) {
            ctx->pc = 0x2BE180u;
            goto label_2be180;
        }
    }
    ctx->pc = 0x2BE168u;
    // 0x2be168: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2be168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2be16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be170: 0x0  nop
    ctx->pc = 0x2be170u;
    // NOP
    // 0x2be174: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2be174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2be178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE178u;
    {
        const bool branch_taken_0x2be178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be178) {
            ctx->pc = 0x2BE190u;
            goto label_2be190;
        }
    }
    ctx->pc = 0x2BE180u;
label_2be180:
    // 0x2be180: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2be180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2be184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be188: 0x0  nop
    ctx->pc = 0x2be188u;
    // NOP
    // 0x2be18c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2be18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2be190:
    // 0x2be190: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2be190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be194: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2be194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2be198: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2be198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2be19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2be1a4: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x2be1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be1a8: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x2be1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be1ac: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x2be1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2be1b0: 0xc0afdd0  jal         func_2BF740
    ctx->pc = 0x2BE1B0u;
    SET_GPR_U32(ctx, 31, 0x2BE1B8u);
    ctx->pc = 0x2BF740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF740u, 0x2BE1B0u, 0x2BE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1B8u;
label_2be1b8:
    // 0x2be1b8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2be1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2be1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1c0: 0xc096ad0  jal         func_25AB40
    ctx->pc = 0x2BE1C0u;
    SET_GPR_U32(ctx, 31, 0x2BE1C8u);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x2BE1C0u, 0x2BE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1C8u;
label_2be1c8:
    // 0x2be1c8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2be1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2be1cc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2be1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be1d0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2be1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2be1d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BE1D4u;
    {
        const bool branch_taken_0x2be1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be1d4) {
            ctx->pc = 0x2BE208u;
            goto label_2be208;
        }
    }
    ctx->pc = 0x2BE1DCu;
label_2be1dc:
    // 0x2be1dc: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2be1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be1e0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2be1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be1e4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BE1E4u;
    SET_GPR_U32(ctx, 31, 0x2BE1ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BE1E4u, 0x2BE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1ECu;
label_2be1ec:
    // 0x2be1ec: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x2be1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x2be1f0: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2be1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2be1f4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2be1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2be1f8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2be1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be1fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be200: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE200u;
    SET_GPR_U32(ctx, 31, 0x2BE208u);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE200u, 0x2BE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE208u;
label_2be208:
    // 0x2be208: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x2be208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x2be20c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2be20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2be210: 0x24a5e0d0  addiu       $a1, $a1, -0x1F30
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959312));
    // 0x2be214: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2be214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2be218: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2be218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2be21c:
    // 0x2be21c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2be21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be220: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2be224: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2be228: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2be228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2be22c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2be22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2be230: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BE230u;
    {
        const bool branch_taken_0x2be230 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2be230) {
            ctx->pc = 0x2BE21Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be21c;
        }
    }
    ctx->pc = 0x2BE238u;
    // 0x2be238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be23c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BE23Cu;
    SET_GPR_U32(ctx, 31, 0x2BE244u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BE23Cu, 0x2BE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE244u;
label_2be244:
    // 0x2be244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE244u;
    {
        const bool branch_taken_0x2be244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be244) {
            ctx->pc = 0x2BE258u;
            goto label_2be258;
        }
    }
    ctx->pc = 0x2BE24Cu;
    // 0x2be24c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2be24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2be250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be254: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2be254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_2be258:
    // 0x2be258: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2be258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be25c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2BE25Cu;
    {
        const bool branch_taken_0x2be25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be25c) {
            ctx->pc = 0x2BE580u;
            goto label_2be580;
        }
    }
    ctx->pc = 0x2BE264u;
label_2be264:
    // 0x2be264: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2be268: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2be268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2be26c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2be26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2be270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be274: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2be274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2be278: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2be27c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2be27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x2be280: 0x17c00019  bnez        $fp, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE280u;
    {
        const bool branch_taken_0x2be280 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be280) {
            ctx->pc = 0x2BE2E8u;
            goto label_2be2e8;
        }
    }
    ctx->pc = 0x2BE288u;
    // 0x2be288: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2be288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2be28c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2be28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2be290: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2be290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2be294: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BE294u;
    {
        const bool branch_taken_0x2be294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be294) {
            ctx->pc = 0x2BE2E8u;
            goto label_2be2e8;
        }
    }
    ctx->pc = 0x2BE29Cu;
    // 0x2be29c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2be29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2be2a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2be2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2be2a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2be2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be2a8: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x2BE2A8u;
    SET_GPR_U32(ctx, 31, 0x2BE2B0u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2BE2A8u, 0x2BE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2B0u;
label_2be2b0:
    // 0x2be2b0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2be2b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2be2b4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2be2b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2be2b8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2BE2B8u;
    {
        const bool branch_taken_0x2be2b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2b8) {
            ctx->pc = 0x2BE2E8u;
            goto label_2be2e8;
        }
    }
    ctx->pc = 0x2BE2C0u;
    // 0x2be2c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2be2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be2c4: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2be2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2be2c8: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2BE2C8u;
    SET_GPR_U32(ctx, 31, 0x2BE2D0u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2BE2C8u, 0x2BE2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2D0u;
label_2be2d0:
    // 0x2be2d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be2d4: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2be2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x2be2d8: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2be2dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be2e0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2be2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2be2e4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2be2e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2be2e8:
    // 0x2be2e8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2be2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2be2ec: 0x100200a3  beq         $zero, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BE2ECu;
    {
        const bool branch_taken_0x2be2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be2ec) {
            ctx->pc = 0x2BE57Cu;
            goto label_2be57c;
        }
    }
    ctx->pc = 0x2BE2F4u;
    // 0x2be2f4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2be2f8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be2fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BE2FCu;
    SET_GPR_U32(ctx, 31, 0x2BE304u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BE2FCu, 0x2BE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE304u;
label_2be304:
    // 0x2be304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2be304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be308: 0x1013009c  beq         $zero, $s3, . + 4 + (0x9C << 2)
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2BE57Cu;
            goto label_2be57c;
        }
    }
    ctx->pc = 0x2BE310u;
    // 0x2be310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be314: 0xc09bab0  jal         func_26EAC0
    ctx->pc = 0x2BE314u;
    SET_GPR_U32(ctx, 31, 0x2BE31Cu);
    ctx->pc = 0x26EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAC0u, 0x2BE314u, 0x2BE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE31Cu;
label_2be31c:
    // 0x2be31c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2BE31Cu;
    {
        const bool branch_taken_0x2be31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be31c) {
            ctx->pc = 0x2BE494u;
            goto label_2be494;
        }
    }
    ctx->pc = 0x2BE324u;
    // 0x2be324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be328: 0xc09bad0  jal         func_26EB40
    ctx->pc = 0x2BE328u;
    SET_GPR_U32(ctx, 31, 0x2BE330u);
    ctx->pc = 0x26EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EB40u, 0x2BE328u, 0x2BE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE330u;
label_2be330:
    // 0x2be330: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2BE330u;
    {
        const bool branch_taken_0x2be330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be330) {
            ctx->pc = 0x2BE494u;
            goto label_2be494;
        }
    }
    ctx->pc = 0x2BE338u;
    // 0x2be338: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2be338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2be33c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2BE33Cu;
    SET_GPR_U32(ctx, 31, 0x2BE344u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2BE33Cu, 0x2BE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE344u;
label_2be344:
    // 0x2be344: 0xc090864  jal         func_242190
    ctx->pc = 0x2BE344u;
    SET_GPR_U32(ctx, 31, 0x2BE34Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2BE344u, 0x2BE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE34Cu;
label_2be34c:
    // 0x2be34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be350: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2BE350u;
    SET_GPR_U32(ctx, 31, 0x2BE358u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2BE350u, 0x2BE358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE358u;
label_2be358:
    // 0x2be358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be35c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2be35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2be360: 0x24a5e0e8  addiu       $a1, $a1, -0x1F18
    ctx->pc = 0x2be360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959336));
    // 0x2be364: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2BE364u;
    SET_GPR_U32(ctx, 31, 0x2BE36Cu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2BE364u, 0x2BE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE36Cu;
label_2be36c:
    // 0x2be36c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2be36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2be370: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2be374: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2be374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2be378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be37c: 0xc09baf8  jal         func_26EBE0
    ctx->pc = 0x2BE37Cu;
    SET_GPR_U32(ctx, 31, 0x2BE384u);
    ctx->pc = 0x26EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EBE0u, 0x2BE37Cu, 0x2BE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE384u;
label_2be384:
    // 0x2be384: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2be384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2be388: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2be388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x2be38c: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x2be38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2be390: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2BE390u;
    SET_GPR_U32(ctx, 31, 0x2BE398u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2BE390u, 0x2BE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE398u;
label_2be398:
    // 0x2be398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be39c: 0xc041a60  jal         func_106980
    ctx->pc = 0x2BE39Cu;
    SET_GPR_U32(ctx, 31, 0x2BE3A4u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2BE39Cu, 0x2BE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3A4u;
label_2be3a4:
    // 0x2be3a4: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2be3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x2be3a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE3A8u;
    {
        const bool branch_taken_0x2be3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3a8) {
            ctx->pc = 0x2BE3F4u;
            goto label_2be3f4;
        }
    }
    ctx->pc = 0x2BE3B0u;
label_2be3b0:
    // 0x2be3b0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2be3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2be3b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2be3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be3b8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2be3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x2be3bc: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2be3c0: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2BE3C0u;
    SET_GPR_U32(ctx, 31, 0x2BE3C8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BE3C0u, 0x2BE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3C8u;
label_2be3c8:
    // 0x2be3c8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2be3cc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE3CCu;
    {
        const bool branch_taken_0x2be3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2be3cc) {
            ctx->pc = 0x2BE3E8u;
            goto label_2be3e8;
        }
    }
    ctx->pc = 0x2BE3D4u;
    // 0x2be3d4: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2be3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2be3d8: 0x240504c0  addiu       $a1, $zero, 0x4C0
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x2be3dc: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x2be3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2be3e0: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2BE3E0u;
    SET_GPR_U32(ctx, 31, 0x2BE3E8u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2BE3E0u, 0x2BE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3E8u;
label_2be3e8:
    // 0x2be3e8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2be3ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2be3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2be3f0: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2be3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_2be3f4:
    // 0x2be3f4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2be3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2be3f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2be3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2be3fc: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x2be3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2be400: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2BE400u;
    SET_GPR_U32(ctx, 31, 0x2BE408u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2BE400u, 0x2BE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE408u;
label_2be408:
    // 0x2be408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be40c: 0xc041a14  jal         func_106850
    ctx->pc = 0x2BE40Cu;
    SET_GPR_U32(ctx, 31, 0x2BE414u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2BE40Cu, 0x2BE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE414u;
label_2be414:
    // 0x2be414: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2be414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2be418: 0x1462ffe5  bne         $v1, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2BE418u;
    {
        const bool branch_taken_0x2be418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be418) {
            ctx->pc = 0x2BE3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be3b0;
        }
    }
    ctx->pc = 0x2BE420u;
    // 0x2be420: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2be420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be424: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE424u;
    SET_GPR_U32(ctx, 31, 0x2BE42Cu);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE424u, 0x2BE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE42Cu;
label_2be42c:
    // 0x2be42c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2be42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be430: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE430u;
    SET_GPR_U32(ctx, 31, 0x2BE438u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE430u, 0x2BE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE438u;
label_2be438:
    // 0x2be438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be43c: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE43Cu;
    SET_GPR_U32(ctx, 31, 0x2BE444u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE43Cu, 0x2BE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE444u;
label_2be444:
    // 0x2be444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be448: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE448u;
    SET_GPR_U32(ctx, 31, 0x2BE450u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE448u, 0x2BE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE450u;
label_2be450:
    // 0x2be450: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2be454: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE454u;
    SET_GPR_U32(ctx, 31, 0x2BE45Cu);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE454u, 0x2BE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE45Cu;
label_2be45c:
    // 0x2be45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be460: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2be460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2be464: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE464u;
    SET_GPR_U32(ctx, 31, 0x2BE46Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE464u, 0x2BE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE46Cu;
label_2be46c:
    // 0x2be46c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be470: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2be470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2be474: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE474u;
    SET_GPR_U32(ctx, 31, 0x2BE47Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE474u, 0x2BE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE47Cu;
label_2be47c:
    // 0x2be47c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2be47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be480: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be484: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2BE484u;
    SET_GPR_U32(ctx, 31, 0x2BE48Cu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2BE484u, 0x2BE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE48Cu;
label_2be48c:
    // 0x2be48c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BE48Cu;
    {
        const bool branch_taken_0x2be48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be48c) {
            ctx->pc = 0x2BE76Cu;
            goto label_2be76c;
        }
    }
    ctx->pc = 0x2BE494u;
label_2be494:
    // 0x2be494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be498: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2be498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be49c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2be49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be4a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4a4: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE4A4u;
    SET_GPR_U32(ctx, 31, 0x2BE4ACu);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE4A4u, 0x2BE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4ACu;
label_2be4ac:
    // 0x2be4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2be4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2be4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be4b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4bc: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE4BCu;
    SET_GPR_U32(ctx, 31, 0x2BE4C4u);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE4BCu, 0x2BE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4C4u;
label_2be4c4:
    // 0x2be4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2be4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2be4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be4d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4d4: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE4D4u;
    SET_GPR_U32(ctx, 31, 0x2BE4DCu);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE4D4u, 0x2BE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4DCu;
label_2be4dc:
    // 0x2be4dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2be4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4ec: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE4ECu;
    SET_GPR_U32(ctx, 31, 0x2BE4F4u);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE4ECu, 0x2BE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE4F4u;
label_2be4f4:
    // 0x2be4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4f8: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2BE4F8u;
    SET_GPR_U32(ctx, 31, 0x2BE500u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2BE4F8u, 0x2BE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE500u;
label_2be500:
    // 0x2be500: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE500u;
    {
        const bool branch_taken_0x2be500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be500) {
            ctx->pc = 0x2BE558u;
            goto label_2be558;
        }
    }
    ctx->pc = 0x2BE508u;
    // 0x2be508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be50c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BE50Cu;
    SET_GPR_U32(ctx, 31, 0x2BE514u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BE50Cu, 0x2BE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE514u;
label_2be514:
    // 0x2be514: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BE514u;
    {
        const bool branch_taken_0x2be514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be514) {
            ctx->pc = 0x2BE558u;
            goto label_2be558;
        }
    }
    ctx->pc = 0x2BE51Cu;
    // 0x2be51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE51Cu;
    {
        const bool branch_taken_0x2be51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be51c) {
            ctx->pc = 0x2BE540u;
            goto label_2be540;
        }
    }
    ctx->pc = 0x2BE524u;
label_2be524:
    // 0x2be524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be528: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2BE528u;
    SET_GPR_U32(ctx, 31, 0x2BE530u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2BE528u, 0x2BE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE530u;
label_2be530:
    // 0x2be530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be538: 0xc0afa04  jal         func_2BE810
    ctx->pc = 0x2BE538u;
    SET_GPR_U32(ctx, 31, 0x2BE540u);
    ctx->pc = 0x2BE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE810u, 0x2BE538u, 0x2BE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE540u;
label_2be540:
    // 0x2be540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be544: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2BE544u;
    SET_GPR_U32(ctx, 31, 0x2BE54Cu);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2BE544u, 0x2BE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE54Cu;
label_2be54c:
    // 0x2be54c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2be54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be550: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BE550u;
    {
        const bool branch_taken_0x2be550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be550) {
            ctx->pc = 0x2BE524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be524;
        }
    }
    ctx->pc = 0x2BE558u;
label_2be558:
    // 0x2be558: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2be558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be55c: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE55Cu;
    {
        const bool branch_taken_0x2be55c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be55c) {
            ctx->pc = 0x2BE57Cu;
            goto label_2be57c;
        }
    }
    ctx->pc = 0x2BE564u;
    // 0x2be564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2be564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be568: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2be568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2be56c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2be56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be570: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2be570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be574: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2BE574u;
    SET_GPR_U32(ctx, 31, 0x2BE57Cu);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2BE574u, 0x2BE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE57Cu;
label_2be57c:
    // 0x2be57c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2be57cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2be580:
    // 0x2be580: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x2be580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2be584: 0x1440ff37  bnez        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x2BE584u;
    {
        const bool branch_taken_0x2be584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be584) {
            ctx->pc = 0x2BE264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be264;
        }
    }
    ctx->pc = 0x2BE58Cu;
    // 0x2be58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be590: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BE590u;
    SET_GPR_U32(ctx, 31, 0x2BE598u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BE590u, 0x2BE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE598u;
label_2be598:
    // 0x2be598: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2BE598u;
    {
        const bool branch_taken_0x2be598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be598) {
            ctx->pc = 0x2BE69Cu;
            goto label_2be69c;
        }
    }
    ctx->pc = 0x2BE5A0u;
    // 0x2be5a0: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2be5a4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BE5A4u;
    {
        const bool branch_taken_0x2be5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5a4) {
            ctx->pc = 0x2BE65Cu;
            goto label_2be65c;
        }
    }
    ctx->pc = 0x2BE5ACu;
    // 0x2be5ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2be5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be5b0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BE5B0u;
    {
        const bool branch_taken_0x2be5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be5b0) {
            ctx->pc = 0x2BE630u;
            goto label_2be630;
        }
    }
    ctx->pc = 0x2BE5B8u;
    // 0x2be5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2be5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be5bc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE5BCu;
    {
        const bool branch_taken_0x2be5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be5bc) {
            ctx->pc = 0x2BE604u;
            goto label_2be604;
        }
    }
    ctx->pc = 0x2BE5C4u;
    // 0x2be5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be5c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE5C8u;
    {
        const bool branch_taken_0x2be5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be5c8) {
            ctx->pc = 0x2BE5D8u;
            goto label_2be5d8;
        }
    }
    ctx->pc = 0x2BE5D0u;
    // 0x2be5d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2BE5D0u;
    {
        const bool branch_taken_0x2be5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5d0) {
            ctx->pc = 0x2BE688u;
            goto label_2be688;
        }
    }
    ctx->pc = 0x2BE5D8u;
label_2be5d8:
    // 0x2be5d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2be5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5dc: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE5DCu;
    SET_GPR_U32(ctx, 31, 0x2BE5E4u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE5DCu, 0x2BE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5E4u;
label_2be5e4:
    // 0x2be5e4: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2BE5E4u;
    {
        const bool branch_taken_0x2be5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be5e4) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE5ECu;
    // 0x2be5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2be5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5f4: 0xc0af9f4  jal         func_2BE7D0
    ctx->pc = 0x2BE5F4u;
    SET_GPR_U32(ctx, 31, 0x2BE5FCu);
    ctx->pc = 0x2BE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7D0u, 0x2BE5F4u, 0x2BE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5FCu;
label_2be5fc:
    // 0x2be5fc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2BE5FCu;
    {
        const bool branch_taken_0x2be5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5fc) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE604u;
label_2be604:
    // 0x2be604: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2be604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be608: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE608u;
    SET_GPR_U32(ctx, 31, 0x2BE610u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE608u, 0x2BE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE610u;
label_2be610:
    // 0x2be610: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2BE610u;
    {
        const bool branch_taken_0x2be610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be610) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE618u;
    // 0x2be618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be61c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2be61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be620: 0xc0af9f4  jal         func_2BE7D0
    ctx->pc = 0x2BE620u;
    SET_GPR_U32(ctx, 31, 0x2BE628u);
    ctx->pc = 0x2BE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7D0u, 0x2BE620u, 0x2BE628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE628u;
label_2be628:
    // 0x2be628: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2BE628u;
    {
        const bool branch_taken_0x2be628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be628) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE630u;
label_2be630:
    // 0x2be630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be634: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE634u;
    SET_GPR_U32(ctx, 31, 0x2BE63Cu);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE634u, 0x2BE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE63Cu;
label_2be63c:
    // 0x2be63c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2BE63Cu;
    {
        const bool branch_taken_0x2be63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be63c) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE644u;
    // 0x2be644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2be648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be64c: 0xc0af9f4  jal         func_2BE7D0
    ctx->pc = 0x2BE64Cu;
    SET_GPR_U32(ctx, 31, 0x2BE654u);
    ctx->pc = 0x2BE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7D0u, 0x2BE64Cu, 0x2BE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE654u;
label_2be654:
    // 0x2be654: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2BE654u;
    {
        const bool branch_taken_0x2be654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be654) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE65Cu;
label_2be65c:
    // 0x2be65c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be660: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE660u;
    SET_GPR_U32(ctx, 31, 0x2BE668u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE660u, 0x2BE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE668u;
label_2be668:
    // 0x2be668: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2BE668u;
    {
        const bool branch_taken_0x2be668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be668) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE670u;
    // 0x2be670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2be674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be678: 0xc0af9f4  jal         func_2BE7D0
    ctx->pc = 0x2BE678u;
    SET_GPR_U32(ctx, 31, 0x2BE680u);
    ctx->pc = 0x2BE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7D0u, 0x2BE678u, 0x2BE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE680u;
label_2be680:
    // 0x2be680: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2BE680u;
    {
        const bool branch_taken_0x2be680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be680) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE688u;
label_2be688:
    // 0x2be688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be68c: 0xc09d3d0  jal         func_274F40
    ctx->pc = 0x2BE68Cu;
    SET_GPR_U32(ctx, 31, 0x2BE694u);
    ctx->pc = 0x274F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274F40u, 0x2BE68Cu, 0x2BE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE694u;
label_2be694:
    // 0x2be694: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2BE694u;
    {
        const bool branch_taken_0x2be694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be694) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE69Cu;
label_2be69c:
    // 0x2be69c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2be69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6a0: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE6A0u;
    SET_GPR_U32(ctx, 31, 0x2BE6A8u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE6A0u, 0x2BE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6A8u;
label_2be6a8:
    // 0x2be6a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE6A8u;
    {
        const bool branch_taken_0x2be6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be6a8) {
            ctx->pc = 0x2BE6CCu;
            goto label_2be6cc;
        }
    }
    ctx->pc = 0x2BE6B0u;
    // 0x2be6b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2be6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6b4: 0xc0af9e8  jal         func_2BE7A0
    ctx->pc = 0x2BE6B4u;
    SET_GPR_U32(ctx, 31, 0x2BE6BCu);
    ctx->pc = 0x2BE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7A0u, 0x2BE6B4u, 0x2BE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6BCu;
label_2be6bc:
    // 0x2be6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6c4: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE6C4u;
    SET_GPR_U32(ctx, 31, 0x2BE6CCu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE6C4u, 0x2BE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6CCu;
label_2be6cc:
    // 0x2be6cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2be6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6d0: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE6D0u;
    SET_GPR_U32(ctx, 31, 0x2BE6D8u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE6D0u, 0x2BE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6D8u;
label_2be6d8:
    // 0x2be6d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE6D8u;
    {
        const bool branch_taken_0x2be6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be6d8) {
            ctx->pc = 0x2BE6FCu;
            goto label_2be6fc;
        }
    }
    ctx->pc = 0x2BE6E0u;
    // 0x2be6e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2be6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6e4: 0xc0af9e8  jal         func_2BE7A0
    ctx->pc = 0x2BE6E4u;
    SET_GPR_U32(ctx, 31, 0x2BE6ECu);
    ctx->pc = 0x2BE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7A0u, 0x2BE6E4u, 0x2BE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6ECu;
label_2be6ec:
    // 0x2be6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be6f4: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE6F4u;
    SET_GPR_U32(ctx, 31, 0x2BE6FCu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE6F4u, 0x2BE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6FCu;
label_2be6fc:
    // 0x2be6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be700: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE700u;
    SET_GPR_U32(ctx, 31, 0x2BE708u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE700u, 0x2BE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE708u;
label_2be708:
    // 0x2be708: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE708u;
    {
        const bool branch_taken_0x2be708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be708) {
            ctx->pc = 0x2BE72Cu;
            goto label_2be72c;
        }
    }
    ctx->pc = 0x2BE710u;
    // 0x2be710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be714: 0xc0af9e8  jal         func_2BE7A0
    ctx->pc = 0x2BE714u;
    SET_GPR_U32(ctx, 31, 0x2BE71Cu);
    ctx->pc = 0x2BE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7A0u, 0x2BE714u, 0x2BE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE71Cu;
label_2be71c:
    // 0x2be71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be724: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE724u;
    SET_GPR_U32(ctx, 31, 0x2BE72Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE724u, 0x2BE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE72Cu;
label_2be72c:
    // 0x2be72c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be730: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2BE730u;
    SET_GPR_U32(ctx, 31, 0x2BE738u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2BE730u, 0x2BE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE738u;
label_2be738:
    // 0x2be738: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE738u;
    {
        const bool branch_taken_0x2be738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be738) {
            ctx->pc = 0x2BE75Cu;
            goto label_2be75c;
        }
    }
    ctx->pc = 0x2BE740u;
    // 0x2be740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be744: 0xc0af9e8  jal         func_2BE7A0
    ctx->pc = 0x2BE744u;
    SET_GPR_U32(ctx, 31, 0x2BE74Cu);
    ctx->pc = 0x2BE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7A0u, 0x2BE744u, 0x2BE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE74Cu;
label_2be74c:
    // 0x2be74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be754: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x2BE754u;
    SET_GPR_U32(ctx, 31, 0x2BE75Cu);
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x2BE754u, 0x2BE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE75Cu;
label_2be75c:
    // 0x2be75c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2be75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2be760: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2be760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be764: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2BE764u;
    SET_GPR_U32(ctx, 31, 0x2BE76Cu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2BE764u, 0x2BE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE76Cu;
label_2be76c:
    // 0x2be76c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2be76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2be770: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2be770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2be774: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2be774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2be778: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2be778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be77c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2be77cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be780: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2be780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2be784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2be788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be794: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x2be794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2be798: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE7A0u;
}
