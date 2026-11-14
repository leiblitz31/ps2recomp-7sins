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

// Function: sub_0024F8F0
// Address: 0x24f8f0 - 0x24fb40
void sub_0024F8F0_0x24f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F8F0_0x24f8f0");
#endif

    switch (ctx->pc) {
        case 0x24f960u: goto label_24f960;
        case 0x24f970u: goto label_24f970;
        case 0x24f97cu: goto label_24f97c;
        case 0x24f98cu: goto label_24f98c;
        case 0x24f9a4u: goto label_24f9a4;
        case 0x24f9b8u: goto label_24f9b8;
        case 0x24f9c8u: goto label_24f9c8;
        case 0x24f9e0u: goto label_24f9e0;
        case 0x24f9f0u: goto label_24f9f0;
        case 0x24fa10u: goto label_24fa10;
        case 0x24fa20u: goto label_24fa20;
        case 0x24fa38u: goto label_24fa38;
        case 0x24fa50u: goto label_24fa50;
        case 0x24fa6cu: goto label_24fa6c;
        case 0x24fa7cu: goto label_24fa7c;
        case 0x24fa8cu: goto label_24fa8c;
        case 0x24faa4u: goto label_24faa4;
        case 0x24fab4u: goto label_24fab4;
        case 0x24fac4u: goto label_24fac4;
        case 0x24fad4u: goto label_24fad4;
        case 0x24faf0u: goto label_24faf0;
        case 0x24fb10u: goto label_24fb10;
        default: break;
    }

    ctx->pc = 0x24f8f0u;

    // 0x24f8f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x24f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x24f8f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24f8f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24f8fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24f900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24f904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24f908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f90c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x24f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x24f910: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x24f910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x24f914: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x24f914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x24f918: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x24f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
    // 0x24f91c: 0xafa80100  sw          $t0, 0x100($sp)
    ctx->pc = 0x24f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 8));
    // 0x24f920: 0xafa90110  sw          $t1, 0x110($sp)
    ctx->pc = 0x24f920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 9));
    // 0x24f924: 0x8fb40110  lw          $s4, 0x110($sp)
    ctx->pc = 0x24f924u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24f928: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24f92c: 0x8fb100f0  lw          $s1, 0xF0($sp)
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24f930: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f934: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f938: 0x12220025  beq         $s1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24F938u;
    {
        const bool branch_taken_0x24f938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f938) {
            ctx->pc = 0x24F9D0u;
            goto label_24f9d0;
        }
    }
    ctx->pc = 0x24F940u;
    // 0x24f940: 0x16800046  bnez        $s4, . + 4 + (0x46 << 2)
    ctx->pc = 0x24F940u;
    {
        const bool branch_taken_0x24f940 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f940) {
            ctx->pc = 0x24FA5Cu;
            goto label_24fa5c;
        }
    }
    ctx->pc = 0x24F948u;
    // 0x24f948: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x24F948u;
    {
        const bool branch_taken_0x24f948 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f948) {
            ctx->pc = 0x24F9D0u;
            goto label_24f9d0;
        }
    }
    ctx->pc = 0x24F950u;
    // 0x24f950: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x24f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x24f954: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x24f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24f958: 0xc053cbc  jal         func_14F2F0
    ctx->pc = 0x24F958u;
    SET_GPR_U32(ctx, 31, 0x24F960u);
    ctx->pc = 0x14F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2F0u, 0x24F958u, 0x24F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F960u;
