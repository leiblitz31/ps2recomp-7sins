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

// Function: sub_0027B260
// Address: 0x27b260 - 0x27be00
void sub_0027B260_0x27b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B260_0x27b260");
#endif

    switch (ctx->pc) {
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b338u: goto label_27b338;
        case 0x27b358u: goto label_27b358;
        case 0x27b384u: goto label_27b384;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b420u: goto label_27b420;
        case 0x27b430u: goto label_27b430;
        case 0x27b458u: goto label_27b458;
        case 0x27b478u: goto label_27b478;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b500u: goto label_27b500;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b518u: goto label_27b518;
        case 0x27b534u: goto label_27b534;
        case 0x27b540u: goto label_27b540;
        case 0x27b550u: goto label_27b550;
        case 0x27b568u: goto label_27b568;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b600u: goto label_27b600;
        case 0x27b618u: goto label_27b618;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b638u: goto label_27b638;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b668u: goto label_27b668;
        case 0x27b674u: goto label_27b674;
        case 0x27b690u: goto label_27b690;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b710u: goto label_27b710;
        case 0x27b728u: goto label_27b728;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b848u: goto label_27b848;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b934u: goto label_27b934;
        case 0x27b954u: goto label_27b954;
        case 0x27b980u: goto label_27b980;
        case 0x27b990u: goto label_27b990;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27bab0u: goto label_27bab0;
        case 0x27babcu: goto label_27babc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bae0u: goto label_27bae0;
        case 0x27baecu: goto label_27baec;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdc8u: goto label_27bdc8;
        default: break;
    }

    ctx->pc = 0x27b260u;

    // 0x27b260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b264: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27b264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27b268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b26c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27b26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27b270: 0x3e00008  jr          $ra
    ctx->pc = 0x27B270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B278u;
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
    // 0x27b27c: 0x0  nop
    ctx->pc = 0x27b27cu;
    // NOP
    // 0x27b280: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27b284: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27b288: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27b28c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27b28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27b290: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27b294: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27b298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27b29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27b2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b2ac: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x27b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x27b2b0: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x27b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x27b2b4: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x27b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x27b2b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27b2bc: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x27b2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b2c0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27b2c4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x27b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b2c8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b2cc: 0xc0852f8  jal         func_214BE0
    ctx->pc = 0x27B2CCu;
    SET_GPR_U32(ctx, 31, 0x27B2D4u);
    ctx->pc = 0x214BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BE0u, 0x27B2CCu, 0x27B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2D4u;
label_27b2d4:
    // 0x27b2d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b2d8: 0xc085530  jal         func_2154C0
    ctx->pc = 0x27B2D8u;
    SET_GPR_U32(ctx, 31, 0x27B2E0u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x27B2D8u, 0x27B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2E0u;
label_27b2e0:
    // 0x27b2e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b2e4: 0x104300ef  beq         $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x27B2E4u;
    {
        const bool branch_taken_0x27b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b2e4) {
            ctx->pc = 0x27B6A4u;
            goto label_27b6a4;
        }
    }
    ctx->pc = 0x27B2ECu;
    // 0x27b2ec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27b2f0: 0x104300a8  beq         $v0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x27B2F0u;
    {
        const bool branch_taken_0x27b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b2f0) {
            ctx->pc = 0x27B594u;
            goto label_27b594;
        }
    }
    ctx->pc = 0x27B2F8u;
    // 0x27b2f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b2fc: 0x1043004e  beq         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x27B2FCu;
    {
        const bool branch_taken_0x27b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b2fc) {
            ctx->pc = 0x27B438u;
            goto label_27b438;
        }
    }
    ctx->pc = 0x27B304u;
    // 0x27b304: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27b308: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B308u;
    {
        const bool branch_taken_0x27b308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b308) {
            ctx->pc = 0x27B318u;
            goto label_27b318;
        }
    }
    ctx->pc = 0x27B310u;
    // 0x27b310: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x27B310u;
    {
        const bool branch_taken_0x27b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b310) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B318u;
