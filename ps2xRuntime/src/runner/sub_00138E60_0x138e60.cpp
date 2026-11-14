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

// Function: sub_00138E60
// Address: 0x138e60 - 0x1390c0
void sub_00138E60_0x138e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138E60_0x138e60");
#endif

    switch (ctx->pc) {
        case 0x138eb4u: goto label_138eb4;
        case 0x138eccu: goto label_138ecc;
        case 0x138edcu: goto label_138edc;
        case 0x138ee4u: goto label_138ee4;
        case 0x138ef0u: goto label_138ef0;
        case 0x138f04u: goto label_138f04;
        case 0x138f14u: goto label_138f14;
        case 0x138f24u: goto label_138f24;
        case 0x138f40u: goto label_138f40;
        case 0x138f5cu: goto label_138f5c;
        case 0x138f70u: goto label_138f70;
        case 0x138f88u: goto label_138f88;
        case 0x138fa8u: goto label_138fa8;
        case 0x138fb4u: goto label_138fb4;
        case 0x138fc8u: goto label_138fc8;
        case 0x138fd8u: goto label_138fd8;
        case 0x138fecu: goto label_138fec;
        case 0x138ffcu: goto label_138ffc;
        case 0x139010u: goto label_139010;
        case 0x13901cu: goto label_13901c;
        case 0x13902cu: goto label_13902c;
        case 0x13903cu: goto label_13903c;
        case 0x139048u: goto label_139048;
        case 0x139058u: goto label_139058;
        case 0x13906cu: goto label_13906c;
        case 0x13907cu: goto label_13907c;
        default: break;
    }

    ctx->pc = 0x138e60u;

    // 0x138e60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x138e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x138e64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x138e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x138e68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x138e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x138e6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x138e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x138e70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x138e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x138e74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x138e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x138e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x138e80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138e8c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x138e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x138e90: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138e94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138E94u;
    {
        const bool branch_taken_0x138e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138e94) {
            ctx->pc = 0x138EA8u;
            goto label_138ea8;
        }
    }
    ctx->pc = 0x138E9Cu;
    // 0x138e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ea0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x138EA0u;
    {
        const bool branch_taken_0x138ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ea0) {
            ctx->pc = 0x139088u;
            goto label_139088;
        }
    }
    ctx->pc = 0x138EA8u;
label_138ea8:
    // 0x138ea8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138eac: 0xc04e534  jal         func_1394D0
    ctx->pc = 0x138EACu;
    SET_GPR_U32(ctx, 31, 0x138EB4u);
    ctx->pc = 0x1394D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394D0u, 0x138EACu, 0x138EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EB4u;
label_138eb4:
    // 0x138eb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x138eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138eb8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x138eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x138ebc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x138ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138ec0: 0x2445006c  addiu       $a1, $v0, 0x6C
    ctx->pc = 0x138ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x138ec4: 0xc04e4cc  jal         func_139330
    ctx->pc = 0x138EC4u;
    SET_GPR_U32(ctx, 31, 0x138ECCu);
    ctx->pc = 0x139330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139330u, 0x138EC4u, 0x138ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138ECCu;
label_138ecc:
    // 0x138ecc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x138eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138ed0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x138ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138ed4: 0xc04e4ac  jal         func_1392B0
    ctx->pc = 0x138ED4u;
    SET_GPR_U32(ctx, 31, 0x138EDCu);
    ctx->pc = 0x1392B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392B0u, 0x138ED4u, 0x138EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EDCu;
label_138edc:
    // 0x138edc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x138EDCu;
    {
        const bool branch_taken_0x138edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138edc) {
            ctx->pc = 0x138FB4u;
            goto label_138fb4;
        }
    }
    ctx->pc = 0x138EE4u;
label_138ee4:
    // 0x138ee4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x138ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138ee8: 0xc04e498  jal         func_139260
    ctx->pc = 0x138EE8u;
    SET_GPR_U32(ctx, 31, 0x138EF0u);
    ctx->pc = 0x139260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139260u, 0x138EE8u, 0x138EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EF0u;
