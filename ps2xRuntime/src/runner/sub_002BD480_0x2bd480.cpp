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

// Function: sub_002BD480
// Address: 0x2bd480 - 0x2bd560
void sub_002BD480_0x2bd480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD480_0x2bd480");
#endif

    switch (ctx->pc) {
        case 0x2bd4b0u: goto label_2bd4b0;
        case 0x2bd4c0u: goto label_2bd4c0;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4ecu: goto label_2bd4ec;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd538u: goto label_2bd538;
        default: break;
    }

    ctx->pc = 0x2bd480u;

    // 0x2bd480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bd480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bd484: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bd484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd488: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bd488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bd48c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd498: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2bd498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2bd49c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2bd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2bd4a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2bd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd4a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2bd4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd4a8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BD4A8u;
    SET_GPR_U32(ctx, 31, 0x2BD4B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BD4A8u, 0x2BD4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4B0u;
label_2bd4b0:
    // 0x2bd4b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd4b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bd4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4b8: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2BD4B8u;
    SET_GPR_U32(ctx, 31, 0x2BD4C0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2BD4B8u, 0x2BD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4C0u;
label_2bd4c0:
    // 0x2bd4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bd4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2bd4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2bd4cc: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x2BD4CCu;
    SET_GPR_U32(ctx, 31, 0x2BD4D4u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x2BD4CCu, 0x2BD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4D4u;
label_2bd4d4:
    // 0x2bd4d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bd4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4d8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BD4D8u;
    {
        const bool branch_taken_0x2bd4d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4d8) {
            ctx->pc = 0x2BD514u;
            goto label_2bd514;
        }
    }
    ctx->pc = 0x2BD4E0u;
    // 0x2bd4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4e4: 0xc106784  jal         func_419E10
    ctx->pc = 0x2BD4E4u;
    SET_GPR_U32(ctx, 31, 0x2BD4ECu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2BD4E4u, 0x2BD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4ECu;
label_2bd4ec:
    // 0x2bd4ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2bd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2bd4f0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd4f4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2bd4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd4f8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2bd4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd4fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2bd4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd500: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2bd500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2bd504: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2bd504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2bd508: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2bd508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2bd50c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BD50Cu;
    {
        const bool branch_taken_0x2bd50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd50c) {
            ctx->pc = 0x2BD53Cu;
            goto label_2bd53c;
        }
    }
    ctx->pc = 0x2BD514u;
label_2bd514:
    // 0x2bd514: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2bd514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd518: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bd51c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BD51Cu;
    SET_GPR_U32(ctx, 31, 0x2BD524u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BD51Cu, 0x2BD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD524u;
label_2bd524:
    // 0x2bd524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd528: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bd528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd52c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd530: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2BD530u;
    SET_GPR_U32(ctx, 31, 0x2BD538u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2BD530u, 0x2BD538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD538u;
label_2bd538:
    // 0x2bd538: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bd538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2bd53c:
    // 0x2bd53c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bd53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bd540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd550: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2bd550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd554: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD55Cu;
    // 0x2bd55c: 0x0  nop
    ctx->pc = 0x2bd55cu;
    // NOP
    ctx->pc = 0x2bd560u;
}