label_27b318:
    // 0x27b318: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b31c: 0x1002010b  beq         $zero, $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x27B31Cu;
    {
        const bool branch_taken_0x27b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b31c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B324u;
    // 0x27b324: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27b324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b328: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b32c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b330: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B330u;
    SET_GPR_U32(ctx, 31, 0x27B338u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B330u, 0x27B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B338u;
label_27b338:
    // 0x27b338: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x27b338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x27b33c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27b340: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B340u;
    {
        const bool branch_taken_0x27b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b340) {
            ctx->pc = 0x27B364u;
            goto label_27b364;
        }
    }
    ctx->pc = 0x27B348u;
    // 0x27b348: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x27b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27b34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b350: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B350u;
    SET_GPR_U32(ctx, 31, 0x27B358u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B350u, 0x27B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B358u;
label_27b358:
    // 0x27b358: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x27b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x27b35c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B35Cu;
    {
        const bool branch_taken_0x27b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b35c) {
            ctx->pc = 0x27B368u;
            goto label_27b368;
        }
    }
    ctx->pc = 0x27B364u;
label_27b364:
    // 0x27b364: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x27b364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_27b368:
    // 0x27b368: 0x8fb400ac  lw          $s4, 0xAC($sp)
    ctx->pc = 0x27b368u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x27b36c: 0x128000f7  beqz        $s4, . + 4 + (0xF7 << 2)
    ctx->pc = 0x27B36Cu;
    {
        const bool branch_taken_0x27b36c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b36c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B374u;
    // 0x27b374: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b378: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27b37c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B37Cu;
    SET_GPR_U32(ctx, 31, 0x27B384u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B37Cu, 0x27B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B384u;
label_27b384:
    // 0x27b384: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b388: 0x10130015  beq         $zero, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B388u;
    {
        const bool branch_taken_0x27b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x27b388) {
            ctx->pc = 0x27B3E0u;
            goto label_27b3e0;
        }
    }
    ctx->pc = 0x27B390u;
    // 0x27b390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b394: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x27B394u;
    SET_GPR_U32(ctx, 31, 0x27B39Cu);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x27B394u, 0x27B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B39Cu;
label_27b39c:
    // 0x27b39c: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27B39Cu;
    {
        const bool branch_taken_0x27b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b39c) {
            ctx->pc = 0x27B3E0u;
            goto label_27b3e0;
        }
    }
    ctx->pc = 0x27B3A4u;
    // 0x27b3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3a8: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x27B3A8u;
    SET_GPR_U32(ctx, 31, 0x27B3B0u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x27B3A8u, 0x27B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3B0u;
label_27b3b0:
    // 0x27b3b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3b4: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x27B3B4u;
    SET_GPR_U32(ctx, 31, 0x27B3BCu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x27B3B4u, 0x27B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3BCu;
label_27b3bc:
    // 0x27b3bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B3BCu;
    {
        const bool branch_taken_0x27b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b3bc) {
            ctx->pc = 0x27B3E0u;
            goto label_27b3e0;
        }
    }
    ctx->pc = 0x27B3C4u;
    // 0x27b3c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3c8: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x27B3C8u;
    SET_GPR_U32(ctx, 31, 0x27B3D0u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x27B3C8u, 0x27B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3D0u;
label_27b3d0:
    // 0x27b3d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3d8: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x27B3D8u;
    SET_GPR_U32(ctx, 31, 0x27B3E0u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x27B3D8u, 0x27B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3E0u;
label_27b3e0:
    // 0x27b3e0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b3e4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27b3e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B3E8u;
    SET_GPR_U32(ctx, 31, 0x27B3F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B3E8u, 0x27B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3F0u;
label_27b3f0:
    // 0x27b3f0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x27b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x27b3f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x27b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x27b3f8: 0x100200d4  beq         $zero, $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x27B3F8u;
    {
        const bool branch_taken_0x27b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b3f8) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B400u;
    // 0x27b400: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x27b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x27b404: 0xc0a6384  jal         func_298E10
    ctx->pc = 0x27B404u;
    SET_GPR_U32(ctx, 31, 0x27B40Cu);
    ctx->pc = 0x298E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E10u, 0x27B404u, 0x27B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B40Cu;
label_27b40c:
    // 0x27b40c: 0x100200cf  beq         $zero, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x27B40Cu;
    {
        const bool branch_taken_0x27b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b40c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B414u;
    // 0x27b414: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x27b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x27b418: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27B418u;
    SET_GPR_U32(ctx, 31, 0x27B420u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27B418u, 0x27B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B420u;
label_27b420:
    // 0x27b420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b424: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b428: 0xc0a63b0  jal         func_298EC0
    ctx->pc = 0x27B428u;
    SET_GPR_U32(ctx, 31, 0x27B430u);
    ctx->pc = 0x298EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EC0u, 0x27B428u, 0x27B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B430u;
label_27b430:
    // 0x27b430: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x27B430u;
    {
        const bool branch_taken_0x27b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b430) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B438u;
label_27b438:
    // 0x27b438: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b43c: 0x100200c3  beq         $zero, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x27B43Cu;
    {
        const bool branch_taken_0x27b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b43c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B444u;
    // 0x27b444: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27b444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b448: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b44c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b450: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B450u;
    SET_GPR_U32(ctx, 31, 0x27B458u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B450u, 0x27B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B458u;
label_27b458:
    // 0x27b458: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x27b458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x27b45c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x27b460: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B460u;
    {
        const bool branch_taken_0x27b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b460) {
            ctx->pc = 0x27B484u;
            goto label_27b484;
        }
    }
    ctx->pc = 0x27B468u;
    // 0x27b468: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x27b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x27b46c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b470: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B470u;
    SET_GPR_U32(ctx, 31, 0x27B478u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B470u, 0x27B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B478u;
label_27b478:
    // 0x27b478: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x27b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x27b47c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B47Cu;
    {
        const bool branch_taken_0x27b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b47c) {
            ctx->pc = 0x27B488u;
            goto label_27b488;
        }
    }
    ctx->pc = 0x27B484u;
label_27b484:
    // 0x27b484: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x27b484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_27b488:
    // 0x27b488: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x27b488u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27b48c: 0x124000af  beqz        $s2, . + 4 + (0xAF << 2)
    ctx->pc = 0x27B48Cu;
    {
        const bool branch_taken_0x27b48c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b48c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B494u;
    // 0x27b494: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b498: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b49c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B49Cu;
    SET_GPR_U32(ctx, 31, 0x27B4A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B49Cu, 0x27B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4A4u;
label_27b4a4:
    // 0x27b4a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4a8: 0x10110025  beq         $zero, $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x27B4A8u;
    {
        const bool branch_taken_0x27b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x27b4a8) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B4B0u;
    // 0x27b4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4b4: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27B4B4u;
    SET_GPR_U32(ctx, 31, 0x27B4BCu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27B4B4u, 0x27B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4BCu;
label_27b4bc:
    // 0x27b4bc: 0x10020020  beq         $zero, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27B4BCu;
    {
        const bool branch_taken_0x27b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b4bc) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B4C4u;
    // 0x27b4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4c8: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27B4C8u;
    SET_GPR_U32(ctx, 31, 0x27B4D0u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27B4C8u, 0x27B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4D0u;
label_27b4d0:
    // 0x27b4d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4d4: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x27B4D4u;
    SET_GPR_U32(ctx, 31, 0x27B4DCu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x27B4D4u, 0x27B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4DCu;
label_27b4dc:
    // 0x27b4dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B4DCu;
    {
        const bool branch_taken_0x27b4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b4dc) {
            ctx->pc = 0x27B500u;
            goto label_27b500;
        }
    }
    ctx->pc = 0x27B4E4u;
    // 0x27b4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4e8: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27B4E8u;
    SET_GPR_U32(ctx, 31, 0x27B4F0u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27B4E8u, 0x27B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4F0u;
label_27b4f0:
    // 0x27b4f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b4f8: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x27B4F8u;
    SET_GPR_U32(ctx, 31, 0x27B500u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x27B4F8u, 0x27B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B500u;
label_27b500:
    // 0x27b500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b504: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27B504u;
    SET_GPR_U32(ctx, 31, 0x27B50Cu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27B504u, 0x27B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B50Cu;
label_27b50c:
    // 0x27b50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b510: 0xc11e020  jal         func_478080
    ctx->pc = 0x27B510u;
    SET_GPR_U32(ctx, 31, 0x27B518u);
    ctx->pc = 0x478080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478080u, 0x27B510u, 0x27B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B518u;
label_27b518:
    // 0x27b518: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B518u;
    {
        const bool branch_taken_0x27b518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b518) {
            ctx->pc = 0x27B540u;
            goto label_27b540;
        }
    }
    ctx->pc = 0x27B520u;
    // 0x27b520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b524: 0xa2220038  sb          $v0, 0x38($s1)
    ctx->pc = 0x27b524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b52c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27B52Cu;
    SET_GPR_U32(ctx, 31, 0x27B534u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27B52Cu, 0x27B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B534u;
label_27b534:
    // 0x27b534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b538: 0xc11dff8  jal         func_477FE0
    ctx->pc = 0x27B538u;
    SET_GPR_U32(ctx, 31, 0x27B540u);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x27B538u, 0x27B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B540u;
label_27b540:
    // 0x27b540: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b544: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27b548: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B548u;
    SET_GPR_U32(ctx, 31, 0x27B550u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B548u, 0x27B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B550u;
label_27b550:
    // 0x27b550: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27b550u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b554: 0x101e007d  beq         $zero, $fp, . + 4 + (0x7D << 2)
    ctx->pc = 0x27B554u;
    {
        const bool branch_taken_0x27b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x27b554) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B55Cu;
    // 0x27b55c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27b55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b560: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27B560u;
    SET_GPR_U32(ctx, 31, 0x27B568u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27B560u, 0x27B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B568u;
label_27b568:
    // 0x27b568: 0x10020078  beq         $zero, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x27B568u;
    {
        const bool branch_taken_0x27b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b568) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B570u;
    // 0x27b570: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b574: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27B574u;
    SET_GPR_U32(ctx, 31, 0x27B57Cu);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27B574u, 0x27B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B57Cu;
label_27b57c:
    // 0x27b57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b580: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b584: 0xc0a63b0  jal         func_298EC0
    ctx->pc = 0x27B584u;
    SET_GPR_U32(ctx, 31, 0x27B58Cu);
    ctx->pc = 0x298EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EC0u, 0x27B584u, 0x27B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B58Cu;
label_27b58c:
    // 0x27b58c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x27B58Cu;
    {
        const bool branch_taken_0x27b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b58c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B594u;
label_27b594:
    // 0x27b594: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b598: 0x1002006c  beq         $zero, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x27B598u;
    {
        const bool branch_taken_0x27b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b598) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B5A0u;
    // 0x27b5a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27b5a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b5a4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b5a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b5ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B5ACu;
    SET_GPR_U32(ctx, 31, 0x27B5B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B5ACu, 0x27B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5B4u;
label_27b5b4:
    // 0x27b5b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x27b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x27b5b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27b5bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B5BCu;
    {
        const bool branch_taken_0x27b5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5bc) {
            ctx->pc = 0x27B5E0u;
            goto label_27b5e0;
        }
    }
    ctx->pc = 0x27B5C4u;
    // 0x27b5c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27b5c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b5cc: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B5CCu;
    SET_GPR_U32(ctx, 31, 0x27B5D4u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B5CCu, 0x27B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5D4u;
label_27b5d4:
    // 0x27b5d4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x27b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x27b5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B5D8u;
    {
        const bool branch_taken_0x27b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5d8) {
            ctx->pc = 0x27B5E4u;
            goto label_27b5e4;
        }
    }
    ctx->pc = 0x27B5E0u;
label_27b5e0:
    // 0x27b5e0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x27b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_27b5e4:
    // 0x27b5e4: 0x8fb700a4  lw          $s7, 0xA4($sp)
    ctx->pc = 0x27b5e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x27b5e8: 0x12e00058  beqz        $s7, . + 4 + (0x58 << 2)
    ctx->pc = 0x27B5E8u;
    {
        const bool branch_taken_0x27b5e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5e8) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B5F0u;
    // 0x27b5f0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b5f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27b5f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B5F8u;
    SET_GPR_U32(ctx, 31, 0x27B600u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B5F8u, 0x27B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B600u;
label_27b600:
    // 0x27b600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b604: 0x10100051  beq         $zero, $s0, . + 4 + (0x51 << 2)
    ctx->pc = 0x27B604u;
    {
        const bool branch_taken_0x27b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x27b604) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B60Cu;
    // 0x27b60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b610: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27B610u;
    SET_GPR_U32(ctx, 31, 0x27B618u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27B610u, 0x27B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B618u;
label_27b618:
    // 0x27b618: 0x1002004c  beq         $zero, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x27B618u;
    {
        const bool branch_taken_0x27b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b618) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B620u;
    // 0x27b620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b624: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27B624u;
    SET_GPR_U32(ctx, 31, 0x27B62Cu);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27B624u, 0x27B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B62Cu;
label_27b62c:
    // 0x27b62c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b630: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x27B630u;
    SET_GPR_U32(ctx, 31, 0x27B638u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x27B630u, 0x27B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B638u;
label_27b638:
    // 0x27b638: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B638u;
    {
        const bool branch_taken_0x27b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b638) {
            ctx->pc = 0x27B65Cu;
            goto label_27b65c;
        }
    }
    ctx->pc = 0x27B640u;
    // 0x27b640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b644: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27B644u;
    SET_GPR_U32(ctx, 31, 0x27B64Cu);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27B644u, 0x27B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B64Cu;
label_27b64c:
    // 0x27b64c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b654: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x27B654u;
    SET_GPR_U32(ctx, 31, 0x27B65Cu);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x27B654u, 0x27B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B65Cu;
label_27b65c:
    // 0x27b65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b660: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27B660u;
    SET_GPR_U32(ctx, 31, 0x27B668u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27B660u, 0x27B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B668u;
label_27b668:
    // 0x27b668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b66c: 0xc11e020  jal         func_478080
    ctx->pc = 0x27B66Cu;
    SET_GPR_U32(ctx, 31, 0x27B674u);
    ctx->pc = 0x478080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478080u, 0x27B66Cu, 0x27B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B674u;
label_27b674:
    // 0x27b674: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x27B674u;
    {
        const bool branch_taken_0x27b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b674) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B67Cu;
    // 0x27b67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b680: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x27b680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b688: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27B688u;
    SET_GPR_U32(ctx, 31, 0x27B690u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27B688u, 0x27B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B690u;
label_27b690:
    // 0x27b690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27b690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b694: 0xc11dff8  jal         func_477FE0
    ctx->pc = 0x27B694u;
    SET_GPR_U32(ctx, 31, 0x27B69Cu);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x27B694u, 0x27B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B69Cu;
label_27b69c:
    // 0x27b69c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27B69Cu;
    {
        const bool branch_taken_0x27b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b69c) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B6A4u;
label_27b6a4:
    // 0x27b6a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b6a8: 0x10020028  beq         $zero, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27B6A8u;
    {
        const bool branch_taken_0x27b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b6a8) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B6B0u;
    // 0x27b6b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27b6b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6b4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b6b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b6bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B6BCu;
    SET_GPR_U32(ctx, 31, 0x27B6C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B6BCu, 0x27B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6C4u;
label_27b6c4:
    // 0x27b6c4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x27b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x27b6c8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x27b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x27b6cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B6CCu;
    {
        const bool branch_taken_0x27b6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6cc) {
            ctx->pc = 0x27B6F0u;
            goto label_27b6f0;
        }
    }
    ctx->pc = 0x27B6D4u;
    // 0x27b6d4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x27b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x27b6d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b6dc: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B6DCu;
    SET_GPR_U32(ctx, 31, 0x27B6E4u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B6DCu, 0x27B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6E4u;
label_27b6e4:
    // 0x27b6e4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x27b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x27b6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B6E8u;
    {
        const bool branch_taken_0x27b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6e8) {
            ctx->pc = 0x27B6F4u;
            goto label_27b6f4;
        }
    }
    ctx->pc = 0x27B6F0u;
label_27b6f0:
    // 0x27b6f0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x27b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_27b6f4:
    // 0x27b6f4: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x27b6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27b6f8: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x27B6F8u;
    {
        const bool branch_taken_0x27b6f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6f8) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B700u;
    // 0x27b700: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b704: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27b708: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B708u;
    SET_GPR_U32(ctx, 31, 0x27B710u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B708u, 0x27B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B710u;
label_27b710:
    // 0x27b710: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27b710u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b714: 0x1015000d  beq         $zero, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x27B714u;
    {
        const bool branch_taken_0x27b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x27b714) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B71Cu;
    // 0x27b71c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b720: 0xc0469cc  jal         func_11A730
    ctx->pc = 0x27B720u;
    SET_GPR_U32(ctx, 31, 0x27B728u);
    ctx->pc = 0x11A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A730u, 0x27B720u, 0x27B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B728u;
label_27b728:
    // 0x27b728: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B728u;
    {
        const bool branch_taken_0x27b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b728) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B730u;
    // 0x27b730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b734: 0xc0469cc  jal         func_11A730
    ctx->pc = 0x27B734u;
    SET_GPR_U32(ctx, 31, 0x27B73Cu);
    ctx->pc = 0x11A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A730u, 0x27B734u, 0x27B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B73Cu;
label_27b73c:
    // 0x27b73c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b744: 0xc0e6f1e  jal         func_39BC78
    ctx->pc = 0x27B744u;
    SET_GPR_U32(ctx, 31, 0x27B74Cu);
    ctx->pc = 0x39BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC78u, 0x27B744u, 0x27B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B74Cu;
label_27b74c:
    // 0x27b74c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27b750: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x27b750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b754: 0xc09f4e8  jal         func_27D3A0
    ctx->pc = 0x27B754u;
    SET_GPR_U32(ctx, 31, 0x27B75Cu);
    ctx->pc = 0x27D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D3A0u, 0x27B754u, 0x27B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B75Cu;
label_27b75c:
    // 0x27b75c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b760: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b764: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B764u;
    SET_GPR_U32(ctx, 31, 0x27B76Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B764u, 0x27B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B76Cu;
label_27b76c:
    // 0x27b76c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x27b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x27b770: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27b774: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27B774u;
    {
        const bool branch_taken_0x27b774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b774) {
            ctx->pc = 0x27B7B4u;
            goto label_27b7b4;
        }
    }
    ctx->pc = 0x27B77Cu;
    // 0x27b77c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x27b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27b780: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x27b784: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27B784u;
    {
        const bool branch_taken_0x27b784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b784) {
            ctx->pc = 0x27B7B4u;
            goto label_27b7b4;
        }
    }
    ctx->pc = 0x27B78Cu;
    // 0x27b78c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b790: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b794: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B794u;
    SET_GPR_U32(ctx, 31, 0x27B79Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B794u, 0x27B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B79Cu;
label_27b79c:
    // 0x27b79c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x27b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x27b7a0: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x27b7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b7a8: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B7A8u;
    SET_GPR_U32(ctx, 31, 0x27B7B0u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B7A8u, 0x27B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7B0u;
label_27b7b0:
    // 0x27b7b0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27b7b4:
    // 0x27b7b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27b7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27b7b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27b7b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27b7bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27b7bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27b7c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27b7c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b7c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27b7c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b7c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27b7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b7cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b7d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b7d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b7dc: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x27b7dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x27b7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B7E8u;
    // 0x27b7e8: 0x0  nop
    ctx->pc = 0x27b7e8u;
    // NOP
    // 0x27b7ec: 0x0  nop
    ctx->pc = 0x27b7ecu;
    // NOP
    // 0x27b7f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x27b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x27b7f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27b7f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27b7fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27b800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27b804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27b808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27b80c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27b810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b81c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x27b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x27b820: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x27b820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x27b824: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x27b824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x27b828: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27b82c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x27b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b830: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b834: 0xc0852fc  jal         func_214BF0
    ctx->pc = 0x27B834u;
    SET_GPR_U32(ctx, 31, 0x27B83Cu);
    ctx->pc = 0x214BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214BF0u, 0x27B834u, 0x27B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B83Cu;
label_27b83c:
    // 0x27b83c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b840: 0xc085530  jal         func_2154C0
    ctx->pc = 0x27B840u;
    SET_GPR_U32(ctx, 31, 0x27B848u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x27B840u, 0x27B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B848u;
label_27b848:
    // 0x27b848: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b84c: 0x10430136  beq         $v0, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x27B84Cu;
    {
        const bool branch_taken_0x27b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b84c) {
            ctx->pc = 0x27BD28u;
            goto label_27bd28;
        }
    }
    ctx->pc = 0x27B854u;
    // 0x27b854: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27b858: 0x104300db  beq         $v0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x27B858u;
    {
        const bool branch_taken_0x27b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b858) {
            ctx->pc = 0x27BBC8u;
            goto label_27bbc8;
        }
    }
    ctx->pc = 0x27B860u;
    // 0x27b860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b864: 0x1043006c  beq         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x27B864u;
    {
        const bool branch_taken_0x27b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b864) {
            ctx->pc = 0x27BA18u;
            goto label_27ba18;
        }
    }
    ctx->pc = 0x27B86Cu;
    // 0x27b86c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27b870: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x27B870u;
    {
        const bool branch_taken_0x27b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b870) {
            ctx->pc = 0x27B914u;
            goto label_27b914;
        }
    }
    ctx->pc = 0x27B878u;
    // 0x27b878: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27b87c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B87Cu;
    {
        const bool branch_taken_0x27b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b87c) {
            ctx->pc = 0x27B88Cu;
            goto label_27b88c;
        }
    }
    ctx->pc = 0x27B884u;
    // 0x27b884: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x27B884u;
    {
        const bool branch_taken_0x27b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b884) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B88Cu;
label_27b88c:
    // 0x27b88c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x27b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b890: 0x1003014d  beq         $zero, $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x27B890u;
    {
        const bool branch_taken_0x27b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b890) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B898u;
    // 0x27b898: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27b898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b89c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b8a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b8a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B8A4u;
    SET_GPR_U32(ctx, 31, 0x27B8ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B8A4u, 0x27B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8ACu;
label_27b8ac:
    // 0x27b8ac: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x27b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x27b8b0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x27b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x27b8b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B8B4u;
    {
        const bool branch_taken_0x27b8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8b4) {
            ctx->pc = 0x27B8D8u;
            goto label_27b8d8;
        }
    }
    ctx->pc = 0x27B8BCu;
    // 0x27b8bc: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x27b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x27b8c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b8c4: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B8C4u;
    SET_GPR_U32(ctx, 31, 0x27B8CCu);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B8C4u, 0x27B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8CCu;
label_27b8cc:
    // 0x27b8cc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x27b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x27b8d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B8D0u;
    {
        const bool branch_taken_0x27b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8d0) {
            ctx->pc = 0x27B8DCu;
            goto label_27b8dc;
        }
    }
    ctx->pc = 0x27B8D8u;
label_27b8d8:
    // 0x27b8d8: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x27b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_27b8dc:
    // 0x27b8dc: 0x8fbe00b8  lw          $fp, 0xB8($sp)
    ctx->pc = 0x27b8dcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27b8e0: 0x13c00139  beqz        $fp, . + 4 + (0x139 << 2)
    ctx->pc = 0x27B8E0u;
    {
        const bool branch_taken_0x27b8e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8e0) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B8E8u;
    // 0x27b8e8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b8ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27b8f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B8F0u;
    SET_GPR_U32(ctx, 31, 0x27B8F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B8F0u, 0x27B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8F8u;
label_27b8f8:
    // 0x27b8f8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x27b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x27b8fc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x27b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27b900: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b904: 0xc0a3594  jal         func_28D650
    ctx->pc = 0x27B904u;
    SET_GPR_U32(ctx, 31, 0x27B90Cu);
    ctx->pc = 0x28D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D650u, 0x27B904u, 0x27B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B90Cu;
label_27b90c:
    // 0x27b90c: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x27B90Cu;
    {
        const bool branch_taken_0x27b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b90c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B914u;
label_27b914:
    // 0x27b914: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b918: 0x1003012b  beq         $zero, $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x27B918u;
    {
        const bool branch_taken_0x27b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b918) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B920u;
    // 0x27b920: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b924: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b928: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b92c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B92Cu;
    SET_GPR_U32(ctx, 31, 0x27B934u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B92Cu, 0x27B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B934u;
label_27b934:
    // 0x27b934: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x27b934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x27b938: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x27b93c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B93Cu;
    {
        const bool branch_taken_0x27b93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b93c) {
            ctx->pc = 0x27B960u;
            goto label_27b960;
        }
    }
    ctx->pc = 0x27B944u;
    // 0x27b944: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x27b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x27b948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b94c: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27B94Cu;
    SET_GPR_U32(ctx, 31, 0x27B954u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27B94Cu, 0x27B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B954u;
label_27b954:
    // 0x27b954: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x27b954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x27b958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B958u;
    {
        const bool branch_taken_0x27b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b958) {
            ctx->pc = 0x27B964u;
            goto label_27b964;
        }
    }
    ctx->pc = 0x27B960u;
label_27b960:
    // 0x27b960: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x27b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_27b964:
    // 0x27b964: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x27b964u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x27b968: 0x12e00117  beqz        $s7, . + 4 + (0x117 << 2)
    ctx->pc = 0x27B968u;
    {
        const bool branch_taken_0x27b968 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b968) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B970u;
    // 0x27b970: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b974: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27b978: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B978u;
    SET_GPR_U32(ctx, 31, 0x27B980u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B978u, 0x27B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B980u;
label_27b980:
    // 0x27b980: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x27b980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x27b984: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b988: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x27B988u;
    SET_GPR_U32(ctx, 31, 0x27B990u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x27B988u, 0x27B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B990u;
label_27b990:
    // 0x27b990: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B990u;
    {
        const bool branch_taken_0x27b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b990) {
            ctx->pc = 0x27B9B4u;
            goto label_27b9b4;
        }
    }
    ctx->pc = 0x27B998u;
    // 0x27b998: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x27b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b99c: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x27B99Cu;
    SET_GPR_U32(ctx, 31, 0x27B9A4u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x27B99Cu, 0x27B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9A4u;
label_27b9a4:
    // 0x27b9a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9ac: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x27B9ACu;
    SET_GPR_U32(ctx, 31, 0x27B9B4u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x27B9ACu, 0x27B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9B4u;
label_27b9b4:
    // 0x27b9b4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b9b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b9bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B9BCu;
    SET_GPR_U32(ctx, 31, 0x27B9C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B9BCu, 0x27B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9C4u;
label_27b9c4:
    // 0x27b9c4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x27b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x27b9c8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b9cc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27b9d0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27B9D0u;
    SET_GPR_U32(ctx, 31, 0x27B9D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27B9D0u, 0x27B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9D8u;
label_27b9d8:
    // 0x27b9d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27b9d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9dc: 0x101600fa  beq         $zero, $s6, . + 4 + (0xFA << 2)
    ctx->pc = 0x27B9DCu;
    {
        const bool branch_taken_0x27b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x27b9dc) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B9E4u;
    // 0x27b9e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9e8: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27B9E8u;
    SET_GPR_U32(ctx, 31, 0x27B9F0u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27B9E8u, 0x27B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9F0u;
label_27b9f0:
    // 0x27b9f0: 0x100200f5  beq         $zero, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x27B9F0u;
    {
        const bool branch_taken_0x27b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b9f0) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27B9F8u;
    // 0x27b9f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9fc: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27B9FCu;
    SET_GPR_U32(ctx, 31, 0x27BA04u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27B9FCu, 0x27BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA04u;
label_27ba04:
    // 0x27ba04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba08: 0xc0a63c8  jal         func_298F20
    ctx->pc = 0x27BA08u;
    SET_GPR_U32(ctx, 31, 0x27BA10u);
    ctx->pc = 0x298F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F20u, 0x27BA08u, 0x27BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA10u;
label_27ba10:
    // 0x27ba10: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x27BA10u;
    {
        const bool branch_taken_0x27ba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba10) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BA18u;
label_27ba18:
    // 0x27ba18: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x27ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27ba1c: 0x100300ea  beq         $zero, $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x27BA1Cu;
    {
        const bool branch_taken_0x27ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ba1c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BA24u;
    // 0x27ba24: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27ba24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba28: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27ba2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ba30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BA30u;
    SET_GPR_U32(ctx, 31, 0x27BA38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BA30u, 0x27BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA38u;
label_27ba38:
    // 0x27ba38: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x27ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x27ba3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x27ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x27ba40: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BA40u;
    {
        const bool branch_taken_0x27ba40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba40) {
            ctx->pc = 0x27BA64u;
            goto label_27ba64;
        }
    }
    ctx->pc = 0x27BA48u;
    // 0x27ba48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x27ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x27ba4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ba50: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27BA50u;
    SET_GPR_U32(ctx, 31, 0x27BA58u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27BA50u, 0x27BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA58u;
label_27ba58:
    // 0x27ba58: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x27ba5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BA5Cu;
    {
        const bool branch_taken_0x27ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba5c) {
            ctx->pc = 0x27BA68u;
            goto label_27ba68;
        }
    }
    ctx->pc = 0x27BA64u;
label_27ba64:
    // 0x27ba64: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x27ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_27ba68:
    // 0x27ba68: 0x8fb500b0  lw          $s5, 0xB0($sp)
    ctx->pc = 0x27ba68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27ba6c: 0x12a000d6  beqz        $s5, . + 4 + (0xD6 << 2)
    ctx->pc = 0x27BA6Cu;
    {
        const bool branch_taken_0x27ba6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba6c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BA74u;
    // 0x27ba74: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27ba78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ba7c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BA7Cu;
    SET_GPR_U32(ctx, 31, 0x27BA84u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BA7Cu, 0x27BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA84u;
label_27ba84:
    // 0x27ba84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ba84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba88: 0x1010001b  beq         $zero, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27BA88u;
    {
        const bool branch_taken_0x27ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x27ba88) {
            ctx->pc = 0x27BAF8u;
            goto label_27baf8;
        }
    }
    ctx->pc = 0x27BA90u;
    // 0x27ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba94: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27BA94u;
    SET_GPR_U32(ctx, 31, 0x27BA9Cu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27BA94u, 0x27BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA9Cu;
label_27ba9c:
    // 0x27ba9c: 0x10020016  beq         $zero, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27BA9Cu;
    {
        const bool branch_taken_0x27ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ba9c) {
            ctx->pc = 0x27BAF8u;
            goto label_27baf8;
        }
    }
    ctx->pc = 0x27BAA4u;
    // 0x27baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27baa8: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27BAA8u;
    SET_GPR_U32(ctx, 31, 0x27BAB0u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27BAA8u, 0x27BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAB0u;
label_27bab0:
    // 0x27bab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bab4: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x27BAB4u;
    SET_GPR_U32(ctx, 31, 0x27BABCu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x27BAB4u, 0x27BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BABCu;
label_27babc:
    // 0x27babc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BABCu;
    {
        const bool branch_taken_0x27babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27babc) {
            ctx->pc = 0x27BAE0u;
            goto label_27bae0;
        }
    }
    ctx->pc = 0x27BAC4u;
    // 0x27bac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bac8: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27BAC8u;
    SET_GPR_U32(ctx, 31, 0x27BAD0u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27BAC8u, 0x27BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAD0u;
label_27bad0:
    // 0x27bad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bad8: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x27BAD8u;
    SET_GPR_U32(ctx, 31, 0x27BAE0u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x27BAD8u, 0x27BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAE0u;
label_27bae0:
    // 0x27bae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bae4: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x27BAE4u;
    SET_GPR_U32(ctx, 31, 0x27BAECu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x27BAE4u, 0x27BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAECu;
label_27baec:
    // 0x27baec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27baecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27baf0: 0xc11e00c  jal         func_478030
    ctx->pc = 0x27BAF0u;
    SET_GPR_U32(ctx, 31, 0x27BAF8u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x27BAF0u, 0x27BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAF8u;
label_27baf8:
    // 0x27baf8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bafc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27bb00: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bb04: 0xc0641e4  jal         func_190790
    ctx->pc = 0x27BB04u;
    SET_GPR_U32(ctx, 31, 0x27BB0Cu);
    ctx->pc = 0x190790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190790u, 0x27BB04u, 0x27BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB0Cu;
label_27bb0c:
    // 0x27bb0c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bb10: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x27bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x27bb14: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bb18: 0xc0641a0  jal         func_190680
    ctx->pc = 0x27BB18u;
    SET_GPR_U32(ctx, 31, 0x27BB20u);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x27BB18u, 0x27BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB20u;
label_27bb20:
    // 0x27bb20: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27bb24: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x27bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27bb28: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x27bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27bb2c: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x27bb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x27bb30: 0xc0a08d8  jal         func_282360
    ctx->pc = 0x27BB30u;
    SET_GPR_U32(ctx, 31, 0x27BB38u);
    ctx->pc = 0x282360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282360u, 0x27BB30u, 0x27BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bb3c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x27bb40: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bb44: 0xc0641a0  jal         func_190680
    ctx->pc = 0x27BB44u;
    SET_GPR_U32(ctx, 31, 0x27BB4Cu);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x27BB44u, 0x27BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB4Cu;
label_27bb4c:
    // 0x27bb4c: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27bb50: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x27bb54: 0xc041998  jal         func_106660
    ctx->pc = 0x27BB54u;
    SET_GPR_U32(ctx, 31, 0x27BB5Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27BB54u, 0x27BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB5Cu;
label_27bb5c:
    // 0x27bb5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BB5Cu;
    {
        const bool branch_taken_0x27bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb5c) {
            ctx->pc = 0x27BB78u;
            goto label_27bb78;
        }
    }
    ctx->pc = 0x27BB64u;
    // 0x27bb64: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bb68: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x27bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bb6c: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x27bb70: 0xc09ef80  jal         func_27BE00
    ctx->pc = 0x27BB70u;
    SET_GPR_U32(ctx, 31, 0x27BB78u);
    ctx->pc = 0x27BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE00u, 0x27BB70u, 0x27BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB78u;
label_27bb78:
    // 0x27bb78: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27bb7c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x27bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x27bb80: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BB80u;
    SET_GPR_U32(ctx, 31, 0x27BB88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BB80u, 0x27BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB88u;
label_27bb88:
    // 0x27bb88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27bb88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb8c: 0x1014008e  beq         $zero, $s4, . + 4 + (0x8E << 2)
    ctx->pc = 0x27BB8Cu;
    {
        const bool branch_taken_0x27bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x27bb8c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BB94u;
    // 0x27bb94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27bb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb98: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27BB98u;
    SET_GPR_U32(ctx, 31, 0x27BBA0u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27BB98u, 0x27BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBA0u;
label_27bba0:
    // 0x27bba0: 0x10020089  beq         $zero, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x27BBA0u;
    {
        const bool branch_taken_0x27bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27bba0) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BBA8u;
    // 0x27bba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bbac: 0xc0a6398  jal         func_298E60
    ctx->pc = 0x27BBACu;
    SET_GPR_U32(ctx, 31, 0x27BBB4u);
    ctx->pc = 0x298E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E60u, 0x27BBACu, 0x27BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBB4u;
label_27bbb4:
    // 0x27bbb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bbb8: 0xc0a63c8  jal         func_298F20
    ctx->pc = 0x27BBB8u;
    SET_GPR_U32(ctx, 31, 0x27BBC0u);
    ctx->pc = 0x298F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F20u, 0x27BBB8u, 0x27BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBC0u;
label_27bbc0:
    // 0x27bbc0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x27BBC0u;
    {
        const bool branch_taken_0x27bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbc0) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BBC8u;
label_27bbc8:
    // 0x27bbc8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x27bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27bbcc: 0x1003007e  beq         $zero, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x27BBCCu;
    {
        const bool branch_taken_0x27bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bbcc) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BBD4u;
    // 0x27bbd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27bbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bbd8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27bbdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27bbe0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BBE0u;
    SET_GPR_U32(ctx, 31, 0x27BBE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BBE0u, 0x27BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBE8u;
label_27bbe8:
    // 0x27bbe8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x27bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x27bbec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27bbf0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BBF0u;
    {
        const bool branch_taken_0x27bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbf0) {
            ctx->pc = 0x27BC14u;
            goto label_27bc14;
        }
    }
    ctx->pc = 0x27BBF8u;
    // 0x27bbf8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27bbfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bc00: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27BC00u;
    SET_GPR_U32(ctx, 31, 0x27BC08u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27BC00u, 0x27BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC08u;
label_27bc08:
    // 0x27bc08: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x27bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x27bc0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BC0Cu;
    {
        const bool branch_taken_0x27bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc0c) {
            ctx->pc = 0x27BC18u;
            goto label_27bc18;
        }
    }
    ctx->pc = 0x27BC14u;
label_27bc14:
    // 0x27bc14: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x27bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_27bc18:
    // 0x27bc18: 0x8fb300ac  lw          $s3, 0xAC($sp)
    ctx->pc = 0x27bc18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x27bc1c: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
    ctx->pc = 0x27BC1Cu;
    {
        const bool branch_taken_0x27bc1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc1c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BC24u;
    // 0x27bc24: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27bc28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27bc2c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BC2Cu;
    SET_GPR_U32(ctx, 31, 0x27BC34u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BC2Cu, 0x27BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC34u;
label_27bc34:
    // 0x27bc34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27bc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc3c: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27BC3Cu;
    SET_GPR_U32(ctx, 31, 0x27BC44u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27BC3Cu, 0x27BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC44u;
label_27bc44:
    // 0x27bc44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27BC44u;
    {
        const bool branch_taken_0x27bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc44) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC4Cu;
    // 0x27bc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc50: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27BC50u;
    SET_GPR_U32(ctx, 31, 0x27BC58u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27BC50u, 0x27BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC58u;
label_27bc58:
    // 0x27bc58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27bc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc60: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x27BC60u;
    SET_GPR_U32(ctx, 31, 0x27BC68u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x27BC60u, 0x27BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC68u;
label_27bc68:
    // 0x27bc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc6c: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27BC6Cu;
    SET_GPR_U32(ctx, 31, 0x27BC74u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27BC6Cu, 0x27BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC74u;
label_27bc74:
    // 0x27bc74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc78: 0xc11e020  jal         func_478080
    ctx->pc = 0x27BC78u;
    SET_GPR_U32(ctx, 31, 0x27BC80u);
    ctx->pc = 0x478080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478080u, 0x27BC78u, 0x27BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC80u;
label_27bc80:
    // 0x27bc80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27BC80u;
    {
        const bool branch_taken_0x27bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc80) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC88u;
    // 0x27bc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc8c: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x27BC8Cu;
    SET_GPR_U32(ctx, 31, 0x27BC94u);
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x27BC8Cu, 0x27BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC94u;
label_27bc94:
    // 0x27bc94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc98: 0xc11e00c  jal         func_478030
    ctx->pc = 0x27BC98u;
    SET_GPR_U32(ctx, 31, 0x27BCA0u);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x27BC98u, 0x27BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCA0u;
label_27bca0:
    // 0x27bca0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bca4: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x27bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x27bca8: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bcac: 0xc0641e4  jal         func_190790
    ctx->pc = 0x27BCACu;
    SET_GPR_U32(ctx, 31, 0x27BCB4u);
    ctx->pc = 0x190790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190790u, 0x27BCACu, 0x27BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCB4u;
label_27bcb4:
    // 0x27bcb4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bcb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27bcbc: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bcc0: 0xc0641a0  jal         func_190680
    ctx->pc = 0x27BCC0u;
    SET_GPR_U32(ctx, 31, 0x27BCC8u);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x27BCC0u, 0x27BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCC8u;
label_27bcc8:
    // 0x27bcc8: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x27bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x27bccc: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x27bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x27bcd0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x27bcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27bcd4: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x27bcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x27bcd8: 0xc0a08d8  jal         func_282360
    ctx->pc = 0x27BCD8u;
    SET_GPR_U32(ctx, 31, 0x27BCE0u);
    ctx->pc = 0x282360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282360u, 0x27BCD8u, 0x27BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCE0u;
label_27bce0:
    // 0x27bce0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bce4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x27bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x27bce8: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x27bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bcec: 0xc0641a0  jal         func_190680
    ctx->pc = 0x27BCECu;
    SET_GPR_U32(ctx, 31, 0x27BCF4u);
    ctx->pc = 0x190680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190680u, 0x27BCECu, 0x27BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCF4u;
label_27bcf4:
    // 0x27bcf4: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x27bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x27bcf8: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x27bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x27bcfc: 0xc041998  jal         func_106660
    ctx->pc = 0x27BCFCu;
    SET_GPR_U32(ctx, 31, 0x27BD04u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27BCFCu, 0x27BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD04u;
label_27bd04:
    // 0x27bd04: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27BD04u;
    {
        const bool branch_taken_0x27bd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd04) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BD0Cu;
    // 0x27bd0c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x27bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27bd10: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x27bd14: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x27bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x27bd18: 0xc09ef80  jal         func_27BE00
    ctx->pc = 0x27BD18u;
    SET_GPR_U32(ctx, 31, 0x27BD20u);
    ctx->pc = 0x27BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE00u, 0x27BD18u, 0x27BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD20u;
label_27bd20:
    // 0x27bd20: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27BD20u;
    {
        const bool branch_taken_0x27bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd20) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BD28u;
label_27bd28:
    // 0x27bd28: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x27bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27bd2c: 0x10030026  beq         $zero, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x27BD2Cu;
    {
        const bool branch_taken_0x27bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x27bd2c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BD34u;
    // 0x27bd34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27bd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd38: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x27bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27bd3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27bd40: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BD40u;
    SET_GPR_U32(ctx, 31, 0x27BD48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BD40u, 0x27BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD48u;
label_27bd48:
    // 0x27bd48: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x27bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x27bd4c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x27bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27bd50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BD50u;
    {
        const bool branch_taken_0x27bd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd50) {
            ctx->pc = 0x27BD74u;
            goto label_27bd74;
        }
    }
    ctx->pc = 0x27BD58u;
    // 0x27bd58: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x27bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27bd5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bd60: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27BD60u;
    SET_GPR_U32(ctx, 31, 0x27BD68u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27BD60u, 0x27BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD68u;
label_27bd68:
    // 0x27bd68: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x27bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x27bd6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BD6Cu;
    {
        const bool branch_taken_0x27bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd6c) {
            ctx->pc = 0x27BD78u;
            goto label_27bd78;
        }
    }
    ctx->pc = 0x27BD74u;
label_27bd74:
    // 0x27bd74: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x27bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_27bd78:
    // 0x27bd78: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27bd7c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x27BD7Cu;
    {
        const bool branch_taken_0x27bd7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd7c) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BD84u;
    // 0x27bd84: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x27bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27bd88: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27bd8c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27BD8Cu;
    SET_GPR_U32(ctx, 31, 0x27BD94u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27BD8Cu, 0x27BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD94u;
label_27bd94:
    // 0x27bd94: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x27bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x27bd98: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x27bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x27bd9c: 0xc0469cc  jal         func_11A730
    ctx->pc = 0x27BD9Cu;
    SET_GPR_U32(ctx, 31, 0x27BDA4u);
    ctx->pc = 0x11A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A730u, 0x27BD9Cu, 0x27BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDA4u;
label_27bda4:
    // 0x27bda4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BDA4u;
    {
        const bool branch_taken_0x27bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bda4) {
            ctx->pc = 0x27BDC8u;
            goto label_27bdc8;
        }
    }
    ctx->pc = 0x27BDACu;
    // 0x27bdac: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x27bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x27bdb0: 0xc0469cc  jal         func_11A730
    ctx->pc = 0x27BDB0u;
    SET_GPR_U32(ctx, 31, 0x27BDB8u);
    ctx->pc = 0x11A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A730u, 0x27BDB0u, 0x27BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDB8u;
label_27bdb8:
    // 0x27bdb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27bdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdc0: 0xc0e6f46  jal         func_39BD18
    ctx->pc = 0x27BDC0u;
    SET_GPR_U32(ctx, 31, 0x27BDC8u);
    ctx->pc = 0x39BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD18u, 0x27BDC0u, 0x27BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDC8u;
label_27bdc8:
    // 0x27bdc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27bdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27bdcc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27bdccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27bdd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27bdd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27bdd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27bdd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27bdd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27bdd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27bddc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27bddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bde0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27bde0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bde4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27bde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bdec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bdf0: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x27bdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BDFCu;
    // 0x27bdfc: 0x0  nop
    ctx->pc = 0x27bdfcu;
    // NOP
    ctx->pc = 0x27be00u;
}