label_24f960:
    // 0x24f960: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f968: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24F968u;
    SET_GPR_U32(ctx, 31, 0x24F970u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24F968u, 0x24F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F970u;
label_24f970:
    // 0x24f970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f974: 0xc053cac  jal         func_14F2B0
    ctx->pc = 0x24F974u;
    SET_GPR_U32(ctx, 31, 0x24F97Cu);
    ctx->pc = 0x14F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2B0u, 0x24F974u, 0x24F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F97Cu;
label_24f97c:
    // 0x24f97c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f984: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24F984u;
    SET_GPR_U32(ctx, 31, 0x24F98Cu);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24F984u, 0x24F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F98Cu;
label_24f98c:
    // 0x24f98c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f990: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x24f990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x24f994: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x24f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f998: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x24f998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f99c: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x24F99Cu;
    SET_GPR_U32(ctx, 31, 0x24F9A4u);
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x24F99Cu, 0x24F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9A4u;
label_24f9a4:
    // 0x24f9a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24f9a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24f9a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24f9ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f9b0: 0xc094d94  jal         func_253650
    ctx->pc = 0x24F9B0u;
    SET_GPR_U32(ctx, 31, 0x24F9B8u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24F9B0u, 0x24F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9B8u;
label_24f9b8:
    // 0x24f9b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f9bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24f9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f9c0: 0xc094d94  jal         func_253650
    ctx->pc = 0x24F9C0u;
    SET_GPR_U32(ctx, 31, 0x24F9C8u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24F9C0u, 0x24F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9C8u;
label_24f9c8:
    // 0x24f9c8: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x24F9C8u;
    {
        const bool branch_taken_0x24f9c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f9c8) {
            ctx->pc = 0x24FA5Cu;
            goto label_24fa5c;
        }
    }
    ctx->pc = 0x24F9D0u;
label_24f9d0:
    // 0x24f9d0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f9d4: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x24f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24f9d8: 0xc093ed8  jal         func_24FB60
    ctx->pc = 0x24F9D8u;
    SET_GPR_U32(ctx, 31, 0x24F9E0u);
    ctx->pc = 0x24FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FB60u, 0x24F9D8u, 0x24F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9E0u;
label_24f9e0:
    // 0x24f9e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24f9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9e8: 0xc053c68  jal         func_14F1A0
    ctx->pc = 0x24F9E8u;
    SET_GPR_U32(ctx, 31, 0x24F9F0u);
    ctx->pc = 0x14F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A0u, 0x24F9E8u, 0x24F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9F0u;
label_24f9f0:
    // 0x24f9f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24f9f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f9f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f9fc: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F9FCu;
    {
        const bool branch_taken_0x24f9fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24f9fc) {
            ctx->pc = 0x24FA2Cu;
            goto label_24fa2c;
        }
    }
    ctx->pc = 0x24FA04u;
    // 0x24fa04: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa08: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x24FA08u;
    SET_GPR_U32(ctx, 31, 0x24FA10u);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x24FA08u, 0x24FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA10u;
label_24fa10:
    // 0x24fa10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fa14: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa18: 0xc091ee8  jal         func_247BA0
    ctx->pc = 0x24FA18u;
    SET_GPR_U32(ctx, 31, 0x24FA20u);
    ctx->pc = 0x247BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BA0u, 0x24FA18u, 0x24FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA20u;
label_24fa20:
    // 0x24fa20: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fa24: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24FA24u;
    {
        const bool branch_taken_0x24fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa24) {
            ctx->pc = 0x24FAA8u;
            goto label_24faa8;
        }
    }
    ctx->pc = 0x24FA2Cu;
label_24fa2c:
    // 0x24fa2c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa30: 0xc064084  jal         func_190210
    ctx->pc = 0x24FA30u;
    SET_GPR_U32(ctx, 31, 0x24FA38u);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x24FA30u, 0x24FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA38u;
label_24fa38:
    // 0x24fa38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fa3c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24FA3Cu;
    {
        const bool branch_taken_0x24fa3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fa3c) {
            ctx->pc = 0x24FAA8u;
            goto label_24faa8;
        }
    }
    ctx->pc = 0x24FA44u;
    // 0x24fa44: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa48: 0xc064084  jal         func_190210
    ctx->pc = 0x24FA48u;
    SET_GPR_U32(ctx, 31, 0x24FA50u);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x24FA48u, 0x24FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA50u;