label_138ef0:
    // 0x138ef0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x138ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x138ef4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x138ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138efc: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x138EFCu;
    SET_GPR_U32(ctx, 31, 0x138F04u);
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x138EFCu, 0x138F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F04u;
label_138f04:
    // 0x138f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x138f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x138f0c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x138F0Cu;
    SET_GPR_U32(ctx, 31, 0x138F14u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x138F0Cu, 0x138F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F14u;
label_138f14:
    // 0x138f14: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x138f14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x138f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f1c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x138F1Cu;
    SET_GPR_U32(ctx, 31, 0x138F24u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x138F1Cu, 0x138F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F24u;
label_138f24:
    // 0x138f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f28: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x138F28u;
    {
        const bool branch_taken_0x138f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f28) {
            ctx->pc = 0x138FA8u;
            goto label_138fa8;
        }
    }
    ctx->pc = 0x138F30u;
    // 0x138f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f34: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x138f38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x138F38u;
    SET_GPR_U32(ctx, 31, 0x138F40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x138F38u, 0x138F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F40u;
label_138f40:
    // 0x138f40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x138f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f44: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x138F44u;
    {
        const bool branch_taken_0x138f44 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f44) {
            ctx->pc = 0x138FA8u;
            goto label_138fa8;
        }
    }
    ctx->pc = 0x138F4Cu;
    // 0x138f4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x138f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x138f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138f54: 0xc09ad7c  jal         func_26B5F0
    ctx->pc = 0x138F54u;
    SET_GPR_U32(ctx, 31, 0x138F5Cu);
    ctx->pc = 0x26B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B5F0u, 0x138F54u, 0x138F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F5Cu;
label_138f5c:
    // 0x138f5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x138f5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x138f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f68: 0xc099f40  jal         func_267D00
    ctx->pc = 0x138F68u;
    SET_GPR_U32(ctx, 31, 0x138F70u);
    ctx->pc = 0x267D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267D00u, 0x138F68u, 0x138F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F70u;
label_138f70:
    // 0x138f70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x138f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f74: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x138F74u;
    {
        const bool branch_taken_0x138f74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f74) {
            ctx->pc = 0x138FA8u;
            goto label_138fa8;
        }
    }
    ctx->pc = 0x138F7Cu;
    // 0x138f7c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x138f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x138f80: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x138F80u;
    SET_GPR_U32(ctx, 31, 0x138F88u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x138F80u, 0x138F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F88u;
label_138f88:
    // 0x138f88: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x138f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
    // 0x138f8c: 0xafb100c0  sw          $s1, 0xC0($sp)
    ctx->pc = 0x138f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 17));
    // 0x138f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f94: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x138f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x138f98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fa0: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x138FA0u;
    SET_GPR_U32(ctx, 31, 0x138FA8u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x138FA0u, 0x138FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FA8u;
label_138fa8:
    // 0x138fa8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x138fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138fac: 0xc04e47c  jal         func_1391F0
    ctx->pc = 0x138FACu;
    SET_GPR_U32(ctx, 31, 0x138FB4u);
    ctx->pc = 0x1391F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1391F0u, 0x138FACu, 0x138FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FB4u;
label_138fb4:
    // 0x138fb4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x138fb8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x138fbc: 0x2445006c  addiu       $a1, $v0, 0x6C
    ctx->pc = 0x138fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x138fc0: 0xc04e43c  jal         func_1390F0
    ctx->pc = 0x138FC0u;
    SET_GPR_U32(ctx, 31, 0x138FC8u);
    ctx->pc = 0x1390F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1390F0u, 0x138FC0u, 0x138FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FC8u;
label_138fc8:
    // 0x138fc8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x138fcc: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x138fd0: 0xc04e430  jal         func_1390C0
    ctx->pc = 0x138FD0u;
    SET_GPR_U32(ctx, 31, 0x138FD8u);
    ctx->pc = 0x1390C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1390C0u, 0x138FD0u, 0x138FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FD8u;
label_138fd8:
    // 0x138fd8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x138FD8u;
    {
        const bool branch_taken_0x138fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138fd8) {
            ctx->pc = 0x138EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138ee4;
        }
    }
    ctx->pc = 0x138FE0u;
    // 0x138fe0: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x138fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x138fe4: 0xc1140d0  jal         func_450340
    ctx->pc = 0x138FE4u;
    SET_GPR_U32(ctx, 31, 0x138FECu);
    ctx->pc = 0x450340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450340u, 0x138FE4u, 0x138FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FECu;
label_138fec:
    // 0x138fec: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x138fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x138ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ff4: 0xc04e248  jal         func_138920
    ctx->pc = 0x138FF4u;
    SET_GPR_U32(ctx, 31, 0x138FFCu);
    ctx->pc = 0x138920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138920u, 0x138FF4u, 0x138FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FFCu;
label_138ffc:
    // 0x138ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139000: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x139004: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x139004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x139008: 0xc090864  jal         func_242190
    ctx->pc = 0x139008u;
    SET_GPR_U32(ctx, 31, 0x139010u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x139008u, 0x139010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139010u;
label_139010:
    // 0x139010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139014: 0xc090590  jal         func_241640
    ctx->pc = 0x139014u;
    SET_GPR_U32(ctx, 31, 0x13901Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x139014u, 0x13901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13901Cu;
label_13901c:
    // 0x13901c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139020: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x139020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x139024: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x139024u;
    SET_GPR_U32(ctx, 31, 0x13902Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x139024u, 0x13902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13902Cu;
label_13902c:
    // 0x13902c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13902cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139034: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x139034u;
    SET_GPR_U32(ctx, 31, 0x13903Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x139034u, 0x13903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13903Cu;
label_13903c:
    // 0x13903c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13903cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x139040u;
    {
        const bool branch_taken_0x139040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139040) {
            ctx->pc = 0x139070u;
            goto label_139070;
        }
    }
    ctx->pc = 0x139048u;
label_139048:
    // 0x139048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x139048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13904c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x139050: 0xc085538  jal         func_2154E0
    ctx->pc = 0x139050u;
    SET_GPR_U32(ctx, 31, 0x139058u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x139050u, 0x139058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139058u;
label_139058:
    // 0x139058: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x139058u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13905c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139064: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x139064u;
    SET_GPR_U32(ctx, 31, 0x13906Cu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x139064u, 0x13906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13906Cu;
label_13906c:
    // 0x13906c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13906cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_139070:
    // 0x139070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139074: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x139074u;
    SET_GPR_U32(ctx, 31, 0x13907Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x139074u, 0x13907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13907Cu;
label_13907c:
    // 0x13907c: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x13907Cu;
    {
        const bool branch_taken_0x13907c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13907c) {
            ctx->pc = 0x139048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139048;
        }
    }
    ctx->pc = 0x139084u;
    // 0x139084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139088:
    // 0x139088: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x139088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13908c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13908cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139090: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x139090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139094: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x139094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13909c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13909cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1390a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1390a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1390a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1390a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1390a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1390a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1390ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1390acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1390b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1390b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1390B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1390B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1390BCu;
    // 0x1390bc: 0x0  nop
    ctx->pc = 0x1390bcu;
    // NOP
    ctx->pc = 0x1390c0u;
}