label_24fa50:
    // 0x24fa50: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fa54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24FA54u;
    {
        const bool branch_taken_0x24fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa54) {
            ctx->pc = 0x24FAA8u;
            goto label_24faa8;
        }
    }
    ctx->pc = 0x24FA5Cu;
label_24fa5c:
    // 0x24fa5c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa60: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24fa64: 0xc093ed8  jal         func_24FB60
    ctx->pc = 0x24FA64u;
    SET_GPR_U32(ctx, 31, 0x24FA6Cu);
    ctx->pc = 0x24FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FB60u, 0x24FA64u, 0x24FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA6Cu;
label_24fa6c:
    // 0x24fa6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa74: 0xc053c60  jal         func_14F180
    ctx->pc = 0x24FA74u;
    SET_GPR_U32(ctx, 31, 0x24FA7Cu);
    ctx->pc = 0x14F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F180u, 0x24FA74u, 0x24FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA7Cu;
label_24fa7c:
    // 0x24fa7c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fa80: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa84: 0xc091ee8  jal         func_247BA0
    ctx->pc = 0x24FA84u;
    SET_GPR_U32(ctx, 31, 0x24FA8Cu);
    ctx->pc = 0x247BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BA0u, 0x24FA84u, 0x24FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA8Cu;
label_24fa8c:
    // 0x24fa8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fa90: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FA90u;
    {
        const bool branch_taken_0x24fa90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fa90) {
            ctx->pc = 0x24FAA8u;
            goto label_24faa8;
        }
    }
    ctx->pc = 0x24FA98u;
    // 0x24fa98: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x24fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fa9c: 0xc091ee8  jal         func_247BA0
    ctx->pc = 0x24FA9Cu;
    SET_GPR_U32(ctx, 31, 0x24FAA4u);
    ctx->pc = 0x247BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BA0u, 0x24FA9Cu, 0x24FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAA4u;
label_24faa4:
    // 0x24faa4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_24faa8:
    // 0x24faa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24faac: 0xc093ed0  jal         func_24FB40
    ctx->pc = 0x24FAACu;
    SET_GPR_U32(ctx, 31, 0x24FAB4u);
    ctx->pc = 0x24FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FB40u, 0x24FAACu, 0x24FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAB4u;
label_24fab4:
    // 0x24fab4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x24fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x24fab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fabc: 0xc053c68  jal         func_14F1A0
    ctx->pc = 0x24FABCu;
    SET_GPR_U32(ctx, 31, 0x24FAC4u);
    ctx->pc = 0x14F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A0u, 0x24FABCu, 0x24FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAC4u;
label_24fac4:
    // 0x24fac4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24facc: 0xc053c60  jal         func_14F180
    ctx->pc = 0x24FACCu;
    SET_GPR_U32(ctx, 31, 0x24FAD4u);
    ctx->pc = 0x14F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F180u, 0x24FACCu, 0x24FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAD4u;
label_24fad4:
    // 0x24fad4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fad8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fadc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fae4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x24fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fae8: 0xc042858  jal         func_10A160
    ctx->pc = 0x24FAE8u;
    SET_GPR_U32(ctx, 31, 0x24FAF0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x24FAE8u, 0x24FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAF0u;
label_24faf0:
    // 0x24faf0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24faf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24faf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fafc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24fb00: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb08: 0xc093cac  jal         func_24F2B0
    ctx->pc = 0x24FB08u;
    SET_GPR_U32(ctx, 31, 0x24FB10u);
    ctx->pc = 0x24F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2B0u, 0x24FB08u, 0x24FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB10u;
label_24fb10:
    // 0x24fb10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fb14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24fb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fb18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24fb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fb1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24fb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24fb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fb28: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x24fb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24fb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FB34u;
    // 0x24fb34: 0x0  nop
    ctx->pc = 0x24fb34u;
    // NOP
    // 0x24fb38: 0x0  nop
    ctx->pc = 0x24fb38u;
    // NOP
    // 0x24fb3c: 0x0  nop
    ctx->pc = 0x24fb3cu;
    // NOP
    ctx->pc = 0x24fb40u;
}
